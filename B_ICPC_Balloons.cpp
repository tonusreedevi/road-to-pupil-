#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
       
int n;
cin>>n;
string s;
cin>>s;
  unordered_set<char> dis(s.begin(), s.end());
  cout<<n+dis.size()<<endl;

    }
return 0; } 