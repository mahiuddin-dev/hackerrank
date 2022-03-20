// #include <iostream>

// using namespace std;

// int countInArray(int *are,int key, int sizeCount){
//     int i, countSize = 0;

//     for( i = 0; i < sizeCount; i++){
//         if(are[i] == key){
//             countSize++;
//         }
//     }
//     return countSize;
// }


// void Display(int count1,int count2,int count3,int count4,int count5){

//     if( ((count1 > count2) || (count1 == count2)) && ((count1 > count3) || (count1 == count3)) && ((count1 > count4) || (count1 == count4)) && ((count1 > count5) || (count1 == count5))  ){
//         cout<< 1 <<endl;
//     }
//    else if( (count2 > count1) && ((count2 > count3) || (count2 == count3)) && ((count2 > count4) || (count2 == count4)) && ((count2 > count5) || (count2 == count5)) ){
//         cout<< 2 <<endl;
//     }
//     else if( (count3 > count1) && (count3 > count2) && ((count3 > count4) || (count3 == count4)) && ((count3 > count5) || (count3 == count5)) ){
//         cout<< 3 <<endl;
//     }
//     else if( (count4 > count1) && (count4 > count2) && (count4 > count3) && ((count4 > count5) || (count4 == count5)) ){
//         cout<< 4 <<endl;
//     }else{
//         cout<< 5 <<endl;
//     }
// }

// int main(){
//     int n,i;
//     cin>> n;
//     int are[n];

//     for( i = 0; i < n; i++){
//         cin>> are[i] ;
//     }

//     int count1, count2, count3, count4, count5;

//     count1 = countInArray(are,1,n);
//     count2 = countInArray(are,2,n);
//     count3 = countInArray(are,3,n);
//     count4 = countInArray(are,4,n);
//     count5 = countInArray(are,5,n);

//     Display(count1, count2, count3, count4, count5);

//     return 0;
// }

// ? Solution 2

// #include <bits/stdc++.h>

// using namespace std;

// const int maxN = 1e5+10;
// int N,A[10];

// int main()
// {
//     cin >> N;
//     for (int i=1,x; i <= N; i++) cin >> x, A[x]++;
//     int ans = 1;
//     for (int i=2; i <= 5; i++)
//         if (A[i] > A[ans]) ans = i;
//     cout << ans;
// }

// ? Solution 3

// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     int a[6];
//     memset(a, 0, sizeof(a));
//     for(int i = 0; i < n; i++){
//         int x;
//         cin >> x;
//         a[x]++;
//     }
//     int ans, mx = 0;
//     for(int i = 1; i <= 5; i++){
//         if(a[i] > mx){
//             mx = a[i];
//             ans = i;
//         }
//     }
//     cout << ans;
// }


// #include <bits/stdc++.h>
// #define ll long long
// #define mod 1000000007
// using namespace std;
// int main(){
// 	ios::sync_with_stdio(false);
// 	cin.tie(0);
// 	int n;
// 	cin>>n;
// 	int a, f[6];
// 	memset(f, 0, sizeof(f));
// 	for(int i = 0; i<n; i++){
// 		cin>>a;
// 		f[a]++;
// 	}
// 	int max = 0, ans = 0;
// 	if(f[1]>max) max = f[1], ans = 1;
// 	if(f[2]>max) max = f[2], ans = 2;
// 	if(f[3]>max) max = f[3], ans = 3;
// 	if(f[4]>max) max = f[4], ans = 4;
// 	if(f[5]>max) max = f[5], ans = 5;
// 	cout<<ans<<endl;
// 	return 0;
// }


// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int a[1000000];

// int main() {  
//     int n;
//     cin>>n;
    
//     for (int i = 0; i < n; ++i) {
//         int x;
//         cin>>x;
//         ++a[x];
//     }
    
//     int kq = 0;
//     for (int i = 0; i < 1000000; ++i) {
//         if (a[i] > a[kq]) {
//             kq = i;
//         }
//     }
    
//     cout<<kq;
//     return 0;
// }



#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ans = 0;

    int arr[6] = {0};

    int tmp,i;

    for(i=0;i<n;i++){
        cin >> tmp;
        arr[tmp]++;
    }
    
    int a1;
    
    for(i=1;i<=5;i++){
        if(ans < arr[i]){
           ans = arr[i];
            a1 = i;
        }
    }
    cout << a1 << endl;
    return 0;
}