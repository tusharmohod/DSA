bool p = false;
bool m = false;
bool d = false;

bool isDigit(char c) {
    return (c >= '0' && c <= '9');
}

bool isValid(char c) {
    if(c == '+' || c == '-' || c == '.') {
        if(!p && !m && !d) {
            if(c == '+')
                p = true;
            if(c == '-')
                m = true;
            if(c == '.')
                d = true;
            return true;
        }   
        return false;
    }
    return false;
}

int customStringToInteger(string s) {
    long mx = INT_MAX;
    long mn = INT_MIN;
    int n = s.size();
    long res = 0;
    int sign = 1;
    for(int i = 0; i < n; i++) {
        if(s[i] == '.') {
            break;
        }
        else if(isDigit(s[i])) {
            if(res * 10 > INT_MAX) {
                res = res * 10;
                break;
            }
            res = (res * 10) + (s[i] - '0');
        }
        else if(s[i] == ' ') {
            if(p || m || d) {
                break;
            }
            if(i > 0 && s[i-1] != ' ') {
                break;
            }
        }
        else if(isValid(s[i])) {
            if(i > 0 && s[i] == '-') {
                if(s[i - 1] == ' ') {
                    sign = -1;
                }
                else {
                    break;
                }
            }
            else if(s[i] == '-') {
                sign = -1;
            }
            
            if(i > 0 && s[i] == '+') {
                if(s[i - 1] == ' ') {
                    sign = 1;
                }
                else {
                    break;
                }
            }
            else if(s[i] == '+') {
                sign = 1;
            }
        }
        else {
            break;
        }
    }
    if(res == 0) {
        return 0;
    }
    if(res > 0) {
        if(sign == -1) {
            if(res >= mx + 1) {
                return mn;
            }
            else {
                return (sign * res);
            }
        }
        else {
            if(res >= mx) {
                return mx;
            }
            else {
                return res;
            }
        }
    }
    return res;
}