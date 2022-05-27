int circularTour(petrolPump p[],int n) {
   int bal = 0;
   int start = 0;
   int shortOf = 0;
   for(int i = 0; i < n; i++) {
       bal += (p[i].petrol - p[i].distance);
       if(bal < 0) {
           shortOf += bal;
           start = i + 1;
           bal = 0;
       }
   }
   return ((bal + shortOf) >= 0) ? start : -1;
}