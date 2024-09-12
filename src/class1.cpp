#include "class1.h"

QDataStream & operator>> (QDataStream& stream, class1& image)
{
    stream >> image.myString;
    return stream;
}

QDataStream & operator<< (QDataStream& stream, const class1& image)
{
    stream << image.myString;
    return stream;
}
