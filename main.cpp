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

class calculate : public data // Corrected class name
{
public:
    float emi(long long int Principal, float Intrest, int TimePeriod) 
    {
        // EMI calculator
        float temp = pow((1 + Intrest), TimePeriod); 
        float EMI = ((Principal * Intrest * temp) / (temp - 1)); 
        return EMI;
    }

    float pre_emi(long long int Principal, float Intrest, int TimePeriod) 
    {
        // Pre Emi Calculation
        float pre_emi_intrest = Principal * Intrest;
        int total_pre_emi = pre_emi_intrest * 12; 
        long long int total_repay_amount = Principal * total_pre_emi; 
        return total_pre_emi; 
    }
};

int main()
{
    Requirements req;
    req.requirements(); 

    calculate calc;
    float emi_value = calc.emi(req.Principal, req.Intrest, req.TimePeriod); 
    float pre_emi_value = calc.pre_emi(req.Principal, req.Intrest, req.TimePeriod); 

    

    return 0;
}