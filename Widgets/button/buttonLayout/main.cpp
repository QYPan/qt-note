#include <QtGui>

class MyWidget : public QWidget{
public:
	MyWidget(QWidget *parent = 0);
private:
	QLabel *label;
	QPushButton *button1;
	QPushButton *button2;
	QDialogButtonBox *buttonBox;
};

MyWidget::
MyWidget(QWidget *parent)
: QWidget(parent)
{
	resize(400, 300);
	label = new QLabel(tr("I have a pen"));
	button1 = new QPushButton(tr("Push1"));
	button2 = new QPushButton(tr("Push2"));

	buttonBox = new QDialogButtonBox;
	buttonBox->addButton(button1, QDialogButtonBox::ActionRole);
	buttonBox->addButton(button2, QDialogButtonBox::RejectRole);

#if 0
	QHBoxLayout *buttonLayout = new QHBoxLayout;
	buttonLayout->addStretch(1);
	buttonLayout->addWidget(button1);
	buttonLayout->addWidget(button2);
	buttonLayout->addStretch(1);
#endif

	QVBoxLayout *mainLayout = new QVBoxLayout;
	mainLayout->addWidget(label);
	mainLayout->addWidget(buttonBox);
	//mainLayout->addLayout(buttonLayout);
	setLayout(mainLayout);
}

int main(int argc, char **argv)
{
	QApplication app(argc, argv);
	MyWidget mw;
	mw.show();
	return app.exec();
}
