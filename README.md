In my example
QScopedPointer or std::unique_ptr disable operator overloading. Can I use my operator overloading with QScopedPointer or unique_ptr?
```
    class1 cl1;
    std::unique_ptr<class1> cl2;
    QScopedPointer<class1> cl3;
    QBuffer buffer;
    buffer.open(QIODevice::WriteOnly);
    QDataStream myStream(&buffer);
    myStream << cl1 << "    " << cl2.get() << "    " << cl3.get();
    qDebug() << buffer.data();
```
output
```
"\x00\x00\x00\x0E\x00""d\x00""e\x00""f\x00""a\x00u\x00l\x00t\x00\x00\x00\x05    \x00\x00\x00\x00\x00\x05    \x00\x00"
```
