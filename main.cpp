#include <iostream>
#include "calc.hpp"
using namespace std;

int main()
{
    cout << "add: " + to_string(add(1, 2)) << endl;
    cout << "diff: " + to_string(diff(2, 1)) << endl;
}