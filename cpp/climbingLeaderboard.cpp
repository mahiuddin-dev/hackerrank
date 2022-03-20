// #include <iostream>
// #include <vector>

// using namespace std;

// int main(){
//     int firstTime;
//     cin >> firstTime;

//     int Score[firstTime],i;

//     for(i = 0; i < firstTime; i++){
//         cin >> Score[i];
//     }

//     int player;
//     cin >> player;
//     int playerScore[player];

//     for(i = 0; i < player; i++){
//         cin >> playerScore[i];
//     }


//     int rank = 1;
//     vector <int> alicerank;

//     int j = firstTime-1;
    
//     for(i = 0; i < j; i++){
//         if(Score[i] != Score[i+1]){
//             rank++;
//         }
//     }rank++;

//     for(i = 0; i < player;){
//         if(Score[j] == Score[j-1]){
//             j--;
//         }else if(playerScore[i] >= Score[j]){
//             if(rank > 1){
//                 rank--;
//                 j--;
//             }
//         }else{
//             alicerank.push_back(rank);
//             i++;
//         }
//     }

//     for( i = 0; i < alicerank.size(); i++){
//         cout<< alicerank[i] <<" ";
//     }cout <<endl;
    

//     return 0;
// }


    // int firstTime,n,i;
    // cin >> firstTime;

    // vector <int> firstScore;

    // while(firstTime--){
    //     cin>>n;
    //     firstScore.push_back(n);
    // }

    // int player;
    // cin >> player;
    // int playerScore[player];

    // for(i = 0; i < player; i++){
    //     cin >> playerScore[i];
    // }


    // int rank = 1;


#include <stack>
#include <iostream>
using namespace std;

int main(){
  unsigned int n, m, i, tmp;
  cin >> n;
  stack<unsigned int> scores;

  for (i = 0; i < n; ++i) {
    cin >> tmp;
    if (scores.empty() || scores.top() != tmp) scores.push(tmp);
  }
  
  cin >> m;
  for (i = 0; i < m; ++i) {
    cin >> tmp;
    while (!scores.empty() && tmp >= scores.top()) scores.pop();
    cout << (scores.size() + 1) << endl;
  }
  return 0;
}