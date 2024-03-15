#include<iostream>  //This is the question of leedscore.
using  namespace std;


int findzero( int n)
{
    int count =0;
    while(n>=5){
        count+=n/5;
        n/=5;
    }
    return count;
}
int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<findzero(num)<<endl;
}
