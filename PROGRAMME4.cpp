#include <iostream>
using namespace std;
//classe m�re
class A{
public:
  void display ()
  {
    cout << "La m�thode display de la classe A est ex�cut�e\n";
  }
};
//classe fille h�rit�e.
class B : public A{
public:
  void display ()
  {
    cout << "La m�thode display de la classe B est ex�cut�e\n";
  }
};
int main ()
{
	//ON Autilise cette classe fille dans la m�thode main
  B b;
  b.display();
  return 0;
}
