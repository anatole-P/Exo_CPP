#include "Zombie.h"

using namespace std;

int main()
{
    Zombie n1;

    n1.setNom("Le Premier");
    n1.setDegats(8);
    n1.setPv(10);

    n1.showInfos();


    Zombie n2;
    n2.setDegats(10);
    n2.setNom("WoW");
    n2.setPv(1000);

    n2.showInfos();


    return 0;
}
