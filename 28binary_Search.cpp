//Binary Search
#include<iostream>
#include<conio.h>
using namespace std;
int BinarySearch(int arr[],int n, int key)
{
    int start=0,end=n-1,mid;
    while(start<=end){
        //TO find mid element
        mid = (start+end)/2;
        // arr[mid]==key
        if(arr[mid]==key){
            return mid;}
            //arr[mid<key
            else if (arr[mid]<key){
                start=mid+1;}
            //arr[mid]>key
            else{
                end= mid-1;
        }

    }
    cout<<"not found";
    getch();
}

int main()
{
    int arr[25],n,key,i;
    cout<<"enter the number of array: ";
    cin>>n;
    cout<<"Enter the elements of array: ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter a key element: ";
    cin>>key;

    cout<<BinarySearch(arr,n,key);
    return 0;
}
