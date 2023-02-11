#Initializaton of Array

#include<iostream>
using namespace std;
int main(){
  // int arr[500];
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
}

#Doubles of all the elements in the array

#include<iostream>
using namespace std;
int main(){
  int arr[500];
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  for(int i=0;i<n;i++)
  {
    cout<<2 * arr[i]<<" ";
  }
}

#Linear Search In Array

#include<iostream>
using namespace std;
bool find(int arr[],int size,int key){
  for(int i=0;i<size;i++){
    if(arr[i]==key)
    return true;
  }
  return false;
}
int main(){
  int arr[5]={1,2,3,4,5};
  int size=5;
  cout<<"Enter key to be find"<<endl;
  int key;
  cin>>key;
  if(find(arr,size,key)){
    cout<<"Found"<<endl;
  }
  else{
    cout<<"Not Found"<<endl;
  }
}
#Count 0's and 1's in array
int main(){
  int arr[6]={0,1,0,1,0,1};
  int size=6;
  int countno1=0;
  int countno0=0;
  // cout<<"Enter key to be find"<<endl;
  // int key;
  // cin>>key;
  for(int i=0;i<size;i++)
  {
    if(arr[i]==1)
    countno1++;
    else
    countno0++;
  }
  cout<<countno1<<" "<<countno0;
}

#Unique element in array
#include<bits/stdc++.h>
using namespace std;
int findunique(vector<int>arr){
  for(int i=0;i<arr.size();i++)
  {
    int ans =0;
    ans=ans^arr[i];
  }
  return ans ;
}
int main(){
  int n;
  cout<<"Enter the size of array "<<endl;
  cin>>n;
  vector<int>arr(n);
  //takeing input
  for(int i=0;i<arr.size();i++)
  {
    cin>>arr[i];

  }
  int uniqueelement=findunique(arr);
  cout<<"Unique element is "<<uniqueelement;
