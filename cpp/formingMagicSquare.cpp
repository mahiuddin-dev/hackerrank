#include <iostream>

using namespace std;

int sum;

 int magic1(int are[3][3]){
    // int sum;

    sum = 
        abs(8-are[0][0])+abs(3-are[0][1])+abs(4-are[0][2])+
        abs(1-are[1][0])+abs(5-are[1][1])+abs(9-are[1][2])+
        abs(6-are[2][0])+abs(7-are[2][1])+abs(2-are[2][2]);

    return sum;
}
 int magic2(int are[3][3]){
    // int sum;

    sum = 
        abs(6-are[0][0])+abs(1-are[0][1])+abs(8-are[0][2])+
        abs(7-are[1][0])+abs(5-are[1][1])+abs(3-are[1][2])+
        abs(2-are[2][0])+abs(9-are[2][1])+abs(4-are[2][2]);

    return sum;
}
int magic3(int are[3][3]){
    // int sum;

    sum = 
        abs(2-are[0][0])+abs(7-are[0][1])+abs(6-are[0][2])+
        abs(9-are[1][0])+abs(5-are[1][1])+abs(1-are[1][2])+
        abs(4-are[2][0])+abs(3-are[2][1])+abs(8-are[2][2]);

    return sum;
}
int magic4(int are[3][3]){
    // int sum;

    sum = 
        abs(4-are[0][0])+abs(9-are[0][1])+abs(2-are[0][2])+
        abs(3-are[1][0])+abs(5-are[1][1])+abs(7-are[1][2])+
        abs(8-are[2][0])+abs(1-are[2][1])+abs(6-are[2][2]);

    return sum;
}
int magic5(int are[3][3]){
    // int sum;

    sum = 
        abs(8-are[0][0])+abs(1-are[0][1])+abs(6-are[0][2])+
        abs(3-are[1][0])+abs(5-are[1][1])+abs(7-are[1][2])+
        abs(4-are[2][0])+abs(9-are[2][1])+abs(2-are[2][2]);

    return sum;
}
int magic6(int are[3][3]){
    // int sum;
    sum = 
        abs(6-are[0][0])+abs(7-are[0][1])+abs(2-are[0][2])+
        abs(1-are[1][0])+abs(5-are[1][1])+abs(9-are[1][2])+
        abs(8-are[2][0])+abs(3-are[2][1])+abs(4-are[2][2]);

    return sum;
}
int magic7(int are[3][3]){
    // int sum;

    sum = 
        abs(2-are[0][0])+abs(9-are[0][1])+abs(4-are[0][2])+
        abs(7-are[1][0])+abs(5-are[1][1])+abs(3-are[1][2])+
        abs(6-are[2][0])+abs(1-are[2][1])+abs(8-are[2][2]);

    return sum;
}
int magic8(int are[3][3]){
    // int sum;

    sum = 
        abs(4-are[0][0])+abs(3-are[0][1])+abs(8-are[0][2])+
        abs(9-are[1][0])+abs(5-are[1][1])+abs(1-are[1][2])+
        abs(2-are[2][0])+abs(7-are[2][1])+abs(6-are[2][2]);

    return sum;
}

int main(){

    int are[3][3],i,j,newMagic[8];

    for(i=0; i < 3; i++){
        for(j=0; j < 3; j++){
            cin >> are[i][j];
        }
    }

    newMagic[0] = magic1(are);
    newMagic[1] = magic2(are);
    newMagic[2] = magic3(are);
    newMagic[3] = magic4(are);
    newMagic[4] = magic5(are);
    newMagic[5] = magic6(are);
    newMagic[6] = magic7(are);
    newMagic[7] = magic8(are);

    short int ans = newMagic[0];

    for(i=1; i < 8; i++){
        if(newMagic[i] < ans){
            ans = newMagic[i];
        }
    }

    cout<< ans <<endl;
    return 0;
}
