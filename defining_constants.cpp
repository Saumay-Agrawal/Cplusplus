#include <iostream>
using namespace std;

#define H "Hello"
#define n "\n"
#define W "World!"

int main()
{
    cout << H << n << W;

    //declaring constants
    const int LENGTH = 5;
    const int BREADTH = 10;
    cout << (LENGTH * BREADTH);

    return 0;
}
