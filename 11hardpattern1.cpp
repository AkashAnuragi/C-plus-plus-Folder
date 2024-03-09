//Hard Pattern
/*   *
    **
   ***
  ****
 *****
*/

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,j;
//    for(i=1;i<=5;i++){
//        for(j=1;j<=5;j++){
//            if(j>=6-i){
//                cout<<"*";
//            }
//            else{
//                cout<< " ";
//            }
//            cout<<" ";
//        }
//        cout<<endl;
//    }

for(i=1;i<=5;i++){
    for(j=1;j<=5-i;j++){
        cout<<"  ";
    }
    for(j=1;j<=i;j++){
        cout<<j<<" ";
    }
    cout<<endl;
}
getch();
}
