//star pattern medium level
/* *         1
   **        12
   ***       123
   ****      1234
   ******    12345
   cout="*"   =j */

   #include<iostream>
   #include<conio.h>
   using namespace std;

   int main()
   {
       int i,j;
       for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
       }
       getch();
   }

