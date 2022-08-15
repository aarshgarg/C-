#include<iostream>
using namespace std;
int binarysearch(int arr[],int x,int n){
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==x)
        {
            return mid;
        }
         else if(arr[mid]>x)
        {
            high=mid-1;
        }
        else{

            low=mid+1;

        }
        
    }
    return 0;
}
int search(int arr[],int x)
{
    
    if(arr[0]==x)
    {
        return 0;
    }
    int i=1;
    while(arr[i]<x)
    {
        i=i*2;
    }
    if(arr[i]==x)
    {
        return i;
    }
    return binarysearch(arr,x,n);
}
int main()
{
   int n;
   
   int arr[n];
    search(arr,x);
    return 0;

}