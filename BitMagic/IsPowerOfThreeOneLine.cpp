bool isPowerOfThreeOneLine(int n) {
	//x = 3^(log(INT_MAX)/log(3)) = 3^19 = 1162261467
	return n > 0 && 1162261467 % n == 0;
}