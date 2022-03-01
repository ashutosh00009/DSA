#include <bits/stdc++.h>

using namespace std;
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void swap_alternate_element(int arr[],int n)
{
  for(int i=0;i<n;i+=2)
  {
   if(i+1<n)
   swap(arr[i],arr[i+1]);
  }
     
      
}
int main()
{
    
    int arr[7]={1,8,5,-6,4,7,2};
    
    swap_alternate_element(arr,7);
    printarray(arr,7);
    
    
    return 0;
}