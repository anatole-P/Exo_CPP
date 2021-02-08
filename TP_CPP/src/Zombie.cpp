#include "Zombie.h"

Zombie::Zombie()
{
    pv = 100;
	nom = "Default";
	degats = 2;
	cout<< "Je suis un Zombie"<<endl;
}
Zombie::~Zombie(){
    cout<<"Le zombie est detruit"<<endl;
}

int Zombie::getPv() const
{
	return pv;
}

void Zombie::setPv(int s) {
	if (s >= 100 || s < 0) {
		cerr << "pv non autorise" << endl;
		pv = 0;
	}
	else {
		pv = s;
	}
}


void Zombie::setDegats(int d) {
	if (d >= 10 || d < 0) {
		cerr << "degats non autorise" << endl;
		degats = 0;
	}
	else {
		degats = d;
	}
}
string Zombie::getNom() const
{
	return nom;
}
void Zombie::setNom(string n)
{
	nom = n;
}


int Zombie::getDegats() const
{
	return degats;
}


void Zombie::showInfos() const
{
	cout << "nom : " << getNom() << endl;
	cout << "pv : " << getPv() << endl;
	cout << "degats : " << getDegats() << endl;
	cout << "_______________________" << endl;

}
