#include <QApplication>
#include <QLabel>
#include <QMessageBox>

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);

	QImage myImage;
	myImage.load("hampter.jpeg");

	QLabel myLabel;
	myLabel.setPixmap(QPixmap::fromImage(myImage));

	QMessageBox msgBox;
	msgBox.setWindowTitle("Hampter");
	msgBox.setText("Hampter");
	msgBox.setStandardButtons(QMessageBox::Yes);
	msgBox.addButton(QMessageBox::No);
	msgBox.setDefaultButton(QMessageBox::No);
	
	msgBox.show();
	
	if(msgBox.exec() == QMessageBox::Yes)
	{
		myLabel.show();
	}
	else
	{
		QApplication::quit();
	}	
	
	return app.exec();
}
