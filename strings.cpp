#include <iostream>
#include <string>
using namespace std;

int main()
{
    // ways of initializing string constructor

    string s1 ("Hello World");
    string s2 (s1);
    string s3 (8, '-');
    string s4 (s1, 6, 5);
    string s5 (s1.begin(), s1.begin()+5);

    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    cout << s5 << endl;

    s3.clear();
    cout << s3 << endl;

    cout << "Length of s3 is: " << s3.length() << endl;

    cout << "Character at 2nd pos of s5: " << s5.at(1) << endl;

    //cout << "s5 starts with " << s5.front() << " and ends with " << s5.back() << endl;
    cout << s5.append(s4,0,5) << endl;
}
