#include <iostream>

using namespace std;

int main(){
    int s,t,a,b,m,n,d,i,apple = 0, orang = 0;
    cin>> s>>t>>a>>b>>m>>n;

    for( i = 0; i < m; i++){
        cin>> d ;
        if((a+d >= s) && (a+d) <= t) apple++;
    }
    for( i = 0; i < n; i++){
        cin>> d ;
        if((b+d >= s) && (b+d) <= t) orang++;
    }
    cout<< apple <<endl;
    cout<< orang <<endl;
    return 0;
}