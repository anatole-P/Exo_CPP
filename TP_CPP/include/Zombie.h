#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>
#include <random>
#include <ctime>
#include <stdlib.h>

using namespace std;

class Zombie
{
    private:


        //DESTRUCTEUR

    protected:

        int pv=90;
        int degats=5;
        string nom= "Défault";

    public:
//CONSTRUCTEURS
        Zombie();


//DESTRUCTEUR
        ~Zombie();


//GETTER/SETTER PV
	int getPv() const;
	void setPv(int s);

    //GETTER/SETTER NOM
	string getNom() const;
	void setNom(string n);

    //GETTER/SETTER DEGATS
	int getDegats() const;
	void setDegats(int d);


    void showInfos() const;
};

#endif // ZOMBIE_H
