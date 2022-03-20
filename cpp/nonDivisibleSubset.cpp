// #include <iostream>

// using namespace std;

// int removeDuplicates(int arr[], int n) { 
//     if (n==0 || n==1) 
//         return n; 
  
//     int temp[n]; 

//     int j = 0; 
//     for (int i=0; i<n-1; i++) 

//         if (arr[i] != arr[i+1]) 
//             temp[j++] = arr[i]; 

//     temp[j++] = arr[n-1]; 

//     for (int i=0; i<j; i++) 
//         arr[i] = temp[i]; 
  
//     return j; 
// } 

// int main(){
//     int n;
//     cin >> n;
//     short int k;
//     cin >> k;
    
//     int are[n],i,num,j;
    
//     for(i=0; i < n; i++) {
//         cin >> are[i];
//     }
//     n = removeDuplicates(are, n); 
//     int count;
//     for(i=0; i < n; i++) {
//         for(j= i+1 ; j < n; j++){
//             if((are[i] + are[j]) % k != 0) count++; 
//         }
//     }

//     cout<< count <<endl;

//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
   int n, m,i;
   short int k;

   cin >> n >> k;

   int are[k] = {0};

   int count = 0;

   for ( i = 0; i < n; i++) {
      cin >> m;
      are[m % k]++;
   }

   for ( i = 1; i < (k + 1) / 2; i++)
      count += (are[i] > are[k - i] ? are[i] : are[k - i]);
   count += (are[0] >= 1) + (k % 2 == 0 && are[k / 2]);

   cout << count << endl;
}