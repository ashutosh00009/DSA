#include <iostream>

using namespace std;
void bubblesort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<(n-i);j++)
        {
            if(arr[j]>arr[j+1])
            {
                //swap
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}

int main()
{
    int arr[5]={5,2,7,1,9};
    bubblesort(arr,5);

    return 0;
}