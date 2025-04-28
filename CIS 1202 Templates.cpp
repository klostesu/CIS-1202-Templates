// CIS 1202 Templates.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

template <typename T>
T half(T number) {
    return number / 2;
}
int half(int number) {
    return static_cast<int>(number / 2.0 + 0.5);  // Add 0.5 to round up 
}

int main()
{
    double a = 7.0;
    float b = 5.0f;
    int c = 3;

    cout << half(a) << endl;
    cout << half(b) << endl;
    cout << half(c) << endl;

    return 0;
}



