#include <iostream>
using namespace std;
class Animal{ // base class declaration.
    public:
    string nom;
    int age;
    public:
    void set_value(string nom, int age){
        cout<<nom<<age<<endl;
    }
};
class Zebra : public Animal{// derived class declaration.
    public:
    void set_value(string nom1 , int age1 , string origine ){ //fonction parametrer
          nom = nom1;
         age = age1;
         origine;
        cout<<"les informations du zebra sont: "<<nom <<" "<<age<<" "<<origine<<endl;
    }
};
class Dolphin : public Animal{// derived class declaration.
    public:
    void set_value(string nom2, int age2, string origine){ //fonction parametrer
          nom=nom2;
         age=age2;
         origine;
        cout<<"les informations du Delphin sont: "<<nom <<" "<<age<<" "<<origine<<endl;
    }
};
int main(void){
   Zebra zebra; // class object declaration
   zebra.set_value("z1", 15,"asia");
   Dolphin dolphin;// class object declaration
   dolphin.set_value("d1",20,"africa");

}
