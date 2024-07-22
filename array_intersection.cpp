#include<iostream>
using namespace std;

void insert(int arr1[],int arr2[],int m,int n)
{
    int ans;
    for(int i=0;i<m;i++)
    {
        int ele=arr1[i];
        for(int j=0;j<n;j++)
        {
            if(ele==arr2[j])
            {
              ans=arr2[j];
              arr2[j]=-111234;
            }
        }
    }
    cout<<"Intersected Element is="<<ans;
}

int main()
{ 
    int m,n;
    cin>>m>>n;
    int arr1[100],arr2[100];
    for(int i=0;i<m;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    insert(arr1,arr2,m,n);
}