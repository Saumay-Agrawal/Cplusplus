#include <iostream>
#include <string>
using namespace std;

class passenger
{
private:
    char name[20], city[20];
    int age;
    double ticket_amt;
    bool stat;
public:
    static int pcount;
    passenger()
    {
        pcount++;
    }
    void booking();
    void print();
    void status();
    static int totalpassengercount();
};

int passenger::pcount = 0;

void passenger::booking()
{
    cin >> name ;
    std::cin >> city;
    std::cin >> age;
    std::cin >> ticket_amt;
    std::cin >> stat;
}

void passenger::print()
{
    std::cout << "Name: " << name << endl;
    std::cout << "City: " << city << endl;
    std::cout << "Age: " << age << endl;
    std::cout << "Amount: Rs." << ticket_amt << endl;
    status();
}

int passenger::totalpassengercount()
{
    return pcount;
}

void passenger::status()
{
    std::cout << "Status: " << stat;
}

int main()
{
    int n;
    cin >> n;
    passenger a[n];
    for(int i=0;i<n;i++)
    {
        cout << "Enter the booking details for passenger " << i+1 << endl;
        a[i].booking();
    }
    for(int i=0;i<n;i++)
    {
        cout << "The booking details for passenger " << i+1 << endl;
        a[i].print();
    }
    cout << "The total number of passengers is " << a[0].totalpassengercount() << endl;
    return 0;
}
