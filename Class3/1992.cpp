#include<iostream>

using namespace std;

int intArr[64][64];
string res;

bool isSame(int y, int x, int size){
    int nowNum = intArr[y][x];
    for (int i = y; i < y + size; i++){
        for (int j = x; j < x + size; j++){
            if (intArr[i][j] != nowNum) return false;
        }
    }
    return true;
}

void check(int y, int x, int size){
    if (isSame(y, x, size)){
        res += to_string(intArr[y][x]);
    }
    else{
        res += "\(";
        check(y, x, size / 2);
        check(y, x + size / 2, size / 2);
        check(y + size / 2, x, size / 2);
        check(y + size / 2, x + size / 2, size / 2);
        res += ")";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    int N, j;
    cin >> N;
    
    for (int i = 0; i < N; i++){
        cin >> str;
        j = 0;
        for (auto k : str){
            intArr[i][j] = k - '0';
            j++;
        }
    }
    check(0, 0, N);

    cout << res << "\n";
    return 0;
}