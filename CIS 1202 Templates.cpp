// CIS 1202 Templates.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

// Function Prototypes 
template <typename T>
T half(T number);

int half(int number);

int main()
{
    // set values for variables
    double a = 9.0;
    float b = 5.0f;
    int c = -8;

    // half will call variable and use appropriate function depending on variable type
    cout << half(a) << endl;
    cout << half(b) << endl;
    cout << half(c) << endl;

    return 0;
}
// create separate function for double, float values 
template <typename T>
T half(T number) {
    return number / 2;
}

// create separate function for int values 
int half(int number) {
    return static_cast<int>(static_cast<float>(number) / 2 + 0.5);
}

