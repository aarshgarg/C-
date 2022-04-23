#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
 int main()
 {
     string str;
    //  getline is used to print tht complete line after space
     getline(cin,str);
     cout<< str<<endl;

     string s1="abc";
     string s2="abc";
     if(!s1.compare(s2))
     {
         cout<< "string are equal"<<endl;    
          }

        string str3="Aarsh is the bouy";
        str3.clear();
        cout<<str3;
        string str4="nincompoop";
        str4.insert(3,"pin");
        cout<<str4;
        string s=str4.substr(6,4);
        cout<<str4;
        string str5="zukhcduefhilhelih";
        sort(str5.begin(),str5.end());
        cout<<str5<<endl;
     return 0;

 }