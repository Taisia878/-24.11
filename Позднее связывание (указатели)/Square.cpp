#include <iostream>

#include "Square.h"

using namespace std;

void Square::ShowArea() const
{
    cout << "Square of triangle: " << m_value1 * m_value1 << endl;
}
void Square::ShowL() const
{
    cout << "Lenght: " << m_value1 * 4 << endl;
}