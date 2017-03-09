#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
using std::setw;
int main()
{
    for(int i=0; i<10; i++)
    {
        cout << i << " number is: " << setw(5) << rand() << endl;
    }
}
