#include <iostream>
using namespace std;
#include <math.h>
#include "header.h"

int main()
{
    cout << "Figure1: " << endl;
    Point Figure1(17, 13, RED);
    Figure1.Print();

    cout << "Figure2: " << endl;
    Point Figure2(8, 4, GREEN);
    Figure2.Print();

    cout << "Figure3: " << endl;
    Point Figure3(10, 15, BLUE);
    Figure3.Print();
    cout << "Figure4: " << endl;
    Point Figure4(20, 7, WHITE);
    Figure4.Print();


    Polynom Sorted;

    Sorted.AddArray(Figure1);

    Sorted.AddArray(Figure2);

    Sorted.AddArray(Figure3);

    Sorted.AddArray(Figure4);

    cout << "Sorted  by x :" << endl;

    Sorted.AllPointsByX();

    cout << "Sorted  by y :" << endl;

    Sorted.AllPointsByY();

    cout << endl << "Pictures of figure " << endl;

    Figure1.Painting();

    Figure2.Painting();

    Figure3.Painting();

    Figure4.Painting();


    return 0;
}