bool isValidCharacter(char c) {
    return (c >= '0' && c <= '9'); 
}

int prefixEvaluation(string st) {
	stack<int> s;
	int ans;
	for(int i = st.size() - 1; i >= 0; i--) {
		if(st[i] == ' ') {
			continue;
		}
		else if(isValidCharacter(st[i])) {
			string num = "";
			while(isValidCharacter(st[i])) {
				num = st[i] + num;
				i--;
			}
			i++;
			int num1 = stoi(num);
			s.push(num1);
		}
		else {
			int op1 = s.top();
			s.pop();
			int op2 = s.top();
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