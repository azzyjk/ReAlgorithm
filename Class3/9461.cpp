#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, tmp;
    long long longlongArr[110] = {0, 1, 1, 1, 2, 2, 3, 4, 5, 7, 9};
    cin >> T;

    for (int i = 11; i <= 100; i++){
        longlongArr[i] = longlongArr[i - 1] + longlongArr[i - 5];
    }

    for (int i = 0; i < T; i++){
        cin >> tmp;
        cout << longlongArr[tmp] << "\n";
    }

    return 0;
}