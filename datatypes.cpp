#include <iostream>
using namespace std;

int main()
{
    cout << "The size of char is: " << sizeof(char) << endl;
    cout << "The size of int is: " << sizeof(int) << endl;
    cout << "The size of bool is: " << sizeof(bool) << endl;
    cout << "The size of float is: " << sizeof(float) << endl;
    cout << "The size of double is: " << sizeof(double) << endl;
    cout << "The size of wide char is: " << sizeof(wchar_t) << endl;

    // creating new datatype using typedef

    typedef int feet;
    feet distance;
    cout << "Enter the distance: ";
    cin >> distance;
    cout << "The distance entered is: " << distance << endl;

    // using enumerators

    enum colors {red, green, blue};
    enum colors c;
    c = blue;
    cout << c << endl;

    enum colors2 {orange, yellow=5, violet} c2;
    c2 = violet;
    cout << c2 <<  endl;
}
