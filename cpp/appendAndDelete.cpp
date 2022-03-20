#include <iostream>
#include <string>

using namespace std;

int main(){
    string s,t;
    short int k,i,count;

    cin >> s >> t >> k;

    int Ssize = s.size(), TSize = t.size();

    if(Ssize < TSize) cout<< "No" <<endl;
    else{
    for( i = 0; i < Ssize; i++){
        count++;        
        if(s[i] != t[i] ) break;
    }

    int x = count - 1;
    int counts = 0;
    int countt = 0;

    for( i = x; i < Ssize; i++){
        counts++;
    }
    for( i = x; i < TSize; i++){
        countt++;
    }

    (counts+countt > k)  ? cout<< "No" <<endl:cout<< "Yes" <<endl;
    }
    return 0;
}

int count,i;
    for(i=0;s[i],t[i];i++)
        if(s[i]!=t[i])        
        break;
    int n1=s.size(),n2=t.size();
    count=n1-i+n2-i;
    
    if(k==count||k>=n1+n2)       // Case 1
    return "Yes";
    else if(count%2==k%2 && count<=k) // Case 2
    return "Yes";
    else  			 // Case 3
    return "No";
