#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,k;
cin>>n>>k;
vector<int>v(n);

for(int i=0;i<n;i++){
    cin>>v[i];
}

int count=0;

for(int i=0;i<n;i++){
       int res = 5-v[i];
       if(res>=k){
        count++;
       }
}
cout<<count/3<<endl;
return 0; }