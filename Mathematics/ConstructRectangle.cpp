vector<int> constructRectangle(int area) {
    int diff = area;
    int a = 1;
    int b = 1;
    for(int i = 1; (i * i) <= area; i++) {
        int n1 = area % i;
        if(n1 == 0 && diff > abs(i - (area / i))) {
            diff = abs(i - (area / i));
            a = i;
            b = area / i;
        }
    }
    return (a > b) ? vector<int>{a,b} : vector<int>{b,a};
}