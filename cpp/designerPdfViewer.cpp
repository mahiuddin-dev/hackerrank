// #include <iostream>
// #include <string>

// using namespace std;

// short int count;

// short int findPosition(char position){
//     char a;
//     count = -1;
//     for(a= 'a'; a <= position; a++) {
//         count++;
//     }
//     return count;
// }


// int main(){

//     short int are[25],i;

//     for(i=0; i < 26; i++){
//         cin >> are[i];
//     }

//     string s;
//     cin >> s;

//    short int maxValue = 0,value,stringSize = s.size();

//     for(i = 0; i <stringSize; i++){
//         value = findPosition(s[i]);
//         if(are[value] > maxValue){
//             maxValue = are[value];
//         }
//     }

//     cout<< maxValue*stringSize <<endl;



//     return 0;
// }


#include <iostream>

using namespace std;

int main(){
    int H[26],i;
    for( i = 0; i < 26; i++)
       cin >> H[i];

    string word;
    cin >> word;
    
    int big_h = 0;
    for(char i : word)
        if(H[(int)i-97] > big_h) big_h = H[(int)i-97];
    
    cout << big_h * word.size() << endl;
    
    return 0;
}