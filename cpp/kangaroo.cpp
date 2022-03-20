#include <iostream>

using namespace std;

int main(){
   short int x1,u1,x2,u2,count = 0;
    cin>> x1>>u1>>x2>>u2;


        while(x1 < 100000000){
            x1 = x1+u1;
            x2 = x2+u2;

            if(x1 == x2) {
                count = 1;
                break;
            }

        }

        if(count == 0) cout<< "NO" <<endl;
        else cout<< "YES" <<endl;

    
    return 0;
}