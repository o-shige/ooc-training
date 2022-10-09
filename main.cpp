#include <iostream>
#include "calc.hpp"
using namespace std;

int main()
{
    cout << "add: " + to_string(add(1, 2)) << endl;
    cout << "diff: " + to_string(diff(2, 1)) << endl;
    cout << "add2: " + to_string(add2(1, 2, 3)) << endl;
}