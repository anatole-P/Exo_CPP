#ifndef TANK_H
#define TANK_H

#include "Zombie.h"

class Tank: public Zombie
{
    public:
        Tank();
        virtual ~Tank();

    protected:

    private:
        int armor;
};

#endif // TANK_H
