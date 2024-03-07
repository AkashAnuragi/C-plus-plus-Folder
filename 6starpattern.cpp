 //Star Pattern
 /* *****  11111  12345  54321                             1 4 9 16 25   aaaaa                 a b c d e    1  2  3  4  5
    *****  11111  12345  54321                             1 4 9 16 25   bbbbb                 a b c d e    6  7  8  9  10
    *****  11111  12345  54321                             1 4 9 16 25   ccccc                 a b c d e    11 12 13 14 15
    *****  11111  12345  54321                             1 4 9 16 25   ddddd                 a b c d e    16 17 18 19 20
    *****  11111  12345  54321                             1 4 9 16 25   eeeee                 a b c d e    21 22 23 24 25
cout='*'    =i     =j    (for loop revese and cout=j)      (cout=j*j)  (i,j=97,101 & cout=i)    cout=i      given in below  */
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,j,n=0,s;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(j<=5){
                s=j+n;
                cout<<s<<"  ";
            }
        }
        n=s;
        cout<<endl;
    }
    getch();
}
