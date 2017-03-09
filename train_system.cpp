#include <iostream>
using namespace std;

class coach
{
    private:
    char coachNo[5];
    char coachClass[10];
    bool ac;
    int capacity;
    int num_of_seat_occ;
    static int total_pass;

    public:
    void initialize();
    void get();
    void put() const;
    bool isFull();
    void incrementSeat(int);
    void decrementSeat(int);
    static void addPassengers(int);
};

int coach::total_pass = 0;

void coach::initialize()
{
    num_of_seat_occ = 0;
}

void coach::get()
{
    cin >> coachNo >> coachClass >> ac >> capacity >> num_of_seat_occ;
}

void coach::put() const
{
    cout << "Coach Num\t" << coachNo << endl << "Coach Class\t" << coachClass << endl << "Capacity\t" << capacity << endl << "Num of seats\t" << num_of_seat_occ << endl;

}

bool coach::isFull()
{
    if (num_of_seat_occ == capacity)
    return true;
    return false;
}

void coach::incrementSeat(int n)
{
    num_of_seat_occ += n;
}

void coach::decrementSeat(int n)
{
    num_of_seat_occ -= n;
}

void coach::addPassengers(int n)
{
    total_pass += n;
}

int main() {
	coach c1;
	c1.initialize();
	c1.get();
	coach *c2;
	c2 = new coach();
	c2->initialize();
	c2->get();

	c1.incrementSeat(12);
	c1.decrementSeat(2);
	c1.addPassengers(100);
	c1.put();

	c2->incrementSeat(12);
	c2->decrementSeat(2);
	c2->addPassengers(100);
	c2->put();

	return 0;
}
