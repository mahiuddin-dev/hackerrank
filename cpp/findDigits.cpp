#include <iostream>
#include<string>

using namespace std;

int main(){
    short int t,n;
    cin >> t;

    int number, value,count,orginalValue;

while(t--){
        count = 0;
        cin >> number;
        orginalValue = number;
        string str = to_string(number);  
    
         n = str.size();

        while(n--){
            value = number %10;
            number /= 10;

            if(value == 0) continue;
            else {
                if(orginalValue % value == 0) count++;
            }  
        }

        cout<< count <<endl;
    }

    return 0;
}