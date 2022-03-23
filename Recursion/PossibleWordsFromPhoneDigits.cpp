void myFunc(vector<string>& r, int *a, string *p, int n, int i, string out) {
	if(i == n) {
		r.push_back(out);
		return;
	}
	
	myFunc(r, a, p, n, i+1, out+p[a[i]][0]);
	myFunc(r, a, p, n, i+1, out+p[a[i]][1]);
	myFunc(r, a, p, n, i+1, out+p[a[i]][2]);
	if(p[a[i]].length() == 4) {
		myFunc(r, a, p, n, i+1, out+p[a[i]][3]);
	}
}

vector<string> possibleWordsFromPhoneDigits(int a[], int N) {
	vector<string> r;
	string p[10];
	p[0]="";
	p[1]="";
	p[2]="abc";
	p[3]="def";
	p[4]="ghi";
	p[5]="jkl";
	p[6]="mno";
	p[7]="pqrs";
	p[8]="tuv";
	p[9]="wxyz";
	myFunc(r, a, p, N, 0, "");
	return r;
}