//factorial
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int fact=1,i,n;
    cout<<"Enter the number: ";
    cin>>n;
    for(i=1;i<=n;i++){
        fact= fact*i;
    }
    cout<<fact;
    getch();
}
