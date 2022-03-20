#include <iostream>

using namespace std;

int main(){
    short int are[6][6],i,j;
    
    int sum = 0,total = -63;

    for(i = 0; i < 6; i++){
        for(j = 0; j < 6; j++){
            cin >> are[i][j];
        }int sum = 0,max = -63;
    }

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            sum = are[i][j] + are[i][j+1] + are[i][j+2];

            sum += are[i+1][j+1];

            sum += are[i+2][j] + are[i+2][j+1] + are[i+2][j+2];

            if (total < sum) total = sum;
        }
    }

    cout<< total << endl;


    return 0;
}