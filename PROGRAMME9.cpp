#include <iostream>
using namespace std;
// Cr�ation de la classe Test
class Test{
    // Attribut statique
    public:
    static int count;
    // M�thode call()
    void call(){
        count++;
        cout<<count<<endl;
    }
};
// Initialisation d'attribut count
int Test::count = 0;

int main(){
    // Cr�ation de l'instance test1
    Test test1;
    test1.call();
    test1.call();
    test1.call();
    return 0;
};
