#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n<=1) return false;
    if(n<=3) return true;
    if( n % 2==0 || n%3 == 0) return false;
        for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}



int main()
{
    int n,m;
    cin>>n>>m;
 
    bool no=false;

        if(!isPrime(m))  
            cout<<"NO"<<endl;
        else if( m==3)
            cout<<"YES"<<endl;
        else
            {
                for(int i = n+1; i<m; i++)
                    {
                        if(isPrime(i))
                        {
                           no=true;
                            break;
                        }
                     
                    }  

                if(no) 
                cout<<"NO"<<endl;
                else 
                cout<<"YES"<<endl;
            }
    return 0;
}