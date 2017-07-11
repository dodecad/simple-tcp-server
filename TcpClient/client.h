#ifndef CLIENT_H
#define CLIENT_H

#include <QtCore>
#include <QtNetwork>

class Client : public QObject
{
    Q_OBJECT
public:
    explicit Client(QObject *parent = 0);

public slots:
    bool connectToHost(QString host, qint32 port);
    bool writeData(QByteArray data);

private:
    QTcpSocket *socket;
};

#endif // CLIENT_H
