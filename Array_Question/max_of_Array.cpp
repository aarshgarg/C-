#include<iostream>
using namespace std;
int main()
{
    //  we can take the -ve value due to the if we update the value of max then it can
    //   change easily otherwise if we can intializie the value 0 and 
    //   you can print the first element as -1 it cannot update  
    int mx=-9;
    int n;
    cout<<"Enter the number=";
    cin>>n;
    int arr[n];
    for( int i=0;i<n;i++)
    {
        cout<<"enter the elements in array=";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
{
    // By using this we can update the value if we traverse an array 
    // if next element is small it can give previous value
    mx= max(mx,arr[i]);
    cout<<mx<<endl;
}
return 0;
}