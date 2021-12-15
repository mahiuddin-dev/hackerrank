#include <iostream>

using namespace std;

int main(){
    short int n,date,month,sum = 0;
    cin>> n ;

    short int are[n],i,total,j;
    
    for( i = 0; i < n; i++){
        cin>> are[i] ;
    }

    cin>> date>>month ;

    i = 0;
    while(i < n){
        total = 0;
        for( j = 0; j < month; j++){
            total +=are[i+j];
        }

        if(total == date){
            sum++;
        }
        i++;
    }
    
    // this is another way to write for loop

    // for( i = 0; i < n; i++){
    //     total = 0;
    //     for( j = 0; j < month; j++){
    //         total += are[i+j];    
    //     }
    //     if(total == date){
    //         sum++;
    //     }
    // }
    cout<< sum <<endl;
    
    return 0;
}

