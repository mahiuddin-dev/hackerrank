#include <iostream>

using namespace std;

int main(){
    unsigned int n,pages,fpages, bpages;
    cin >> n >> pages;

    fpages = pages / 2;
    bpages = (n/2) - (pages/2);

    if(fpages < bpages) cout<< fpages <<endl;
    else cout<< bpages <<endl;
    
    return 0;
}