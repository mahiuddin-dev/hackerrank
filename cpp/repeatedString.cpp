#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;
    unsigned long n,count=0;
    cin >> n;

    int i,k=s.size();
    
    for(i=0;i<k;i++){
        if(s[i]=='a') count++;
    }

    count *= (n/k);
    
    for(i=0;i<(n%k);i++){
        if(s[i]=='a')
            count++;
    } 
    cout << count << endl;
        return 0;
}