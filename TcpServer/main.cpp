#include <QCoreApplication>
#include "server.h"

QTextStream qtin(stdin);
QTextStream qtout(stdout);

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString host;
    qtout << "Enter host: " << endl;
    qtin >> host;

    QString port;
    qtout << "Enter port: " << endl;
    qtin >> port;

    Server s(host, port.toInt());

    return a.exec();
}
