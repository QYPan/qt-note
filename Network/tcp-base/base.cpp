#if 0

Qt TCP socket 通信基础

server
-------

QTcpServer 用于接受接入的 TCP 连接

QDataStream 把数据写入正在连接的客户端

QTcpServer::listen() 用于监听 ip 及 端口

当一个客户端连接到服务器，QTcpServer 会触发 QTcpServer::newConnection() 信号
，然后可以在该信号的槽函数里调用 QTcpServer::nextPendingConnection() 函数，
生成一个临时 QTcpSocket::socket；之后把该 socket 的 QTcpSocket::disconnected() 信号绑定到QObject::deleteLater() 槽函数，确保 socket 在连接断开之后被删除

调用 QTcpSocket::disconnectFromHost() 函数可以断开连接

client
--------

生成一个新的 QTcpSocket

QTcpSocket::abort() 发起连接请求前中止之前的连接，如果没有，则什么也不做

QTcpSocket::connectToHost() 用于向服务器发起连接
1. 成功 : 则在每次收到数据时触发 QTcpSocket::readyRead() 信号
2. 是被 : 则触发 QTcpSocket::error() 信号

#endif
