#include <iostream>

using namespace std;

int Reverse(int num){
    int reversedNumber = 0, remainder;
    reversedNumber = 0;
    while(num != 0) {
        remainder = num%10;
        reversedNumber = reversedNumber*10 + remainder;
        num /= 10;
    }
    return reversedNumber;
}

int main(){
    int n,m,k,i,storeNumber, count = 0, revNumber;

    cin >> n >> m >> k;

    for( i = n; i <= m; i++ ){
        storeNumber = i;
        revNumber = Reverse(i);
        if( (abs(storeNumber - revNumber))%k == 0 ) count++;
    }
    cout<< count <<endl;

    return 0;
}