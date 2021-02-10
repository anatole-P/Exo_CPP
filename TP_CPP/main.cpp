#include "Zombie.h"
#include "Tank.h"

using namespace std;

int main()
{
    Zombie n1;

    n1.setNom("Le Premier");
    n1.setDegats(8);
    n1.setPv(10);

    n1.showInfos();


    Zombie n2;
    n2.setNom("Wow");
    n2.setDegats(10);
    n2.setPv(1000);

    n2.showInfos();

    Bomber B;
    B.setDegats(9);
    B.setPv(99);
    B.setNom("Boomer");
    B.setExplose(9);
    B.showInfos();
    cout<<"Degats d'explosion :"<<Bomber.getExplose()<<endl;

    Tank t1;
    return 0;
}
