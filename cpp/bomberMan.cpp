// #include <iostream>
// #include <vector>

// using namespace std;

// void fillGridWithBombs(vector<string> &grid){
// 	size_t r{grid.size()};
// 	size_t c{grid[0].size()};

// 	for (int i = 0; i < r; i++)
// 		for (int j = 0; j < c; j++)
// 			grid[i][j] = 'O';
// }

// void detonate(vector<string> &grid, vector<string> &previous_grid){
// 	size_t r{grid.size()};
// 	size_t c{grid[0].size()};

// 	for (int i = 0; i < r; i++)
// 		for (int j = 0; j < c; j++)
// 		{
// 			if (previous_grid[i][j] == 'O')
// 			{
// 				grid[i][j] = '.';

// 				if (i + 1 < r)
// 					grid[i + 1][j] = '.';

// 				if (i - 1 >= 0)
// 					grid[i - 1][j] = '.';

// 				if (j + 1 < c)
// 					grid[i][j + 1] = '.';

// 				if (j - 1 >= 0)
// 					grid[i][j - 1] = '.';
// 			}
// 		}
// }

// vector<string> bomberMan(int n, vector<string> grid){
// 	vector<string> initial_grid{grid}, full_of_bombs{grid}, pattern_a;

// 	fillGridWithBombs(grid);
// 	fillGridWithBombs(full_of_bombs);

// 	detonate(grid, initial_grid);

// 	pattern_a = grid;

// 	fillGridWithBombs(grid);
// 	detonate(grid, pattern_a);

// 	int k{n % 4};

// 	if (n == 1)
// 		return initial_grid;

// 	if (k == 0 || k == 2)
// 		return full_of_bombs;
// 	else if (k == 3)
// 		return pattern_a;

// 	return grid;
// }

// int main(){

//     return 0;
// }





#include <iostream>

using namespace std;

int A[202][202], B[202][202];
char S[202][202];

int main() {
    
    int R, C, N,i,j;

    cin >> R >> C >> N;
    
    for( i=1; i<=R; i++)
        for( j=1; j<=C; j++) cin >> S[i][j];
    
    cout << endl;
    cout << endl;
    
    if(N==1){
        for( i=1; i<=R; i++){
            for( j=1; j<=C; j++) cout << S[i][j];
            cout << endl;
        }
        return 0;
    }
        
    if(N%2==0){
        for( i=1; i<=R; i++){
            for( j=1; j<=C; j++) cout << 'O';
            cout << endl;
        }
        return 0;
    }
    
    for( i=1; i<=R; i++){
            for( j=1; j<=C; j++)
                if(S[i][j]=='O')
                    A[i][j] = A[i+1][j] = A[i][j+1] = A[i-1][j] = A[i][j-1] = 1;
        }
    
    for( i=1; i<=R; i++){
            for( j=1; j<=C; j++)
                if(A[i][j]==0)
                    B[i][j] = B[i+1][j] = B[i][j+1] = B[i-1][j] = B[i][j-1] = 1;
        }
    
    if(N%4==3) {   // 3 7 11
        for( i=1; i<=R; i++){
            for( j=1; j<=C; j++){
                if(A[i][j])
                    cout << '.';
                else
                    cout << "O";
            }
            cout << endl;
        }
    }
    
    if(N%4==1) { // 5 9 13 ...
        for( i=1; i<=R; i++){
            for( j=1; j<=C; j++){
                if(B[i][j])
                    cout << '.';
                else
                    cout << "O";
            }
            cout << endl;
        }
    }
    
    return 0;
}