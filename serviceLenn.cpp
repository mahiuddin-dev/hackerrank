#include <iostream>
using namespace std;

int main(){
    int n,i,min;
    short int t,start,end;
    cin >> n >> t;
    int are[n];
    
    for(i = 0; i < n; i++){
        cin >> are[i];
    }
    
    while(t--){
        cin >> start >> end;
        min = are[start];
        for(i = start+1; i <= end; i++){
            if(are[i] < min) min = are[i];
        }
        cout << min <<endl;
    }
    
}
