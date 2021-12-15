#include <iostream>

using namespace std;

int main(){
    int root;
    char a;
    string s;
    cin >> root >> s >> root;

    for(auto &c:s){
        if(isalpha(c)) {
             a = isupper(c)?'A':'a';
             c = a + (c - a + root) %26;
        }
    }
    cout<< s <<endl;
}