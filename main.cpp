#include <iostream>
#include <cmath>

using namespace std;

class data
{
public:
    // All The Requirements To Calculate EMI
    long long int Principal;
    float Intrest;
    int TimePeriod;
};

class Requirements : public data
{
public:
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

class emi : public data
{
public:
    float calculate_emi()
    {
        //Emi Calculation
        float monthly_interest = Intrest / 12;
        float temp = pow(1 + monthly_interest, TimePeriod * 12);
        return (Principal * monthly_interest * temp) / (temp - 1);
    }
};

class pre_emi : public data
{
public:
    float calculate_pre_emi()
    {
        // Pre Emi Calculation
        float pre_emi_intrest = Principal * Intrest;
        int total_pre_emi = pre_emi_intrest * 12;
        long long int total_repay_amount = Principal * total_pre_emi;
        return total_pre_emi;
    }
};

class calculate : public emi, public pre_emi{

};


int main()
{
    Requirements req;
    req.requirements();
    calculate calc;

    return 0;
}