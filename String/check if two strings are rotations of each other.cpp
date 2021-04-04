#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
public:
    /*  Function to check if two strings are rotations of each other
    *   s1, s2: are the input strings
    */
    bool areRotations(string s1, string s2)
    {
        int n1 = s1.length(), n2 = s2.length();
        if (n1 != n2) return 0;
        s1 += s1;
        if (s1.find(s2) != string::npos)
            return 1;
        else
            return 0;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1;
        string s2;
        cin >> s1 >> s2;
        Solution obj;
        cout << obj.areRotations(s1, s2) << endl;

    }
    return 0;
}
// } Driver Code Ends