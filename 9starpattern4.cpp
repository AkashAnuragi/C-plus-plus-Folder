//star pattern
/* *****
   ****
   ***
   **
   *  */



#include<iostream>
   #include<conio.h>
   using namespace std;

//   int main()
//   {
//       int i,j;
//       for(i=1;i<=5;i++){
//        for(j=5;j>=i;j--){
//           cout<<"*"<<" ";
//        }
//        cout<<endl;
//       }
//       getch();
//   }
 int main()
   {
       int i,j;
       for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
           if(j<=6-i){
            cout<<"*";
           }
        }
        cout<<endl;
       }
       getch();
   }
