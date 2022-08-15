#include<iostream>
using namespace std;
void merge(int *arr,int s,int e)
{
    int mid=(s+e)/2;
    int len1= mid-s+1;
    int len2=e-mid;
    int *left=new int[len1];
    int *right=new int[len2];
    int k=s;
    for(int i=0;i<len1;i++)
    {
        left[i]=arr[k++];
        
    }
     k=mid+1;
    for(int i=0;i<len2;i++)
    {
        right[i]=arr[k++];
        
    }
    int index1=0;
    int index2=0;
     k=s;
    while(index1<len1 && index2<len2)
    {
        if(left[index1]<right[index2])
        {
        arr[k++]=left[index1++];
        
        }
        else{
            arr[k++]=right[index2++];
        }
    }

    while(index1<len1)
    {
        arr[k++]=left[index1++];
    }
    while (index2<len2)
    {
        arr[k++]=right[index2++];
    }
    

}
void mergesort(int *arr,int s,int e)
{
    //Base case
    if(s>=e)
    {
        return ;
    }
    int mid=(s+e)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,e);
}
int main()
{
    int arr[5]={2,5,1,6,9};
    int n=5;
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}