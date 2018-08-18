#ifndef UDPCLIENT_H
#define UDPCLIENT_H

#include <QObject>
#include <QHostAddress>
#include <QUdpSocket>

class UdpClient : public QObject
{
    Q_OBJECT
public:
    explicit UdpClient(QObject *parent,
                             const QHostAddress &host,
                             quint16 port);

    static bool send(const QByteArray &data,
                            const QHostAddress &address,
                            quint16 port);

   bool send(const QByteArray &data);

private:
    QHostAddress m_host;
    quint16 m_port;
};

#endif // UDPCLIENT_H