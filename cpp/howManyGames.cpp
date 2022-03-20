#include <iostream>

using namespace std;

int main(){
    unsigned short int price,discount,miniumumPrice,taka,count = 0;
    cin >> price >>discount >> miniumumPrice >> taka;
    

    while( taka >= price ){
        count++;
        taka -=price; 
        price = price-discount>miniumumPrice?price-discount:miniumumPrice; 

    }

    cout<< count <<endl;
    
    return 0;
}