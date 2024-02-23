#include<iostream>
class factorial
{
private:
    int no;
    long int fact;

public:
    void initialise();
    void getdata();
    void calculation();
    void showdata();
};

void factorial:: initialise()
{
    fact=1;
}

void factorial:: getdata()
{
    cont<<"Enter the Number";
    cin>>no;
}
void factorial::calculation()
{
    int i;
    for (i=0 ;i<=no;i++)
    {
    fact=fact*i;
    }
    
}
void showdata()
{
    cout<<"\n number is ="<<no;
    cout<<"\nthis is factorial="<<fact;
}
int main()
{
    factorial obj;
    obj.initialise();
    obj.getdata();
    obj.calculation();
    obj.showdata();
    return 0;
}
