void reverse(string &s) {
	int i = 0, j = s.size() - 1;
	while(i < j) {
		char c = s[i];
		s[i] = s[j];
		s[j] = c;
		i++;
		j--;
	}
}

bool isValidCharacter(char c) {
    return (c >= 'a' && c <= 'z') ||
           (c >= 'A' && c <= 'Z') ||
           (c >= '0' && c <= '9'); 
}

bool isLeftToRight(char &a, char &b) {
    return (a == '+' && b == '+') ||
           (a == '-' && b == '-') ||
           (a == '*' && b == '*') ||
           (a == '/' && b == '/');
}

string infixToPrefix(string st) {
	string res = "";
	stack<char> s;
	unordered_map<char, int> mp;
	mp['+'] = 1;
	mp['-'] = 1;
	mp['*'] = 2;
	mp['/'] = 2;
	mp['^'] = 3;

	for(int i = st.size() - 1; i >= 0; i--) {
		if(isValidCharacter(st[i])) {
			res += st[i];
		}
		else if(s.empty() || st[i] == ')') {
			s.push(st[i]);
		}
		else {
			if(mp[st[i]] > mp[s.top()]) {
				s.push(st[i]);
			}
			else {
				while(!s.empty() && mp[st[i]] <= mp[s.top()]) {
					char c = s.top();
					if(mp[st[i]] == mp[s.top()] && (mp[st[i]] == 1 || mp[st[i]] == 2)) {
					    break;
					}
					s.pop();
					if(c == ')') {
						break;
					}
					res += c;
				}
				if(st[i] != '(') {
					s.push(st[i]);
				}
			}
		}
	}
	while(!s.empty()) {
		res += s.top();
		s.pop();
	}
	reverse(res);
	return res;
}