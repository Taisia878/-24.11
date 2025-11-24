#include <iostream>

#include "Rhombus.h"

using namespace std;

void Rhombus::ShowArea() const
{
    cout << "Square of triangle: " << m_value1 * m_value2 << endl;
}
void Rhombus::ShowL() const
{
    cout << "Lenght: " << m_value1 * 4 << endl;
}