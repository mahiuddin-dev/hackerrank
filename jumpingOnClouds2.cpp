#include <iostream>

using namespace std;

int main(){
    short int n;
    cin >> n;
    short int are[n],i;

    for( i = 0; i < n; i++){
        cin >> are[i];
    }
    unsigned short int count = 0;
    for ( i = 0; i < n - 1; i++) {
        if (are[i] == 0) i++;
        count++;
    }
    
    cout<< count <<endl;

    return 0;
}