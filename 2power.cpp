#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,n,p,a=1;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Enter the power: ";
    cin>>p;
    for(i=1;i<=p;i++){
        a=a*n;
    }
    cout<<a;
    getch();
}
