
#include<iostream>
using namespace std;
bool prime(int n=3)//default parameter
{
    if(n<2)
        return 0;
    for(int i=2;i<n;i++){
         if(n%i==0)
        return 0;
    }
    return 1;
}

int fact(int n)
{
    int ans=1;
    for( int i=1 ;i<=n;i++)
        ans=ans*i;
    return ans;
}


int main()
{
    int a,b;
    cout<<"Enter the Number: ";
    cin>>a>>b;

    //A is a prime or not
    cout<<prime(a)<< endl;

    //A ka factorial
    cout<<fact(a)<<endl;
    //B is a prime or not
    cout<<prime(b)<<endl;
    //B ka factorial
    cout<<fact(b)<<endl;
    //A-B  is a prime or not
    cout<<prime(b-a)<<endl;
    //A-B ka factorial
    cout<<fact(b-a);
}
