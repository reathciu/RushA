#include "biedronka.h"
#include <iostream>

using namespace std;

biedronka::biedronka(int xp,int yp,double ep,bool isA)
{
    x=xp;
    y=yp;
    energia=ep;
    isAlive=isA;
    cout << "Konstruktor parametrowy biedronka." << endl;
    //ctor
}

biedronka::biedronka()
{
    cout << "Konstruktor bezparametrowy biedronka." << endl;
    //ctor
}

biedronka::~biedronka()
{
    cout << "Destruktor biedronka." << endl;
    //dtor
}
