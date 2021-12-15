#include <iostream>
using namespace std;

int main(){
    short int n,k,count,pg,j;
    cin >> n >> k;
    short int arr[n],i;
    
    for(i = 0; i<n; i++) cin >> arr[i];

    count=pg=0;
    
    for(i = 0; i<n; i++){
        for(j = 1; j <= arr[i]; j++){
            
            if(k==1 || j%k==1) pg++;
            
            if(j==pg) count++;
        }
    }
    
    cout << count << endl;
}
