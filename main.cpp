#include <iostream>
using namespace std;

class Solution
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
    float emi()
    {
        requirements();
        
        // EMI calaculator
        float temp = pow((1 + Intrest), TimePeriod);
        float EMI = ((Principal * Intrest * temp) / (temp - 1));
        return EMI;
    }
    float pre_emi()
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
    Solution s;
    s.requirements();
    int emi = s.emi();
    int pre_emi = s.pre_emi();
    cout << emi << endl;
    cout << pre_emi << endl;
    return 0;
}
