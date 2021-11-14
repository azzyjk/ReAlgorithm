#include<iostream>

using namespace std;

int reverseNum(int num){
    int first = num / 100;
    num = num % 100;
    int second = num / 10;
    num = num % 10;
    int res = num * 100;
    res += second * 10;
    res += first;
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int firstNum, secondNum;

    cin >> firstNum >> secondNum;

    firstNum = reverseNum(firstNum);
    secondNum = reverseNum(secondNum);
    
    if(firstNum > secondNum) cout << firstNum << "\n";
    else cout << secondNum << "\n";
    return 0;
}