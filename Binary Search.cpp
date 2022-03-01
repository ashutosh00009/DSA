#include <iostream>

using namespace std;
int binarysearch(int arr[],int n,int key)
{
    int start=0;
    int end=n-1;
    int ans=-1;
    int mid=start+(end-start)/2;
    
    while(start<=end)
    {
        if(arr[mid]==key)
        {
         return mid;
         }
         
         else if(key>arr[mid])
         {
             start=mid+1;
         }
         else
         {
          end = mid-1; 
         }
         mid=start+(end-start)/2;
    }
    return -1;
}



int main()
{int n;
cin>>n;

    int arr[10]={0,1,2,3,4,5,6,8,8,9};
    int i=binarysearch(arr,10,n);
    if(i==-1)
    {
        cout<<"element is absent"<<" ";
    }
    else
    {
        cout<<"the element "<< n <<"present at index"<<i;
    }
    
}