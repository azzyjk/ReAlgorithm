#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int A, B;
    while(true){
        cin >> A >> B;
        if(A == 0 && B == 0) return 0;
        cout << A + B << "\n";
    }
    
    return 0;
}