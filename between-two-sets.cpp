#include <iostream>

using namespace std;

int main(){
    short int n,m,i;
    cin>> n >>m ;

    short int a[n], b[m];
    

    for( i = 0; i < n; i++){
        cin>> a[i] ;
    }

    for( i = 0; i < m; i++){
        cin>> b[i] ;
    }

    short int x, sizeCount = 0 ,temp;

    x = a[n-1];

    while(x <= b[0]){
        temp = 0;
        
        for( i = 0; i < n; i++){
            if(x % a[i] != 0){
                temp = 1;
                break;
            }
        }

        if(temp = 0){
            for( i = 0; i < m; i++){
             if(b[i] % x != 0){
                    temp = 1;
                    break;
                }
            }
        }

        if (temp == 0)
        sizeCount++;
        x++;
    }

cout<< sizeCount <<endl;

    return 0;
}