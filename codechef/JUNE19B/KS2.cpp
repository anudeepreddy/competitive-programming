//https://www.codechef.com/JUNE19B/problems/KS2
#include<iostream>
using namespace std;
unsigned long long nsum(unsigned long long n){
    unsigned long long s=0;
    while(n){
        s+=n%10;
        n=n/10;
    }
    return s;
}
int main(){
    unsigned long long t,len,num,n;
    //string n;
    cin>>t;
    for(unsigned long long tc=0;tc<t;tc++){
        cin>>n;
        for(unsigned long long i=n*10;i<=(n*10)+10;i++)
        if(nsum(i)%10==0){
            cout<<i<<endl;
            break;
        }
        //cout<<n<<endl;
    }
}
