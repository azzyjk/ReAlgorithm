#include<iostream>
#include<vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, N, zero, one, answer;
    vector < pair <int, int> > fibonacci(41);
    cin >> T;
    
    fibonacci.at(0) = make_pair(1, 0);
    fibonacci.at(1) = make_pair(0, 1);
    
    for (int i = 2; i < 41; i++){
        zero = fibonacci.at(i - 1).first + fibonacci.at(i - 2).first;
        one = fibonacci.at(i - 1).second + fibonacci.at(i - 2).second;
        fibonacci.at(i) = make_pair(zero, one);
    }

    for (int i = 0; i < T; i++){
        cin >> answer;
        cout << fibonacci.at(answer).first << " " << fibonacci.at(answer).second << "\n";
    } 
    
    return 0;
}