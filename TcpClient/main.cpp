#include <QCoreApplication>
#include "client.h"

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

    Client c;

    qDebug() << "Sending:" << c.connectToHost(host, port.toInt());

    QFile file("/home/alex/Documents/test.odt");
    file.open(QIODevice::ReadOnly);
    QByteArray data = file.readAll();
    file.close();

    c.writeData(data);

    return a.exec();
}
