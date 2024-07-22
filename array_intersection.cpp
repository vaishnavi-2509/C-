#include<iostream>
using namespace std;

void insert(int arr1[],int arr2[],int m,int n)
{
    int i=0,j=0;
    int ans;
    while(i<m && j<n)
    {
        if(arr1[i]==arr2[j])
        {
            ans=arr1[i];
            arr1[i]=-111222;
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j])
        {
            i++;
        }
         else 
        {
            j++;
        }
    }
    cout<<"Intersection="<<ans;
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