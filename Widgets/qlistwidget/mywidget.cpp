#include "mywidget.h"

MyWidget::
MyWidget(QWidget *parent)
: QWidget(parent), listWidget(0)
{
	resize(300, 500);
	listWidget = new QListWidget(this);
	listWidget->addItem(tr("China"));
	listWidget->addItem(tr("Hong Kong"));
	listWidget->addItem(tr("Macau"));
	QHBoxLayout *mainLayout = new QHBoxLayout;
	mainLayout->addWidget(listWidget);
	setLayout(mainLayout);
	connect(listWidget, SIGNAL(itemDoubleClicked(QListWidgetItem *)),
			this, SLOT(openMessageBox(QListWidgetItem *)));
}

void MyWidget::
openMessageBox(QListWidgetItem *item){
	QMessageBox msgBox;
	msgBox.setText(item->text());
	msgBox.exec();
}


