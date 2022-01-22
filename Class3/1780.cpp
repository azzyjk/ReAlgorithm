#include<iostream>

using namespace std;

int intArr[2200][2200], resZero = 0, resOne = 0, resMinus = 0;

bool isAllSame(int startY, int startX, int range){
    int nowNum = intArr[startY][startX];
    for (int y = startY; y < startY + range; y++){
        for (int x = startX; x < startX + range; x++){
            if (nowNum != intArr[y][x]){
                return false;
            }
        }
    }
    return true;
}

void checkPaper(int startY, int startX, int N){
    int now = N / 3;
    bool isSame = true;
    if (isAllSame(startY, startX, N) || N == 1){
        if (intArr[startY][startX] == -1) resMinus++;
        else if (intArr[startY][startX] == 0) resZero++;
        else resOne++;
    }
    else{
        for (int i = startY; i < startY + N; i += now){
            for (int j = startX; j < startX + N; j += now){
                checkPaper(i, j, now);
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

    if (N == 1){
        if (intArr[0][0] == -1) resMinus++;
        else if (intArr[0][0] == 0) resZero++;
        else resOne++;
    }
    else{
        checkPaper(0, 0, N);
    }
    
    cout << resMinus << "\n" << resZero << "\n" << resOne << "\n";
    return 0;
}