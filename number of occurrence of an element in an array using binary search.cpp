#include <iostream>

using namespace std;
int firstoccur(int arr[],int n,int key)
{
    int start=0;
    int end=n-1;
    int ans=-1;
    int mid=start+(end-start)/2;
    
    while(start<=end)
    {
        if(arr[mid]==key)
        {
         ans=mid;
         end=mid-1;
         }
         
         else if(key>arr[mid])
         {
             start=mid+1;
         }
         else
         {
          end =mid-1; 
         }
         mid=start+(end-start)/2;
    }
    return ans;
}

int lastoccur(int arr[],int n,int key)
{
    int start=0;
    int end=n-1;
    int ans=-1;
    int mid=start+(end-start)/2;
    
    while(start<=end)
    {
        if(arr[mid]==key)
        {
         ans=mid;
         start=mid+1;
         }
         
         else if(key>arr[mid])
         {
             start=mid+1;
         }
         else
         {
          end =mid-1; 
         }
         mid=start+(end-start)/2;
    }
    return ans;
}

int main()
{int n;
cin>>n;

    int arr[10]={1,2,3,3,3,4,5,6,6,6};
    
    int i=((lastoccur(arr,10,n)) - (firstoccur(arr,10,n)))+1;
cout<<"number of occurrence of element"<<n<<"is"<<i;  
    return 0;
}