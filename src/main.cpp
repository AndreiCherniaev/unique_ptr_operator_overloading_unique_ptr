#include <QCoreApplication>
#include <QObject>
#include <QBuffer>
#include "class1.h"

int main(int argc, char *argv[]){
    QCoreApplication a(argc, argv);
    QMetaObject::invokeMethod(&a, "quit", Qt::QueuedConnection);
    class1 cl1;
    std::unique_ptr<class1> cl2;
    QScopedPointer<class1> cl3;
    QBuffer buffer;
    buffer.open(QIODevice::WriteOnly);
    QDataStream myStream(&buffer);
    myStream << cl1 << "    " << cl2.get() << "    " << cl3.get();
    qDebug() << buffer.data();
    return a.exec();
}
