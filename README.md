There are three ways: use (just) object,
use object in QScopedPointer or object in  std::unique_ptr
```
    class1 cl1;
    std::unique_ptr<class1> cl2(new class1());
    QScopedPointer<class1> cl3(new class1());
    QBuffer buffer;
    buffer.open(QIODevice::WriteOnly);
    QDataStream myStream(&buffer);
    myStream << cl1 << "    " << *cl2.get() << "    " << *cl3.get();
    qDebug() << buffer.data();
```
output
```
"\x00\x00\x00\x0E\x00""d\x00""e\x00""f\x00""a\x00u\x00l\x00t\x00\x00\x00\x05    \x00\x00\x00\x00\x0E\x00""d\x00""e\x00""f\x00""a\x00u\x00l\x00t\x00\x00\x00\x05    \x00\x00\x00\x00\x0E\x00""d\x00""e\x00""f\x00""a\x00u\x00l\x00t"
```
## How to build
```
git clone https://github.com/AndreiCherniaev/unique_ptr_operator_overloading_unique_ptr
cd unique_ptr_operator_overloading_unique_ptr
mkdir build/
cmake -S src/ -B build/
cmake --build build/ --parallel 
```