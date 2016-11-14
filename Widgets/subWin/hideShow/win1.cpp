#include "win1.h"

Win1::
Win1(QWidget *parent)
: QWidget(parent)
{
	resize(400, 300);
	button = new QPushButton(tr("next"));
	QVBoxLayout *layout = new QVBoxLayout;
	layout->addWidget(button);
	setLayout(layout);
	connect(button, SIGNAL(clicked()), this, SLOT(creatWin()));
}

void Win1::
creatWin(){
	subWin = new Win2(this);
	subWin->show();
	//this->hide();
}

Win2::
Win2(QWidget *parent)
: QWidget(parent)
{
	resize(400, 300);
	button = new QPushButton(tr("back from a"));
	QVBoxLayout *layout = new QVBoxLayout;
	layout->addWidget(button);
	setLayout(layout);
	connect(button, SIGNAL(clicked()), this, SLOT(backWin()));
}
void Win2::
backWin(){
	//this->hide();
	QWidget *parent = parentWidget();
	if(parent)
		parent->show();
	delete this;
}
