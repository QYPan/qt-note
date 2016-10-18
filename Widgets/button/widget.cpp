#include "widget.h"
#include <cstdio>

MyWidget::
MyWidget(QWidget *parent)
: QWidget(parent)
{
	resize(400, 300);

	circleCursor = new QCursor(QPixmap(":/images/circle.png"));
	squareCursor = new QCursor(QPixmap(":/images/square.png"));
	triangCursor = new QCursor(QPixmap(":/images/triangle.png"));

	circleButton = createToolButton(QIcon(":/images/circle.png"),
			                        SLOT(changeCircleCursor()));
	squareButton = createToolButton(QIcon(":/images/square.png"),
			                        SLOT(changeSquareCursor()));
	triangButton = createToolButton(QIcon(":/images/triangle.png"),
			                        SLOT(changeTriangCursor()));
}

void MyWidget::
changeCircleCursor(){
	setCursor(*circleCursor);
}

void MyWidget::
changeSquareCursor(){
	setCursor(*squareCursor);
}

void MyWidget::
changeTriangCursor(){
	setCursor(*triangCursor);
}

QToolButton *MyWidget::
createToolButton(const QIcon &icon, const char *member){
	QToolButton *button = new QToolButton(this);
	button->setIcon(icon);
	button->setIconSize(QSize(32, 32));
	connect(button, SIGNAL(clicked()), this, member);
	return button;
}

void MyWidget::
resizeEvent(QResizeEvent * /* event */){
	int margin = style()->pixelMetric(QStyle::PM_DefaultTopLevelMargin);
	int x = width() - margin;
	int y = height() - margin;
	y = updateButtonGeometry(circleButton, x, y);
	y = updateButtonGeometry(squareButton, x, y);
	updateButtonGeometry(triangButton, x, y);
}

int MyWidget::
updateButtonGeometry(QToolButton *button, int x, int y){
	QSize size = button->sizeHint();
	button->setGeometry(x-size.rwidth(), y-size.rheight(),
			            size.rwidth(), size.rheight());
	return y-size.rheight()
		   - style()->pixelMetric(QStyle::PM_DefaultLayoutSpacing);
}
