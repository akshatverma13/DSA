Recursion-A function call itself until a specified condition is met
//print your name n times

void f(int i,int n)
{
  if(i>n)
  return;
  cout<<"name"<<endl;
  f(i+1,n);


}
int main()
{
  int n;
  cin>>n;
  f(1,n);
}

//print 1 to n
void f(int i,int n)
{
  if(i>n)
  return;
  cout<<"name"<<endl;
  f(i+1,n);


}
int main()
{
  int n;
  cin>>n;
  f(1,n);
}
//print n to 1
void f(int i,int n)
{
  if(i<1)
  return ;
  cout<<i<<endl;
  f(i-1,n);
}
int main()
{
  int n;
  cin>>n;
  f(n,n);
}

//sum of n numbers
int  f(int n)
{
  if(n==0)
  return 0;
  return n+f(n-1);
}
int main()
{
  int n;
  cin>>n;
  cout<<f(n);

}

//factorial of a number
int f(int n)
{
    if(n==0)
    return 1;
    return n*f(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<f(n);
}
//reverse a array
void f(int i,int arr[],int n)
{
  if(i>=n/2)
  return;
  swap(arr[i],arr[n-i-1]);
  f(i+1,arr,n);
}
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
    
  }
  f(0,arr,n);
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
}





