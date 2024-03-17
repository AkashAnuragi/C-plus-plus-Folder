#include<iostream>
using namespace std;
 int main()
 {
     int arr[25],n,i,j;
     cout<<"Enter the size of array: ";
     cin>>n;
     cout<<"Enter the element of array: ";
     for(  i=0;i<n;i++){
        cin>>arr[i];
     }

     for( i=n-2;i>=0;i--){
            bool swapped =0;
     for( j=0;j<n-1;j++){
        if(arr[j]>arr[j+1]){
            swapped=1;
        swap(arr[j],arr[j+1]);
        }

     }
     if(swapped==0){
        break;
     }
     }
      for(i=0;i<n;i++)
     cout<<arr[i]<<" ";
 }
