#include<iostream>
using namespace std;
int integersqrt(int n)
{
    int start=0;
    int end=n-1;
    int ans=-1;
    int mid=start+(end-start)/2;
    
    
    while(start<=end)
    {
        int square=(mid*mid);
    
    if(square == n)
    {   ans=mid;
        return ans;
    }
    else if(square<n)
    {
        start=mid+1;
    }
    else{
        end=mid-1;
        
    }
    mid=start+(end-start)/2;
    }
    return ans;
    
}

double decimalplaces(int n,int place,int r)
{
    double j;
    double factor=1;
    double ans;
    for(int i=0;i<place;i++)
    {
         factor= factor/10;
        for(j=r;j*j<n;j=j+factor)
        {
            ans=j;
        }
    }
    return ans;
}

int main()
{
    int n,r;
    cout<<"enter the number";
    cin>>n;
    
    int places;
    cout<<"enter the places";
    cin>>places;
    
    
      r =integersqrt(n);
    cout<<"The square root of "<<n<<" is "<<decimalplaces(n,places,r);
    
}