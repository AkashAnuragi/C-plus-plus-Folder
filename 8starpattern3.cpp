//Star pattern
/* 1
   21
   321
   4321
   54321
   for(j=i;j>=1;j--  */


#include<iostream>
   #include<conio.h>
   using namespace std;

   int main()
   {
       char i,j;
       for(i=97;i<=101;i++){
        for(j=97;j<=i;j++){
           cout<<i<<" ";
        }
        cout<<endl;
       }
       getch();
   }
