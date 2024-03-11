#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,j;
    for(i=4;i>=1;i--){
             for(j=1;j<=i;j++)
        cout<<"* ";
        for(j=1;j<=8-2*i;j++)
            cout<<"  ";
        for(j=1;j<=i;j++)
            cout<<"* ";
    cout<<endl;
    }

     for(i=1;i<=4;i++){
          for(j=1;j<=i;j++)
        cout<<"* ";
        for(j=1;j<=8-2*i;j++)
            cout<<"  ";
        for(j=1;j<=i;j++)
            cout<<"* ";
            cout<<endl;
    }


    getch();
}
