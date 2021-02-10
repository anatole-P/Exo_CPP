#include "Bomber.h"

Bomber::Bomber():Zombie()
{
   bool Bomber::getExplose() const
{
    return expl;
}
void Bomber::setExplose(int expl){
    expl=degats*3;
}

Bomber::~Bomber()
{
    //dtor
}
