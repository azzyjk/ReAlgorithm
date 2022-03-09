#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    long long fibonacci[100] = {0, 1, 1, 2, 3, 5, 8};
    cin >> n;

    for (int i = 5; i <=n; i++){
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }

    cout << fibonacci[n] << "\n";

    return 0;
}