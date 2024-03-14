#include<iostream>
#include<cmath>
using namespace std;   // this program is right but this compiler does not give the right ans.

int countdigit(int n)
{
    int count = 0;
    while(n)
    {
        count++;
        n/=10;
    }
    return count;
}

void armstrong(int num, int digit)
{
    int n=num, ans=0 ,rem;
    while(n){
        rem = n%10;
        n/=10;
        ans = ans + pow(rem,digit);
    }
    if(ans==num)
        cout<<"Armstrong number" << endl;
    else
        cout<<"Not an Armstrong number" << endl;

}

int main()
{
    int num;
    cout<<"Enter number: ";
    cin>>num;

    //count digit
    int digit = countdigit(num);
    //Armstrong number
    armstrong(num,digit);
    return 0;
}

