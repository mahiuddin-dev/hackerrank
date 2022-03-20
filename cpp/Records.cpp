#include <iostream>

using namespace std;

int main(){
    int n;
    cin>> n ;
    int are[n],i;

    for( i = 0; i < n; i++){
        cin>> are[i] ;
    }

    int highCount = 0, lowCount = 0, highScore = are[0],lowScore = are[0];

    for( i = 0; i < n; i++){
        if(highScore < are[i]){
            highScore = are[i];
            highCount++;
        }
        if(lowScore > are[i]){
            lowScore = are[i];
            lowCount++;
        }
    }

    // for( i = 0; i < n; i++){
    //     if(lowScore > are[i]){
    //         lowScore = are[i];
    //         lowCount++;
    //     }
    // }

    cout<< highCount<< lowCount <<endl;

    return 0;
}