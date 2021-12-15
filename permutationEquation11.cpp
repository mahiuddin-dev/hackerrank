#include <iostream>

using namespace std;
int main() {
    short int n,i,k;
    cin>>n;

    int p[n+1];

    for( i=1;i<=n;i++){
        cin>>k;
        p[k]=i;
    }

    for( i=1;i<=n;i++){
        cout<<p[p[i]]<<endl;
    }

    return 0;
}