#include "gamesetting.h"
#include <QApplication>
#include "qdebug.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    gamesetting w1;
    w1.show();

    return a.exec();
}
