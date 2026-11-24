#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int winm=0, winc=0 ;
    for(int i=0;i<n;i++)
    {
    int a,b;
    cin>>a>>b;
    if(a==b) continue;
    else if(a>b) winm++;
    else winc++;
    }


    if(winc>winm)
    cout<<"Chris"<<endl;
    else if( winm>winc)
    cout<<"Mishka"<<endl;
    else
    cout<<"Friendship is magic!^^"<<endl;

return 0; }