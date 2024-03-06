//Fabbonacci series
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,last=0,next=1,current,n;
    cout<<"Enter the number: ";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<last<<" ";
        current=last+next;
        last=next;
        next=current;
    }
    getch();
}

