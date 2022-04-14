#include<iostream>
using namespace std;
int root(int n){
    int i=1;
    while(i*i<=n)
    {
       i++;
    }
return i-1;

}
int main ()
{
    int n;
    cin>>n;
    int op=root(n);
    cout<<op;

    return 0;
}