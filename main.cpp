#include <iostream>
using namespace std;
class Account
{
    char m_name;
    int m_number;
    int m_balance;
public:
    Account()
    {

    }
    Account(int,int,double)
    {

    }
    Account(int,int)
    {

    }
    Account(const Account &)
    {

    }
    debit()
    {

    }
    credit()
    {

    }
    getbalance(int)
    {
        return m_balance;
    }
    display()
    {

    }

};
int main()
{
    Account A1('Tarun',1024,213);
    return 0;
}
