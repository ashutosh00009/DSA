#include <iostream>

using namespace std;
void selectionsort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minindex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[minindex]>arr[j])
            {
                minindex=j;
            }
        }
        //swaping 
        int temp=arr[minindex];
        arr[minindex]=arr[i];
        arr[i]=temp;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}

int main()
{
    int arr[5]={5,2,7,1,9};
    selectionsort(arr,5);

    return 0;
}