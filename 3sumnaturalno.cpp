//sum of n natural number.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"Enter the number: ";
    cin>>n;
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<sum;
    getch();
}
