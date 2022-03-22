int josephus(int n, int k) {
   if(n == 1) {
	   return 1;
   }
   int y = ((josephus(n-1, k) + k - 1) % n) + 1;
   return y;
}