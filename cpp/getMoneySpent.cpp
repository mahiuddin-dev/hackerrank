#include <iostream>

using namespace std;

int main(){
    int budget;
    unsigned int n,m,i,j;

    cin >> budget >> n >> m;

    unsigned int keyboard[n], drive[m];

    for( i = 0; i < n; i++){
        cin >> keyboard[i];
    }

    for( i = 0; i < m; i++){
        cin >> drive[i];
    }

    int sum, currentSum;

    for( i = 0; i < n; i++){
        // currentSum = 0;
        for( j = 0; j <m; j++){
            sum = keyboard[i] + drive[j];

            if( sum <= budget ){
                if( currentSum < sum) {
                    currentSum = sum; 
                }
            }
        }
    }

    (currentSum == 0) ? cout<< -1 <<endl: cout<< currentSum<<endl;

    return 0;
}