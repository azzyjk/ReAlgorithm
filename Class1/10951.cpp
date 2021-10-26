#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int A, B;
    // cin >> 값 시  operator에 의해 자동으로 bool이 됨.
    // 그냥 사용하려면 static_cast<bool>(cin >> 값) 으로 사용
    while(cin >> A >> B){
        cout << A + B << "\n";
    }
    return 0;
}