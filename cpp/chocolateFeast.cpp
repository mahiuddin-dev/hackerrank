// #include <iostream>

// using namespace std;

// int main(){

//     short int n;
//     // cin >> n;

//     int amount,price,wrapper,candy,candyWrapper1,sum,candyWrapper2;
//     // while(n--){
//         cin >> amount >> price >> wrapper;
//         candy = amount / price;
//         candyWrapper1 = candy / wrapper;
//         sum = 0;
//         while(candyWrapper1 >= wrapper){
//             sum += candyWrapper1;
//             candyWrapper1 /= wrapper;
//         }
//         if(candy > wrapper){
//             candyWrapper2 = candy % wrapper;
//         }

//         cout<< candy + candyWrapper1 + sum + candyWrapper2 <<endl;
//         //cout<< candyWrapper2 <<endl;
//     // }
//     return 0;
// }



#include <iostream>

using namespace std;

int chocolateFeast(int n, int c, int m) {
    int choco=n/c,eat=0,wp=0;
    while(choco>0){  //add until chocolate=0
        eat+=choco;
        wp+=choco;   //counting no. of chocolates as wrappers
        choco=wp/m;  //No. of wrappers turned
        wp=wp%m;     //left wrappers
    }
    return eat;
}


int main(){
    short int n; 
    cin>>n;
    int amount,price,wrapper,candyWrapper,sum,chocolate;

while(n--){
    cin >> amount >> price >> wrapper;
    candyWrapper = 0,sum = 0
    chocolate = amount / price;

    while(chocolate > 0){ 
        sum += chocolate;
        candyWrapper +=chocolate;
        chocolate = candyWrapper / wrapper;
        candyWrapper %= wrapper;
    }
    cout<< sum <<endl;
}

    return 0;
}
