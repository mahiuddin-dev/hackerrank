#include <iostream>
#include <map>

using namespace std;

int main(){

    short int n,max=0,q,i;
    cin>>n;

    map<int,int>m;

    for(i=0;i<n;i++){
        cin>>q;
        m[q]++;
        if(m[q]>max)
            max=m[q];
       
    }
    cout<<n-max;

    return 0;
}