//ITERATIVE SOL
class Solution {
public:
    int isPlaindrome(string s)
    {
        int l = 0, r = s.length() - 1;
        while (l < r) {
            if (s[l++] != s[r--])
                return 0;
        }
        return 1;
    }

};


//RECURSIVE SOL
bool isPalRec(char str[], int l, int r)
{
    // base case (for both even and odd length)
    if (l >= r)
        return true;

    // If first and last characters do not match
    if (str[l] != str[r])
        return false;

    return isPalRec(str, l++, r--);
}