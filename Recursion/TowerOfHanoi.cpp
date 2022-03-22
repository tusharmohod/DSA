long long towerOfHanoi(int N, int from, int to, int aux) {
	int res = 0;
	if(N==1) {
		cout<<"move disk 1 from rod "<<from<<" to rod "<<to<<endl;
		return 1;
	}
	int m1 = towerOfHanoi(N-1, from, aux, to);
	cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
	int m2 = towerOfHanoi(N-1, aux, to, from);
	return 1+m1+m2;
}