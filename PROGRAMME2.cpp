#include <iostream>
using namespace std;
class Shape//définit une classe shape avec un constructeur qui donneune valeur à la largeur et à la hauteur.
{
protected:
  float x, y;
public:
  Shape(float _x, float _y)
  {
    x = _x;
    y = _y;
  }
};
//Définir deux sous-classes triangle et rectangle,
class Rectangle: public Shape
{
public:
  Rectangle(float _x, float _y) : Shape(_x, _y) {}
  float area()
  {
    return (x * y);
  }
};
class Triangle: public Shape
{
public:
  Triangle(float _x, float _y) : Shape(_x, _y) {}
  float area()
  {
    return (x * y / 2);
  }
};
//calculeR l'aire de la zone de shape().Dans la fonction principale main(),
int main (){
  Rectangle rectangle(2,3);
  Triangle triangle(2,3);
  cout << rectangle.area() << endl;   //6
  cout << triangle.area() << endl;    //3 
  return 0;
}
