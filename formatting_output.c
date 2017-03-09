#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    for(int i=0; i<10; i++)
    {
        cout << i << " number is: " << setw(5) << rand();
    }
}
