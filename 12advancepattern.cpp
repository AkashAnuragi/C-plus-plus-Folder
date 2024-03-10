// advance level Pattern
/*  *            *******
   ***            *****
  *****            ***
 *******            * given in below   */

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=i-1;j++){
            cout<<"  ";
        }
        for(j=9;j>=2*i-1;j--){
        cout<<"*"<<" ";
        }
        cout<<endl;
    }
//        OR
// for(i=1;i<=4;i++){
//        for(j=1;j<=7;j++){
//                if(j>=5-i && j<=3+i){
//                    printf("*");
//                }
//                else{
//                    printf(" ");
//                }
//        }
//        printf("\n");
//    }
    getch();
}
