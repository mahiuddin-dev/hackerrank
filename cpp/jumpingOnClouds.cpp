#include <iostream>

using namespace std;

int main(){
    short int n,k;
    cin >> n >> k;
    short int are[n],i;

    for(i = 0; i < n; i++){
        cin >> are[i];
    }

    short int sum = 100;

    i = 0;

    do{
        sum -= (are[i] == 1) ? 3:1;
        i = (i+k)%n;
    }while(i != 0);
 
    cout<< sum <<endl;

    return 0;
}
