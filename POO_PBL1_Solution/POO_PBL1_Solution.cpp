// POO_PBL1_Solution.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Point.h"
#include "Mesures.h"

using namespace std;

int main()
{
    //Objects creation
    Point p1(0.0, 0.0);
    Point p2(1.0, 1.0);

    //Move methode
    p2.move(4.0, 1.0);
    p2.moveBottom();

    //Create hypothesis
    float a = 1.0;

    //Print coordinates
    p1.printPoint();
    p2.printPoint();

    //Print result
    cout << "YouCrear hypothesis is : " << boolalpha << Mesures::distanceEq(p1, p2, a) << endl;

    return 0;
}
