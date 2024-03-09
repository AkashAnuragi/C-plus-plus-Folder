// Star pattern
/* 12345
   1234
   123
   12
   1   */


 #include<iostream>
 #include<conio.h>
 using namespace std;

 int main()
   {
       int i,j;
       for(i=5;i>=1;i--){
        for(j=5;j>=i;j--){
           cout<<j<<" ";
        }
        cout<<endl;
       }
       getch();
   }

