#include <iostream>
using namespace std;
#include <math.h>
#include "header.h"

int main()
{
    cout << "Figure1: " << endl;
    Point Figure1(17, 13, RED);
    Figure1.printPointAndPerumetrAndDiagonalToConsole();

    cout << "Figure2: " << endl;
    Point Figure2(8, 4, GREEN);
    Figure2.printPointAndPerumetrAndDiagonalToConsole();

    cout << "Figure3: " << endl;
    Point Figure3(10, 15, BLUE);
    Figure3.printPointAndPerumetrAndDiagonalToConsole();

    cout << "Figure4: " << endl;
    Point Figure4(20, 4, GRAY);
    Figure4. printPointAndPerumetrAndDiagonalToConsole();

    Polynom Sorted;

    Sorted.addArray(Figure1);

    Sorted.addArray(Figure2);

    Sorted.addArray(Figure3);

    Sorted.addArray(Figure4);

    cout << "Sorted  by x :" << endl;

    Sorted.allPointsByX();

    cout << "Sorted  by y :" << endl;

    Sorted.allPointsByY();

    cout << endl << "Pictures of figures: " << endl;

    Figure1.painting();

    Figure2.painting();

    Figure3.painting();

    Figure4.painting();

    return 0;
}