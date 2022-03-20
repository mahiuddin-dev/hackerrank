#include <iostream>

using namespace std;

int main(){
    short int n,k,i,height,maxN;
    cin >> n >> k;

    maxN = 0;

    for( i = 0; i < n; i++){
        cin >> height;

        if(maxN < height){
            maxN = height;
        }
    }

    k < maxN ? cout<< maxN - k <<endl: cout<< 0 <<endl;

    return 0;
}