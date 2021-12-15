#include <iostream>

using namespace std;

int main(){
    short int n;
    cin >> n;
    
     int sum = 0, p = 5;

    while(n--){
        p = p/2;
        sum += p;
        p *= 3;
    }
    cout<< sum <<endl;
    return 0;
}