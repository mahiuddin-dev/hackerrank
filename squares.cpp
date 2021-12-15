#include <iostream>
#include <cmath>


using namespace std;

int main(){
    short int t;
    cin >> t;
    int n,m,i;

    while(t--){
        cin >> n >> m;
        for(i = 0; i < 1; i++){
            cout<< (int)(floor(sqrt(m))-ceil(sqrt(n))+1) <<endl;
        }
    }

  
    // while(scanf("%d%d",&n,&m)>){
    //     printf("%d\n",(int)(floor(sqrt(m))-ceil(sqrt(n))+1));
    // }

    return 0;
}