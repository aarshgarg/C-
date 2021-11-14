#include<bits/stdc++.h>
using namespace std;
#define n 3
#define m 4
int  main()
{
    int i,j;
    float a[n][m]={
        {1,2,3,4},
        {5,6,7,8},
        {56,77,88,9}
    };
    cout<<"content if the aaray"<<endl;
    for (i=0;i<=n-1;++i){
        for(j=0;j<=m-1;++j)
        cout<<a[i][j]<<'\t';
        cout<<endl;

    }
    return 0;
}
