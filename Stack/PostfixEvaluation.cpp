bool isValidCharacter(char c) {
    return (c >= '0' && c <= '9'); 
}

int postfixEvaluation(string st) {
	stack<int> s;
	int ans;
	for(int i = 0; i < st.size(); i++) {
		if(st[i] == ' ') {
			continue;
		}
		else if(isValidCharacter(st[i])) {
			int num = 0;
			while(isValidCharacter(st[i])) {
				num = (num * 10) + (st[i] - '0');
				i++;
			}
			i--;
			s.push(num);
		}
		else {
			int op2 = s.top();
			s.pop();
			int op1 = s.top();
			s.pop();
			switch(st[i]) {
				case '+': ans = op1 + op2; break;
				case '-': ans = op1 - op2; break;
				case '*': ans = op1 * op2; break;
				case '/': ans = op1 / op2; break;
				case '^': ans = pow(op1, op2); break; 
			}
			s.push(ans);
		}
	}
	return s.top();
}