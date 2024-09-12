#pragma once

#include <QObject>
#include <QCoreApplication>

class class1 : public QObject
{
    Q_OBJECT
public:
    friend QDataStream & operator>> (QDataStream& stream, class1& image);
    friend QDataStream & operator<< (QDataStream& stream, const class1& image);

private:
    QString myString = "default";
};
