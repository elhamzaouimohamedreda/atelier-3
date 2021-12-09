#include <iostream>
using namespace std;
//definition de la classe
class MyClass
{
public:
    MyClass();  //declaraction constructor
    ~MyClass(); //declaration destructor
};
//definition de constructeur
MyClass::MyClass()
{
    cout << "Constructeur " << endl;
}
//definition du destructeur
MyClass::~MyClass()
{
    cout << "destructeur " << endl;
}
int main(void)
{
    MyClass c1; //creation d'un  object de MyClass
    return 0;
}

