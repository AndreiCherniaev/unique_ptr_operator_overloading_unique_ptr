#include "class1.h"

QDataStream & operator>>(QDataStream& stream, class1& s){
    stream >> s.myString;
    return stream;
}

QDataStream & operator<<(QDataStream& stream, const class1& s){
    stream << s.myString;
    return stream;
}
