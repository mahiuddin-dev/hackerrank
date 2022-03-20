#include <iostream>

using namespace std;

int main(){
    short int t;
    cin >> t;

    short int totalStudent,techerAccepted,studentAttend,count;
    

    while(t--){
        cin >> totalStudent >> techerAccepted;
        count = 0;

        while(totalStudent--){
            cin >> studentAttend;
            if(studentAttend <= 0) count++;
        }

        if(count < techerAccepted) cout<< "YES" <<endl;
        else cout<< "NO" <<endl;
    }
    return 0;
}