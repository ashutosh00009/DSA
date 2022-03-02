#include <iostream>

using namespace std;

int pivot_element(int arr[],int size)
{//finding the pivot element 
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<end)
    {
        if(arr[mid]>arr[0])
        {
            start=mid + 1;
        }
        else
        {
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return start;
}

int binarysearch(int arr[],int pivot,int n,int key)
{
    int start=pivot;
    int end=n;
    
    int mid=start+(end-start)/2;
    
    while(start<=end)
    {
        if(arr[mid]==key)
        {
         return arr[mid];
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

  int arr[7]={6,7,8,9,0,1,2};
   int pivot =pivot_element(arr,7);
   if(n>=arr[pivot]&& n<=arr[7-1])
   {//binary search at right part 
   
   
      int k= binarysearch( arr,pivot,7-1,n);
      if(k==n)
      {
          cout<<"element is present";
      }
      else{
          cout<<"element is absent";
      }
   }
else
{//binary search at left part 


    int j= binarysearch( arr,0,pivot-1,n);
    if(j==n)
      {
          cout<<"element is present";
      }
      else{
          cout<<"element is absent";
      }
}
    return 0;
}