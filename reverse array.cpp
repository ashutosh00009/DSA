#include <bits/stdc++.h>

using namespace std;
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void reversearr(int arr[],int n)
{
   int start = 0;
   int end = n-1;
   
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
        
    }
}
int main()
{
    
    int arr[7]={1,8,5,-6,4,7,2};
    
    reversearr(arr,7);
    printarray(arr,7);
    
    
    return 0;
}