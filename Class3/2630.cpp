#include<iostream>

using namespace std;

int intArr[128][128], white, blue;

bool isAllSame(int startY, int startX, int range){
    int num = intArr[startY][startX];
    for (int y = startY; y < startY + range; y++){
        for (int x = startX; x < startX + range; x++){
            if (num != intArr[y][x]) return false;
        }
    }
    return true;
}

void checkPaper(int startY, int startX, int range){
    int newRange = range / 2;
    if (isAllSame(startY, startX, range)){
        if (intArr[startY][startX] == 0) white++;
        else blue++;
    }
    else{
        for (int y = startY; y < startY + range; y += newRange){
            for (int x = startX; x < startX + range; x += newRange){
                checkPaper(y, x, newRange);
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cin >> intArr[i][j];
        }
    }

    checkPaper(0, 0, N);

    cout << white << "\n" << blue << "\n";
    return 0;
}