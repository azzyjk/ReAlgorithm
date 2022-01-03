#include<iostream>
#include<cmath>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num1, num2, max = 1, min = 1, tmp;
    cin >> num1 >> num2;
    if (num1 > num2){
        tmp = num2;
        num2 = num1;
        num1 = tmp;
    }
    
    for (int i = 2; i <= num1; i++){
        while ((num1 % i == 0) && (num2 % i == 0)){
            max *= i;
            num1 /= i;
            num2 /= i;
        }
    }

    cout << max << "\n";
    cout << max * num1 * num2 << "\n";
    return 0;
}