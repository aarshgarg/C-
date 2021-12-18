#include<iostream>
using namespace std;
class bankdeposit{
    int principal;
    int year;
    float intrestrate;
    float returnvalue;
    public:
    bankdeposit(){}
    bankdeposit(int p,int y,float r);
    bankdeposit(int p,int y,int R);
void show();
};
bankdeposit:: bankdeposit(int p,int y,float r){
    principal=p;
    year=y;
    intrestrate=r;
    returnvalue=principal;
    for( int i=0;i<y;i++)
    {
        returnvalue=principal*intrestrate*year;
        returnvalue= principal+returnvalue;
    }
}
 void bankdeposit :: show(){
    cout<<"principal amount was "<<principal<<endl
    <<"return value after "<<year
    <<"year is "<<returnvalue<<endl;
    }
    int main(){
        bankdeposit bd1;
        int p,y;
        float r;
        int  R;
        cout<< "enter the value of p ,y  and r"<<endl;
        cin>>p>>y>>r;
        bd1=bankdeposit(p,y,r);
        bd1.show();
        return 0;
    }