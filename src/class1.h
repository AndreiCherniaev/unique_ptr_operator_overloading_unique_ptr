#pragma once

#include <QObject>

class class1 : public QObject
{
    Q_OBJECT
public:
    friend QDataStream &operator>>(QDataStream& stream, class1& s);
    friend QDataStream &operator<<(QDataStream& stream, const class1& s);

private:
    QString myString = "default";
};
