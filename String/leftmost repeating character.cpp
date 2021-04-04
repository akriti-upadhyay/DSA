//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
public:
    //User function Template for C++

    //Back-end complete function Template for C++

    //Return the index of the character or return -1
    int repeatedCharacter (string s)
    {
        bool count[256];
        int res = -1;
        fill(count, count + 256, false);
        for (int i = s.length(); i >= 0; i--) {
            if (count[s[i]] == false)
                count[s[i]] = true;
            else
                res = i;
        }
        return res;
    }
};

// { Driver Code Starts.


int main() {
    int T;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;
        Solution obj;
        int index = obj.repeatedCharacter(s);
        if (index == -1)
            cout << -1 << endl;
        else
            cout << s[index] << endl;
    }
    return 0;
}
// } Driver Code Ends