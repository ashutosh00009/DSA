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
{
    int arr[10]={1,2,3,3,3,4,5,6,6,6};
    cout<<"first occurrence 3 at index \n"<< firstoccur(arr,10,6);
    cout<<"last occurrence 3 at index \n"<< lastoccur(arr,10,6);
    return 0;
}