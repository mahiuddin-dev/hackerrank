// #include <bits/stdc++.h>

// #include <iostream>
// #include <algorithm>

// using namespace std;

// // int N;
// // int A[1000];

// int N;
// int A[1000];
// int main()
// {
//     scanf("%d", &N);
//     for(int i=0; i<N; i++)
//     {
//         int a;
//         scanf("%d", &a);
//         A[a]++;
//     }
//     int ans=0;
//     for(int i=1; i<1000; i++)
//         ans=max(ans, A[i-1]+A[i]);
//     printf("%d\n", ans);
//     return 0;
// } 


#include <iostream>
#include <algorithm>

using namespace std;

int n,are[100];


int main(){
    cin>>n;
    int a,i, ans = 0;
    for( i = 0; i < n; i++){
        cin>> a ;
        are[a]++;

        // cin>>are[i];
    }

    for( i = 1; i < n; i++){
        ans = max(ans, are[i-1]+are[i]);
    }
    cout<< ans <<endl;


    return 0;
}