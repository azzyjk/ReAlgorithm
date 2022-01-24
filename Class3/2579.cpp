#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int count, floor[310] = {0, }, remain[310] = {0, }, notRemain[310] = {0, };
    cin >> count;

    for (int i = 0; i < count; i++){
        cin >> floor[i];
    }

    remain[0] = floor[0];
    remain[1] = floor[1];

    for (int i = 0; i < count - 1; i++){
        notRemain[i + 1] = remain[i] + floor[i + 1];
        if (i + 2 < count && remain[i] + floor[i + 2] > remain[i + 2]) remain[i + 2] = remain[i] + floor[i + 2];
        if (i + 2 < count && notRemain[i] + floor[i + 2] > remain[i + 2]) remain[i + 2] = notRemain[i] + floor[i + 2];
    }

    if (remain[count - 1] > notRemain[count - 1]){
        cout << remain[count - 1] << "\n";
    }
    else{
        cout << notRemain[count - 1] << "\n";
    }
    return 0;
}