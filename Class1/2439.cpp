#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;

    cin >> N;

    for(int i=0; i<N; i++){
        for(int j=0; j<N-i-1; j++) cout << " ";
        for(int j=0; j<=i; j++) cout << "*";
        cout << "\n";
    }
    return 0;
}