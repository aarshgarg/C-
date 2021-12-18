#include<iostream>
using namespace std;
//int main(){
struct sample
{
    int x;
    int y;

};
int main(){
sample one;
sample *ptr;
ptr=&one;
(*ptr).x=10;
(*ptr).y=20;
//cout<<"Enter the number of x and y";
//cin>>ptr->x>>ptr->y;
cout<< "value of x="<<(*ptr).x<<endl;
cout<< "value of y="<<(*ptr).y<<endl;
return 0;

}