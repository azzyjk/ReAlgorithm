#include<iostream>
#include<stack>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    stack <char> s;
    bool isWrong = false;

    while (true){
        isWrong = false;
        getline(cin, str);
        if (str == ".") break;
        for (auto i : str){
            if (i == '(' || i == '[' ) s.push(i);
            else if (i == ')' || i == ']') {
                if (!s.empty() && s.top() == '(' && i == ')') s.pop();
                else if (!s.empty() && s.top() == '[' && i == ']') s.pop();
                else {
                    isWrong = true;
                    break;
                }
            }
        }

        if (s.empty() == true && isWrong == false) cout << "yes\n";
        else cout << "no\n";
        while (!s.empty()){
            s.pop();
        }
    }
    return 0;
}