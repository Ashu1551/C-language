#include<stdio.h>
int main()
{
    int unit;
    float amt,total_amt,sur_charge;
    printf(" Enter the number of electricity");
    scanf("%d",&unit);
    if(unit<=100)
    {
        amt=unit*0.5;
    }
    else if(unit<=200)
    {
        amt=(unit*0.5)+(unit-100)*0.75;
    }
    else if(unit<=300)
    {
        amt=(unit*0.5)+(unit-100)*0.75+(unit-200)*1;
    }
    else if (unit<=400)
    {
        amt=(unit*0.5)+(unit-100)*0.75+(unit-200)*1+(unit-300)*1.5;
    }
    else if(unit<=500)
    {
        amt=(unit*0.5)+(unit-100)*0.75+(unit-200)*1+(unit-300)*1.5+(unit-400)*2;
    }
    else
    {
        amt=(unit*0.5)+(unit-100)*0.75+(unit-200)*1+(unit-300)*1.5+(unit-400)*2+(unit-500)+2.5;
    }
    sur_charge = amt*1.5;
    total_amt = amt+sur_charge;
    printf("electricity bill=Rs%f",total_amt);
    return 0;   
}