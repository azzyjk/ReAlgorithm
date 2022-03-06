#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int A, B, C;
    cin >> A >> B >> C;

    B += C;
    A += B / 60;
    B %= 60;

    if (A >= 24){
        A -= 24;
    }

    cout << A << " " << B << "\n";
    return 0;
}