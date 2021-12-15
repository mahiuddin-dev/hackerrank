// #include <iostream>

// using namespace std;

// int main(){ 
//     int n,i,j,carry = 0, mul, len =  1, digit;
//     cin>> n ;

//     int are[1000] = {0};
//     are[0] = 1;

//     for(i = 2; i <= n; i++){
//         for(j = 0; j < len; j++){
//             mul = i*are[j]+carry;
//             digit = mul % 10;
//             are[j] = digit;
//             carry = mul / 10;
//         }
//         while(carry){
//             digit = carry % 10;
//             cout<< digit <<endl;
//             are[len] = digit;
//             len++;
//             carry /= 10;
//         }
//     }

//     for(i = len-1; i >= 0; i--){
//         cout<< are[i];
//     }cout <<endl;

//     return 0;
// }



#include <iostream>

using namespace std;

int main(){
    int n,i,j,digit,carry = 0, len = 1, mul;
    cin>>n;

    int are[1000];
    are[0] = 1;

    for(i = 2; i <= n; i++){
        for(j = 0; j < len; j++){
            mul = i*are[j]+carry;
            digit = mul % 10;
            are[j] = digit;
            carry = mul / 10;
        }
        while(carry){
            digit = carry % 10;
            are[len] = digit;
            len++;
            carry /= 10;
        }
    }

    for(i = len-1; i >= 0; i--){
        cout<< are[i];
    }cout <<endl;
    return 0;
}