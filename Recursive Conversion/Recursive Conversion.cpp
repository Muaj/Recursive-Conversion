// Recursive Conversion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//prototyping
void sign(int n);
int main()
{
    sign(5);
}

//void sign(int n)
//{
//    while (n > 0)
//    {
//        cout << "No Parking\n";
//        n--;
//    }
//}

void sign(int n)
{
    if (n > 0)
    {
        cout << "No Parking\n";
        sign(n - 1);
    }
}
