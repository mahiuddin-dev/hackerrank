#include <iostream>

using namespace std;

int main(){
    short int n,i,x,y,z,cata,catb;
    cin >> n;

    for(i=0; i < n; i++){
        cin >> x >> y >> z;
        
        cata = abs(z-x);
        catb = abs(z-y);

        if( cata > catb ) cout<< "Cat B" <<endl;
        else if(cata < catb) cout<< "Cat A"<<endl;
        else cout<< "Mouse C" <<endl;
    }

    return 0;
}