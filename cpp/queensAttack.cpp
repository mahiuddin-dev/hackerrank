#include <iostream>

using namespace std;

int main(){
    int n,k,i,rowOfQueen, columOfQueen, left, right, up, down, leftUp, leftDown,rightUp, rightDown, RowObs, ColObs;

    cin >> n >> k >> rowOfQueen >> columOfQueen;

    left = columOfQueen - 1;
    right = n - columOfQueen;
    up = n-rowOfQueen;
    down = rowOfQueen - 1;

    rightUp = (right < up) ? right: up;
    rightDown = (right < down) ? right: down;
    leftUp = (left < up) ? left: up;
    leftDown = (left < down) ? left: down;

    for( i = 0; i < k; i++){
        cin >> RowObs >> ColObs;

        if(RowObs == rowOfQueen){
            if(ColObs > columOfQueen){
                right = min(right,ColObs-columOfQueen-1);
            }else{
                left = min(left, columOfQueen - ColObs - 1);
            } 
        }

        else if(ColObs == columOfQueen){
             if(RowObs > rowOfQueen){
                up = min(up,RowObs-rowOfQueen-1);
            }else{
                down = min(down, rowOfQueen - RowObs - 1);
            }            
        }

        else if(abs(columOfQueen-ColObs) == abs(rowOfQueen-RowObs)){

            if( RowObs > rowOfQueen){
                if(ColObs < columOfQueen){
                    leftUp = min(leftUp,RowObs-rowOfQueen-1);
                }else if(ColObs > columOfQueen){
                    rightUp = min(rightUp, ColObs - columOfQueen - 1);
                }
            }

            else if(RowObs < rowOfQueen){
                 if(ColObs < columOfQueen){
                    leftDown = min(leftDown,columOfQueen-ColObs-1);
                }else{
                    rightDown = min(rightDown, ColObs - columOfQueen - 1);
                }               
            }
        }

    }

    cout<< rightUp+rightDown+leftUp+leftDown+left+right+up+down <<endl;

    return 0;
}