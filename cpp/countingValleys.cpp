/*
      /\
     / \
-\  /   -
  \/


   /\
--/  \  -
      \/


_/\      _
   \    /
    \/\/

*/

#include <iostream>

using namespace std;

int main(){
    unsigned int n,i,count=0,valley=0,chk;
    cin >> n;
    char upAndDown[n+2];
    chk = n-1;

    for( i = 0; i < n; i++){
        cin >> upAndDown[i];

        if(upAndDown[i] == 'D'){
            count--;
        } else if(upAndDown[i] == 'U'){
            count++;

            if( i < chk && i > 0){
            if(count == 0){
                valley++;
            }
        }
        }

        

    }

    cout<< valley <<endl;
    return 0;
}

// U   D   D   D   U   D   U   U  
// 1   0  -1  -2  -1  -2   -1  0 
