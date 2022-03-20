#include <iostream>

using namespace std;

int main(){
    short int n;
    cin>>n;
    short int are[n],i,j;
    
    for( i = 0; i < n; i++){
        cin>>are[i];
    }

     int ans;

    for(i=0; i < n; i++){
        ans = 0;
        for(j=0; j <= are[i]; j++){
            (j % 2 == 0) ? ans++ : ans *=2;
        }
        cout<< ans <<endl;
    }


    return 0;
}

// 9
// 41
// 43
// 40
// 45
// 38
// 44
// 37
// 42
// 39