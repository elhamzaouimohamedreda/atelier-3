#include <iostream>
using namespace std;
//classe mère
class A{
public:
  void display ()
  {
    cout << "La méthode display de la classe A est exécutée\n";
  }
};
//classe fille héritée.
class B : public A{
public:
  void display ()
  {
    cout << "La méthode display de la classe B est exécutée\n";
  }
};
int main ()
{
	//ON Autilise cette classe fille dans la méthode main
  B b;
  b.display();
  return 0;
}
