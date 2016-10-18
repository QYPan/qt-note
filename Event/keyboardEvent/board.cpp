#include "board.h"

Board::
Board(QWidget *parent)
: QFrame(parent)
{
	resize(600, 600);
	for(int i = 0; i < BoardHeight; i++)
		for(int j = 0; j < BoardWidth; j++)
			stateAt(i, j) = None;
	stateAt(BoardHeight/2, BoardWidth/2) = Man;
	manPosition.setY(BoardHeight/2);
	manPosition.setX(BoardWidth/2);
}

void Board::
paintEvent(QPaintEvent * /* event */){
	QPainter painter(this);
	QRect rect = contentsRect();
	for(int i = 0; i < BoardHeight; i++){
		for(int j = 0; j < BoardWidth; j++){
			SquareState state = stateAt(i, j);
			drawSquare(painter, rect.left()+j*squareWidth(),
					rect.top()+i*squareHeight(), state);
		}
	}
}

void Board::
drawAt(const QPoint &pos){
	int y = pos.y() / squareHeight();
	int x = pos.x() / squareWidth();
	stateAt(y, x) = Wall;
	update();
}

void Board::
mousePressEvent(QMouseEvent *event){
	if(event->button() == Qt::LeftButton)
		drawAt(event->pos());
}

void Board::
mouseMoveEvent(QMouseEvent *event){
	if(event->buttons() & Qt::LeftButton)
		drawAt(event->pos());
}

void Board::
mouseReleaseEvent(QMouseEvent *event){
	if(event->button() == Qt::LeftButton)
		drawAt(event->pos());
}

void Board::
keyPressEvent(QKeyEvent *event){
	int key = event->key();
	if(key != Qt::Key_Up && key != Qt::Key_Down &&
			key != Qt::Key_Left && key != Qt::Key_Right){
		QFrame::keyPressEvent(event);
		return;
	}
	int y = manPosition.y();
	int x = manPosition.x();
	switch(key){
		case Qt::Key_Up :
			if(y-1 >= 0){
				stateAt(y, x) = None;
				manPosition.setY(y-1);
				stateAt(y-1, x) = Man;
			}
			break;
		case Qt::Key_Down :
			if(y+1 < BoardHeight){
				stateAt(y, x) = None;
				manPosition.setY(y+1);
				stateAt(y+1, x) = Man;
			}
			break;
		case Qt::Key_Left :
			if(x-1 >= 0){
				stateAt(y, x) = None;
				manPosition.setX(x-1);
				stateAt(y, x-1) = Man;
			}
			break;
		case Qt::Key_Right :
			if(x+1 < BoardWidth){
				stateAt(y, x) = None;
				manPosition.setX(x+1);
				stateAt(y, x+1) = Man;
			}
			break;
		default:
			QFrame::keyPressEvent(event);
	}
	update();
}

void Board::
drawSquare(QPainter &painter, int x, int y, SquareState state){
	static const QRgb colorTable[5] = {
		0xEF7878, 0xAB7832, 0xCC7839, 0xDD1234, 0xCE8989
	};
	QColor color = colorTable[int(state)];
	if(state == None) color.setAlpha(80);
	painter.fillRect(x+1, y+1, squareWidth()-2, squareHeight()-2, color);
	painter.setPen(color.light());
	painter.drawLine(x, y+squareHeight()-1, x, y);
	painter.drawLine(x, y, x+squareWidth()-1, y);
	painter.setPen(color.dark());
	painter.drawLine(x+1, y+squareHeight()-1,
			x+squareWidth()-1, y+squareHeight()-1);
	painter.drawLine(x+squareWidth()-1, y+squareHeight()-1,
			x+squareWidth()-1, y+1);
}
