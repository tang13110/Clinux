#include "mainwindowex4.h"

#include <QApplication>

MainWindowEx4 *w; //variable globale externe qu'on utilise dans les autres fichiers. Extern car la même

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    w = new MainWindowEx4();
    w->show();
    return a.exec();
}
