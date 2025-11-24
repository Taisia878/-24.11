#include <iostream>
#include "Figure.h"

#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Rhombus.h"
#include "Square.h"
using namespace std;

int main()
{
    Figure* figure = nullptr;

    int choice = 0;

    cout << "1. Square circle" << endl;
    cout << "2. Square rectangle" << endl;
    cout << "3. Square triangle" << endl;
    cout << "4. Square rhombus" << endl;
    cout << "5. Square square" << endl;
    cout << "Make your choice: ";

    cin >> choice;

    switch (choice)
    {
        case 1:
            figure = new Circle;
            figure->SetDimension(10.0);
            break;
        case 2:
            figure = new Rectangle;
            figure->SetDimension(5.5, 10.0, 3.5);
            break;
        case 3: 
            figure = new Triangle;
            figure->SetDimension(5.5, 10.0, 19.4);
            break;
        case 4:
            figure = new Rhombus;
            figure->SetDimension(5.5, 10.0, 19.4);
            break;
        case 5:
            figure = new Square;
            figure->SetDimension(5.5, 10.0, 19.4);
            break;
    }

    figure->ShowArea();
    figure->ShowL();

    return 0;
}