int countTotalDigitsInANumber(int n) {
   if(n == 0) {
	   return 1;
   }
   if(n/10 == 0) {
	   return 1;
   }
   return 1 + countTotalDigitsInANumber(n/10);
}