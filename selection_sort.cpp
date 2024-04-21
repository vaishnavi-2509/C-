// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }
  int i,j,k,temp=0;
  for(i=0;i<n;i++)
  {
      for(j=k=i;j<n;j++)
      {
          if(arr[j]<arr[k])
          {
              k=j;
          }
      }
      temp=arr[i];
      arr[i]=arr[k];
      arr[k]=temp;
      cout<<arr[i]<<endl;
  }
    return 0;
}