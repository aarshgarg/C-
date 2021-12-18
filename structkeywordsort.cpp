#include<bits/stdc++.h>
#include<string.h>
using namespace std;
#define max 100
struct date
{
    int day;
    int month;
    int year;

};
struct school{
    char name [20];
    long int rollno;
    char sex[5];
    struct date dob;
    struct date doj;
    };
    school student[max];
    int main()
    {
        school student[max];
        int output (school student[max],int n);
        int sort(school student[max],int n);
    int n;
        cout<<"Enter the number in the array:="<<endl;
        cin>>n;
        for(int i=0;i<=n-1;++i){
            cout<<" Record="<<i+1<<endl;
            cout<<"name:";
            cout<< student[i].name;
            cout<<"rollno:";
            cout<< student[i].rollno;
            cout<< "sex:";
            cout<< student[i].sex;
            cout<<"Date of birth :";
            cout<< student[i].dob.day;
            cout<< student[i].dob.month;
            cout<<student[i].dob.year;
            cout<< " date of joining";
            cout<< student[i].doj.day; 
            cout<<student[i].doj.month;
            cout<<student[i].doj.year;
            
        }
        cout<<"unsorted arra form \n";
        output(student,n);
        sort(student,n);
        cout<<"sorted form\n";
        output(student,n);
               } 
          int output ( school student[max],int n)
          {
              cout<< "Name Roll No date_of_birth date_of joining";
              cout<<"____________________________________________";

              for(int i=0;i<=n-1;++i)
              {
                  cout<<student[i].name<<'\t';
                  cout<<student[i].rollno<<'\t';
                  cout<<student[i].sex<<'\t';
                  cout<<student[i].dob.day<<'\t';
                  cout<<student[i].dob.month<<'\t';
                  cout<<student[i].dob.year;
                  cout<<student[i].doj.day<<'\t';
                  cout<<student[i].doj.month<<'\t';
                  cout<<student[i].doj.year;  
                
              }
          }
              int sort(school student[max],int n)
              {
              
                  struct school temp;
                  for(int i=0;i<=n-1;++i)
                  {
                      for(int j=0;j<=n-1;++j)
                      if(strcmp(student[i].name,student[j].name)<=0){

                          temp=student[i];
                          student[i]=student[j];
                          student[j]=temp;
                      }
                  }
                   return 0;
              }
          



        
    
