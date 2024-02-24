#include<iostream>
using namespace std;
int sum(int m,int n)
{
    int ans = m+n;
    return ans;
}

void mul(int m,int n)
{
     int ans =m*n;
    cout<<ans<<endl;
}

int main ()
{
    int a,b; //sum of two number
    cout<<"Enter the 2 number : ";
    cin>>a>>b;
    cout<<sum(a,b)<<endl;
    mul(a,b);
}
