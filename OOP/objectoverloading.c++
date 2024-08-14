#include <iostream>
using namespace std;

class Time
{
private:
    int hrs, minu;

public:
    Time() : hrs(0), minu(0) {} // Constructor
    ~Time() {}                  // Destructor

    void getdata()
    {
        cout << "Enter the hour and minutes: ";
        cin >> hrs >> minu;
    }

    bool operator<(const Time &t) const
    {
        if (hrs < t.hrs)
        {
            return true;
        }
        if (hrs == t.hrs && minu < t.minu)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Time t1, t2;
    t1.getdata();
    t2.getdata();

    if (t1 < t2)
    {
        cout << "t1 is less than t2" << endl;
    }
    else
    {
        cout << "t1 is not less than t2" << endl;
    }

    return 0;
}
