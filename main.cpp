#include <iostream>
using namespace std;

class Requirements
{
public:
    // All The Requirements To Calculate EMI
    long long int Principal;
    float Intrest;
    int TimePeriod;
    void requirements()
    {

        // Calling all the requirements
        cout << "Principal Loan Amount = ";
        cin >> Principal;
        cout << "Intrest Rate For The Period = ";
        cin >> Intrest;
        cout << "Time Period = ";
        cin >> TimePeriod;
    }
};

int main()
{
    Requirements req;
    
    req.requirements();

    return 0;
}
