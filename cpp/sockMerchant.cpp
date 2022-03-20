#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    short int n,i,j,count = 0;
    cin>> n ;

    short int are[n];

    for( i = 0; i < n; i++){
        cin>>  are[i];   
    }

    sort(are, are + n);

    for( i = 0; i < n;){
        if(are[i] == are[i+1]){
            count++;
            i+=2;
        }else i++;
    }

    cout<< count << endl;

    return 0;
}