#ifndef BIEDRONKA_H
#define BIEDRONKA_H
#include <iostream>

using namespace std;

class biedronka
{
    public:
        biedronka();
        biedronka(int xp,int yp,double ep = 100,bool isA = true);
        virtual ~biedronka();
        int getX();
        int getY();
        double getE();
        bool getIsAlive();

    protected:
    private:
        int x,y;
        double energia;
        bool isAlive;
};

#endif // BIEDRONKA_H
