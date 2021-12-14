#include<iostream>
#include<algorithm>
#define ARRAY_SIZE 26
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string S;
    int arr[ARRAY_SIZE];
    
    cin >> S;

    fill(arr, arr + ARRAY_SIZE, -1);

    for (int i = 0; i < S.length(); i++){
        char c = S[i];
        if (arr[c-'a'] == -1) arr[c-'a'] = i;
    }

    for (auto i : arr) cout << i << " ";
    return 0;
}