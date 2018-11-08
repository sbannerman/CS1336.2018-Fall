#include <iostream>

using namespace std;

// Custom Functions

void testPassByRef(int &value)
{
    value += 100;
}

void testPassByValue(int value)
{
    value += 100;
}

int main()
{
    int mainVar1 = 10;
    int mainVar2 = 20;

    cout << endl;
    cout << "Before delegation: mainVar1=" << mainVar1 << "; mainVar2=" << mainVar2 << endl;

    testPassByRef(mainVar1);
    testPassByValue(mainVar2);

    cout << endl;
    cout << "After delegation: mainVar1=" << mainVar1 << "; mainVar2=" << mainVar2 << endl;

    cout << endl;
    cout << "mainVar1 is changed by testPassByRef function" << endl;
    cout << "mainVar2 is NOT changed by testPassByValue function" << endl;

    return 0;
}
