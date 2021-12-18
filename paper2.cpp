#include<iostream>
using namespace std;
//program start now 
class wrk{
int n;
char c;
public:
void ci(char ch,int i){
n=i;
c=ch;
cout<<"\n your char and number : "<<c<<" "<<n;
}
void ci(int i,char ch){
n=i;
c=ch;
cout<<"\n your char and number : "<<c<<" "<<n;
}
};

int main(){
wrk w1;
w1.ci('a',3);
w1.ci(1,'b');
}