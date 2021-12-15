#include <iostream>

using namespace std;

int main(){

    short int n,k,j,i;

    cin>> n >> k ;

    short int are[n];

    for( i = 0; i < n; i++){
        cin>>are[i];
    }
    short int sum,count = 0;

    for( i = 0; i < n-1; i++){
        for( j = i+1; j < n; j++){
            sum = are[i]+are[j];
            if(sum%k == 0){
                count++;
            }
        }
    }

    cout<< count <<endl;
    return 0;
}


// #include <iostream>

// using namespace std;

// int n=5,k=2;
// int num[20];

// void permutation(int at, int last){
//     int i;
//     if(last > n-at+1) return;
//     if(at == n+1){
//         for( i = 1; i <= k; i++){
//             cout<< num[i]<<" ";
//         }cout <<endl;
//         return ;
//     }

//     if(last){
//         num[k-last+1] = at;
//         permutation(at+1,last-1);
//     }

//     permutation(at+1,last);
// }

// int main(){
//     permutation(1,k);
//     return 0;
// }