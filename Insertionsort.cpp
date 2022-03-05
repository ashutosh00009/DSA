#include <iostream>

using namespace std;
void insertionsort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {int j;
    int temp=arr[i];
    
        for(j=i-1;j>=0;j--)
        {
            if(temp<arr[j])
            {
                arr[j+1]=arr[j];
                
            }
            else
            {
                break;
                
            }
        }
        arr[j+1]=temp;
        
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
        
    }
    
    
    
    
    
}
int main()
{ int arr[7]={8,4,9,2,13,1,0};

   insertionsort(arr,7);

    return 0;
}