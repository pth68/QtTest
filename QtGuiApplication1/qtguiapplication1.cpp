#include "stdafx.h"
#include "qtguiapplication1.h"

QtGuiApplication1::QtGuiApplication1(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	QListWidgetItem *item1 = new QListWidgetItem("test roter Hintergrund", ui.myList);
	item1->setBackground(QBrush(QColor(255, 0, 0)));

	QListWidgetItem *item2 = new QListWidgetItem("test normal", ui.myList);

	ui.myList->setCurrentItem(item2);

}

void QtGuiApplication1::on_okButton_clicked()
{
	assert(0);
}
