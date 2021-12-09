#include <iostream>

using namespace std;
//la classe mére
class media{
protected :
    string titre;
public:
    //les methodes de cette classe
    virtual void imprimer(){}
    virtual char* id(){}
};
//la premiere classe fille
class livre : public media{
    string auteur;
public :
    livre();
};


//la deuxieme classe fille
class audio : public media{
protected :
    string dure;
public:
    audio();
};
//cette classe est fille de la classe audio
class CD : public audio{
    float price;
public:
    CD();
};
//cette classe est fille de la classe audio
class cassette : public audio{
    float price;
public:
    cassette();
};
//cette classe est fille de la classe audio
class disque : public audio{
    float price;
public:
    disque();
};


//la fille 3 se la classse mére
class presse : public media{
protected :
    string directeur;
public:
    presse();
};
//cette classe est fille de la classe presse
class magazin : public presse{
    float price;
public:
    magazin();
};
//cette classe est fille de la classe presse
class journal : public presse{
    float price;
public:
    journal();
};
//cette classe est fille de la classe presse
class revue : public presse{
    float price;
public:
    revue();
};


int main()
{
    return 0;
}
