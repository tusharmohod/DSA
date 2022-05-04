void KMP(string pat, string txt) {
    int m = pat.size();
    int n = txt.size();

    int lps[m];

    LongestProperPrefxSuffix(pat, m, lps);
  
    int i = 0;
    int j = 0;
    while (i < n) {
        if (txt[i] == pat[j]) {
            i++;
            j++;
        }
        if (j == m) {
            cout << i - j << " " << i << endl;
            j = lps[j - 1];
        }
        else if (i < n && txt[i] != pat[j]) {
            if (j != 0) {
                j = lps[j - 1];
            }
            else {
                i = i + 1;
            }
        }
    }
}