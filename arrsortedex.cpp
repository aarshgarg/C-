#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    int n,temp,i,j;
    cout<<"How many number are in the array";
    cin>>n;
    cout<<"Enter the number int the array="<<endl;
    for(i=0;i<=n-1;++i){

    cin>>arr[i];
    
}
cout<<"content of the array is unsorted form"<<endl;
for (i=0;i<=n-1;++i)
{
    cout<<"\t"<<arr[i]<<endl;
}
for(i=0;i<=n-1;++i){
    for (j=0;j<=n-1;++j)
    if (arr[i]<arr[j])
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;


    }
    cout<<"sorted array"<<endl;
    for(i=0;i<=n-1;++i)
    {
        cout<<"\t"<<arr[i]; 
    }
}
return 0;
}