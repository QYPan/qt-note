#include <QtGui>
#include <cstdio>

class Shape{
public:
	void setPath(const QPainterPath &path);
	void setPosition(const QPoint &position);
	QPainterPath path() const;
	QPoint position() const;
private:
	QPainterPath myPath;
	QPoint myPosition;
};

void Shape::
setPath(const QPainterPath &path){
	myPath = path;
}

void Shape::
setPosition(const QPoint &position){
	myPosition = position;
}

QPainterPath Shape::
path() const{
	return myPath;
}

QPoint Shape::
position() const{
	return myPosition;
}

class MyWidget : public QWidget{
public:
	MyWidget();
protected:
	void paintEvent(QPaintEvent *event);
	void mousePressEvent(QMouseEvent *event);
	void mouseMoveEvent(QMouseEvent *event);
	void mouseReleaseEvent(QMouseEvent *event);
private:
	bool itemAt(const QPoint &pos);
	void moveItemTo(const QPoint &pos);
	//Shape *itemInMotion;
	bool itemInMotion;
	Shape rect;
	QPoint previousePosition;
};

MyWidget::
MyWidget(){
	resize(400, 300);
	QPainterPath rectPath;
	rectPath.addRect(QRect(0, 0, 100, 100));
	rect.setPath(rectPath);
	rect.setPosition(QPoint(0, 0));
	itemInMotion = 0;
}

void MyWidget::
paintEvent(QPaintEvent * /* event */){
	QPainter painter(this);
	painter.setRenderHint(QPainter::Antialiasing);
	painter.translate(rect.position());
	//painter.setBrush(QColor(234, 123, 222));
	QImage image;
	image.load("/home/pqy/program/repo/qtnode/Event/mouseEvent/a.jpg");
	image = image.scaled(QSize(100, 100));
	painter.setBrush(QBrush(image));
	painter.drawPath(rect.path());
	painter.translate(-rect.position());
}

bool MyWidget::
itemAt(const QPoint &pos){
	if(rect.path().contains(pos - rect.position())){
		return true;
	}
	else
		return false;
}

void MyWidget::
mousePressEvent(QMouseEvent *event){
	if(event->button() == Qt::LeftButton){
		if(itemAt(event->pos())){
			//itemInMotion = &rect;
			itemInMotion = 1;
			previousePosition = event->pos();
		}
	}
}

void MyWidget::
mouseMoveEvent(QMouseEvent *event){
	if((event->buttons() & Qt::LeftButton) && itemInMotion)
		moveItemTo(event->pos());
}

void MyWidget::
mouseReleaseEvent(QMouseEvent *event){
	if(event->button() == Qt::LeftButton && itemInMotion){
		moveItemTo(event->pos());
		itemInMotion = 0;
	};
}

void MyWidget::
moveItemTo(const QPoint &pos){
	QPoint offset = pos - previousePosition;
	//itemInMotion->setPosition(itemInMotion->position() + offset);
	rect.setPosition(rect.position() + offset);
	previousePosition = pos;
	update();
}

int main(int argc, char *argv[]){
	QApplication app(argc, argv);
	MyWidget mw;
	mw.show();
	return app.exec();
}
