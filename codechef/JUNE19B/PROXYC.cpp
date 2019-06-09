//https://www.codechef.com/JUNE19B/problems/PROXYC
#include<iostream>
#include<math.h>
using namespace std;
//foo does the job for me
void foo(int Case){
    //cout<<"case:"<<Case<<endl;
    int len,c=0;
    string att;
    cin>>len>>att;
    if(len<=4){
        cout<<"-1";
        return;
    }
    int reqatt=ceil(len*0.75);
    int present_att=0;
    for(int i=0;i<len;i++)
    if(att[i]=='P')
    present_att++;
    if(present_att>=reqatt){
        cout<<"0";
        return;
    }
    for(int i=2;i<len-2;i++){
        
        if(att[i]=='A'&&(att[i-1]=='P'||att[i-2]=='P')&&(att[i+1]=='P'||att[i+2]=='P')){
            c++;
            if(present_att+c==reqatt){
            cout<<c;
            return;
            }
        }

    }
cout<<"-1";
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        foo(i+1);
        cout<<endl;
    }
}