#include <bits/stdc++.h>
using namespace std;

#define CHAR 256

int factorial(int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int lexRank(string &str) {
    int count[CHAR] = {0}, res = 1;
    int n = str.length();
    int fact = factorial(n);

    //freq of characters in str
    for (int i = 0; i < n; i++)
        count[str[i]]++;

    //cumulative freq (no. of elemts smaller than and equal to curr elemt, in whole array)
    for (int i = 1; i < CHAR; i++)
        count[i] += count[i - 1];

    //successively adding product of fact and count of elemts smaller than curr elemt
    for (int i = 0; i < n - 1; i++) {
        fact = fact / (n - i);
        res += count[str[i] - 1] * fact;
        //decrementing count of elemts which are on LHS of curr elemt
        for (int j = str[i]; j < CHAR; j++)
            count[j]--;
    }
    return res;
}

int main() {
    string str;
    cin >> str;
    cout << lexRank(str);
    return 0;
}