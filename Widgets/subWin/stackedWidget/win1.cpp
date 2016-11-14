#include "win1.h"

Win1::
Win1()
{
	QLabel *firstPageLabel = new QLabel(tr("label 1"));
    QLabel *secondPageLabel = new QLabel(tr("label 2"));
    QLabel *thirdPageLabel = new QLabel(tr("label 3"));

    QStackedWidget *stackedLabel = new QStackedWidget;
    stackedLabel->addWidget(firstPageLabel);
    stackedLabel->addWidget(secondPageLabel);
    stackedLabel->addWidget(thirdPageLabel);

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(stackedLabel);

	QComboBox *pageComboBox = new QComboBox;
    pageComboBox->addItem(tr("Page 1"));
    pageComboBox->addItem(tr("Page 2"));
    pageComboBox->addItem(tr("Page 3"));

    layout->addWidget(pageComboBox);
    setLayout(layout);

    connect(pageComboBox, SIGNAL(activated(int)),
        stackedLabel, SLOT(setCurrentIndex(int)));
}
