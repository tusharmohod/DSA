vector<int> quadraticRoots(int a, int b, int c) {
	vector<int> out;
	double D = b*b-4*a*c;
	if(D>0) {
		int x1 = floor((-b+sqrt(D))/(2*a));
		int x2 = floor((-b-sqrt(D))/(2*a));
		if(x1 > x2) {
			out.push_back(x1);
			out.push_back(x2);
		}
		else {
			out.push_back(x2);
			out.push_back(x1);
		}
	}
	else if (D==0) {
		int x1 = -b/(2*a);
		int x2 = -b/(2*a);
		if(x1 > x2) {
			out.push_back(x1);
			out.push_back(x2);
		}
		else {
			out.push_back(x2);
			out.push_back(x1);
		}
	}
	else {
		out.push_back(-1);
	}
	return out;
}