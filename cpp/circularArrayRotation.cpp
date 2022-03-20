#include <iostream>

using namespace std;

int main(){

    int n,k,i,m;
    short int q;

    cin >> n >> k >> q;

    int are[n];
    for ( i=0;i<n;i++) cin >> are[i];

    int dest=k%n;
    int b[n];

    for (i=0;i<n;i++) {
        b[dest++]=are[i];
        if (dest==n) dest=0;
    }

    for (i=0;i<q;i++) {
        cin >> m;
        cout << b[m] << endl;
    }

    return 0;
}