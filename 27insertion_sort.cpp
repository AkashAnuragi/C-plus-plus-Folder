//Insertion sort

#include<iostream>
using namespace std;
int main()
{
    int arr[23],i,j,n;
    cout<<"Enter the number of array: ";
    cin>>n;
    cout<<"Enter the element:";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    for(i=1;i<n;i++){
        for(j=i;j>0;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
            else{
                break;
            }
        }
    }

    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
