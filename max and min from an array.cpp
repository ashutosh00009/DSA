
#include <iostream>
#include<climits>
using namespace std;

int getmax(int arr[],int n)
{
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        maxi=max(maxi,arr[i]);
        //if(arr[i]>max)
        //max =arr[i];
    }
    return maxi;
    
}
int getmin(int arr[],int n)
{
    int mini=INT_MAX;
    for(int i=0;i<n;i++)
    {
        mini = min(mini,arr[i]);
        //if(arr[i]<min)
        //min =arr[i];
    }
    return mini;
    
}
int main()
{
    int n ;
    cin>>n;
    
    int arr[100];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    cout<<"maximum element is"<<getmax(arr,n)<<endl;
    cout<<"maximum element is"<<getmin(arr,n)<<endl;

    return 0;
}