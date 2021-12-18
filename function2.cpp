#include<iostream>
using namespace std;
int main()
{
    float sum(float,float,float);
    float x,y,z;
    cout<<" enter the number";
    cin>>x>>y>>z;
    float total;
    /* at this point we can call the function */
   total=sum(x,y,z);
    cout<<"sum of x,y andz="<<total<<endl;

} 
float sum(float a,float b,float c)// at this we can define the function
{
    float temp;
    temp=a+b+c;
    return(temp);
}