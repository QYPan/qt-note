#include <QtGui>

class Path : public QWidget{
public:
	Path();
protected:
	void paintEvent(QPaintEvent *event);
};

Path::
Path(){
	resize(400, 300);
}

void Path::
paintEvent(QPaintEvent *event){
	QPainterPath path;
	qreal x = path.currentPosition().x();
	qreal y = path.currentPosition().y();
	path.moveTo(x + 120 / 2, y);
	path.lineTo(0, 100);
	path.lineTo(120, 100);
	path.lineTo(x + 120 / 2, y);

	QPainter painter(this);
	painter.translate(QPoint(34, 67));
	painter.drawPath(path);
	painter.setBrush(QBrush(Qt::Dense1Pattern));
	painter.translate(QPoint(-34, -67));
	painter.drawEllipse(QPoint(x, y), 10, 10);
#if 0
	QPainterPath path;
	path.addRect(20, 20, 60, 60);

	path.moveTo(0, 0);
	path.cubicTo(99, 0, 50, 50, 99, 99);
	path.cubicTo(0, 99, 50, 50, 0, 0);

	QPainter painter(this);
	painter.fillRect(0, 0, 100, 100, Qt::white);
	painter.setPen(QPen(QColor(79, 106, 25), 1, Qt::SolidLine,
				Qt::FlatCap, Qt::MiterJoin));
	painter.setBrush(QColor(122, 163, 39));
	painter.drawPath(path);
#endif
}

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	Path path;
	path.show();
	return app.exec();
}
