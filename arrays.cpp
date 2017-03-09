#include <iostream>

using namespace std;

/* This function takes and array as an input and returns a pointer variable for that array */
int* input()
{
    static int n;
    int *p;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << endl;
    p = &n;
    return p;
}

/* This function displays an array. */
int main()
{
    int *x;
    x = input();
    cout << "The entered number is: " << *x << endl;
}
