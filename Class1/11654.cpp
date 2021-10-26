#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char word;

    cin >> word;
    
    cout << static_cast<int> (word) << "\n";
    
    return 0;
}