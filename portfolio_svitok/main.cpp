// незаморачивваясь правим из примера https://www.easycoding.org/2014/05/20/sozdayom-formu-s-podderzhkoj-prozrachnosti-na-qt-widgets.html
// только удаляя стили для форм
#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

//  размер экрана от QApplication::desktop() ивзято из https://forum.vingrad.ru/topic-244608.html
    int cur_x = w.width();// returns desktop width
    int cur_y = w.height();// returns desktop height
// незаморачивваясь берем картинку фиксировано 614х777
    int x = cur_x - 614/2;
    int y = (cur_y - 777)/2;

    w.setGeometry(x, y, 614, 777);
    w.show();
    return a.exec();
}
