#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    int half;
    bool isSame = true;

    while (true){
        isSame = true;
        
        cin >> str;

        if (str == "0") break;
        if (str.length() % 2 == 0) half = str.length() / 2;
        else half = (str.length() / 2) + 1;
        for (int i = 0; i < half; i++){
            if (str[i] != str[str.length() - i - 1]){
                isSame = false;
                break;
            }
        }

        if (isSame) cout << "yes\n";
        else cout << "no\n";

        
    }
    return 0;
}