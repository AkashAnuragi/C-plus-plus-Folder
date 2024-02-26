//SRANDARD TAMPLATE LIBRARY

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
//    // create vector,declare
//    vector<int>v;
//    vector<int>v1(5,1);
//    //size and capacity
//    cout<<"size of v: "<<v.size()<<endl;
//    cout<<"capacity of v: "<<v.capacity()<<endl;
//    v.push_back(2);
//    v.push_back(3);
//    v.push_back(9);
//
//    cout<<"size of v: "<<v.size()<<endl;
//    cout<<"capacity of v: "<<v.capacity()<<endl;
//    //Update value
//    v[1]=5;
//
//        cout<<"size of v1: "<<v1.size()<<endl;
//    cout<<"capacity of v1: "<<v1.capacity()<<endl;
//v1.push_back(8);

//Delete value from vector

//vector<int>vnew;
// vnew.push_back(21);
//    vnew.push_back(311);
//    vnew.push_back(91);
//     vnew.push_back(23);
//    vnew.push_back(333);
//    vnew.push_back(93);
//    vnew.pop_back();
//       cout<<"size of vnew: "<<vnew.size()<<endl;
//    cout<<"capacity of vnew: "<<vnew.capacity()<<endl;
//
//    //Delete form any where
//    vnew.erase(vnew.begin()+1);
//       cout<<"size of vnew: "<<vnew.size()<<endl;
//    cout<<"capacity of vnew: "<<vnew.capacity()<<endl;
//
//    //Print
//    for(int i=0;i<vnew.size();i++){
//        cout<<vnew[i]<<" "<<endl;
//    }
//
//    vnew.insert(vnew.begin()+1,50); //Insert value in particular index
//    vnew[2]=10;   //Change the value
//    for(int i=0;i<vnew.size();i++){
//        cout<<vnew[i]<<" ";
//    }
//    cout<<endl;
//
//    //Delete all the element
//    vnew.clear();
//     cout<<"size of vnew: "<<vnew.size()<<endl;
//    cout<<"capacity of vnew: "<<vnew.capacity()<<endl;


//vector<int>arr;
//arr.push_back(21);
//arr.push_back(1);
//arr.push_back(31);
//arr.push_back(41);
//arr.push_back(211);
//arr.push_back(81);
//cout<<arr[0]<<endl;
//cout<<arr.front()<<endl;
//cout<<arr.size()-1<<endl;
//cout<<arr.back()<<endl;
//
////Copy value of 1 vector to another
//vector<int>a;
//a= arr;
//cout<<"size of a: "<<a.size();
//cout<<endl;
//for(auto it = arr.begin();it !=arr.end();it++)
//{
//    cout<<*it<<" ";
//}
//cout<<endl;
//for(auto i:arr) //Another way to print
//    cout<<i<<" ";


vector<int>ans;
ans.push_back(4);
ans.push_back(40);
ans.push_back(42);
ans.push_back(14);
ans.push_back(24);

//Sort in increasing order
sort(ans.begin(),ans.end());
for(int i=0;i<ans.size();i++)
cout<<ans[i]<<"  ";
cout<<endl;

////Sort in decreasing order
//sort(ans.begin(),ans.end(),greater<int>());
//for(int i=0;i<ans.size();i++)
//cout<<ans[i]<<"  ";
//cout<<endl;
////Another way of decreasing Order
//sort(ans.rbegin(),ans.rend());
//for(int i=0;i<ans.size();i++)
//cout<<ans[i]<<"  ";

cout<<binary_search(ans.begin(),ans.end(),174)<<endl; //if the element is present so it will print 1 otherwise print 0
cout<<find(ans.begin(),ans.end(),40)-ans.begin()<<endl;




}


