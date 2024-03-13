#include<iostream>
using namespace std;
void swap(int &n,int &m) //Call by refference
    int c=n;
    n=m;
    m=c;
}

void swap (float &n , float &m) //Overloading
{
    float c=n;
    n=m;
    m=c;
}

int main()
{
    int a,b;
    cout<<"Enter the number: ";
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b <<" ";
    float f1=43.5, f2=43.4;
    swap(f1,f2);
    cout<<f1<<" "<<f2 <<" ";

}
