#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int t,n;
    unsigned long long res,mod=1000000007,x=2,y;
    cin>>t;
    for(int tc=0;tc<t;tc++){
        x=2;
        res=1;
        cin>>n;
        y=n-1;
        while(y){
            if(y&1)
            res=(res%mod*x%mod)%mod;
            y=y>>1;
            x=(x%mod*x%mod)%mod;
        }
        cout<<(res*10)%mod<<endl;

    }
}