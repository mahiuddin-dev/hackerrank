// #include <iostream>
// #include <vector>


// using namespace std;

// int main(){
//     int n,k,BrianCharged,i,input,bill,finalBill;

//     cin>> n>>k;

//     vector <int> are;

//     for( i = 0; i < n; i++){
//         cin>> input ;
//         are.push_back(input);
//     }

//     cin>> BrianCharged ;

//     int total = 0;

//     are.erase(are.begin()+k);

//     for( i = 0; i < n-k; i++){
//         total += are[i];
//     }

//     bill = total/2;

//     finalBill = BrianCharged - bill;

//     if(bill == BrianCharged) cout<< "Bon Appetit" <<endl;
//     else cout<< finalBill <<endl;

//     return 0;
// }


#include <iostream>

using namespace std;

int main(){
    int i,n,k,BrianCharged,bill,total = 0;
    cin>> n>>k ;

    int are[n];

    for( i = 0; i < n; i++){
        cin>> are[i];

        total += are[i];
    }

    cin>> BrianCharged ;

    bill = total - are[k];
    bill /=2;

    if(bill == BrianCharged) cout<< "Bon Appetit" <<endl;
    else cout<< BrianCharged - bill <<endl;

    return 0;
}