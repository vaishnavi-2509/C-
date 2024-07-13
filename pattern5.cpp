#include<iostream>

using namespace std;

int main()
{
  int n;
  cin>>n;
  int i=1;
   
  while(i<=n)
  {
    int start=n-i+1;
    int j=1;
    while (start)
    {
      cout<<j;
      j++;
      start--;
    }
    while(j<=n)
    {
        cout<<"**";
      j++;
    }
    int tri2=n-i+1;
    while(tri2)
    {
        cout<<tri2;
        tri2--;
    }
    cout<<endl;
    i++;
  }
}