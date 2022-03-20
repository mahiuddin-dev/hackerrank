#include <iostream>
#include <vector>

using namespace std;

int main(){
    short int n,m,i,j,k,counter;
    cin >> n >> m;

    vector< short int> are;

    for(i = 0; i < n; i++){
        cin >> are[i];
    }

    for(i = 0; i < n; i++){
        for(j = i+1; j < n; j++){
            counter = 0 ;
            for (  k = 0 ; k < n ; k++ ) {
                
                if ( are[i][k] == '1' || are[j][k] == '1' ) {
                    counter ++ ;
                }   
            }
        }
    }



    return 0;
}
/*
10101
11100
11010
00101
*/