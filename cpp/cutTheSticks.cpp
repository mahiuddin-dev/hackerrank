#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    short int n,count;
    cin >> n;
    short int i,j,m;

    vector <short int> are;
    
    for( i = 0;i < n; i++) {
        cin >> m;
        are.push_back(m);
    }

    sort(are.begin(),are.end());

    // for(i = 0;i < n; i++) {
    //     count = 0;
    //     for(j = 0;j < n; j++){
    //         if( are[i] == are[j]) count++;
    //     }
    //     cout<< sizeof(are) / sizeof(are[0]) <<endl;
    //     while(count--){

    //     }
    // } 

    reverse(are.begin(), are.end());

    while(!are.empty()){

    cout<<are.size()<<endl;
        for(int i = 0; i<are.size();++i)
            are[i]-=are[are.size()-1];
        while(are.back() ==0 && !are.empty()){
            are.pop_back();
        }
        
    }
    

    return 0;
}
