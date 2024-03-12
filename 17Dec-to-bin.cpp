#include<iostream>
#include<conio.h>
using namespace std;
int main() //decmal to binary
{
        int ans=0,num,mul=1,rem;
    cout<<"Enter the number : ";
    cin>>num;
//    while(num>0){
//        //remainder
//        rem =num%2;
//        //Quotint
//        num/=2;
//        //ans
//        ans+=rem*mul;
//        //mul
//        mul*=10;
//    }
//    cout<<ans<<endl;
 while(num>0){
        //remainder
        rem =num%10;
        //Quotint
        num/=10;
        //ans
        ans+=rem*mul;
        //mul
        mul*=2;
    }
    cout<<ans<<endl;
}
