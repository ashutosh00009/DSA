#include <iostream>
using namespace std;
bool linearsearch(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if (arr[i]==key)
        {
            return 1;
        }
    }
    return 0;
    
}
int main()
{
    
    int arr[50]={1,5,354,63,4,7,-87,-55,65,7,36,8,3,2,5,8};
    //16
    
    cout<<"Enter the element to search"<<endl;
    int key ;
    cin>>key;
    
    bool found =linearsearch(arr,16,key);
    if (found)
    {
        cout<<"element is present"<<endl;
        
    }
    else
    {
        cout<<"element not found "<<endl;
        
    }
    
    
    
}