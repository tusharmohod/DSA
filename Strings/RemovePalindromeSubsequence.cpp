int removePalindromeSubsequence(string s) {
    int l = 0;
    int r = s.size() - 1;
    bool isPalindrome = true;
    while(l < r) {
        if(s[l++] != s[r--]) {
            isPalindrome = false;
            break;
        }
    }
    return 2 - (isPalindrome);
}