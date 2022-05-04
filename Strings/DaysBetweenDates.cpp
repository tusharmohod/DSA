bool isLeap(int year) {
    return (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
}

int daysFrom1900(int d, int m, int y) {
    int dom[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int totalDays = 0;
    for(int i = 1900; i < y; i++) {
        totalDays += (365 + isLeap(i));
    }
    
    for(int i = 1; i < m; i++) {
        totalDays += dom[i - 1];
    }
    if(m > 2 && isLeap(y)) {
        totalDays++;
    }
    cout << totalDays << endl;
    totalDays += d;
    
    return totalDays;
}

int daysBetweenDates(string &date1, string &date2) {
    int y1 = stoi(date1.substr(0, 4));
    int m1 = stoi(date1.substr(5, 2));
    int d1 = stoi(date1.substr(8, 2));
    
    int y2 = stoi(date2.substr(0, 4));
    int m2 = stoi(date2.substr(5, 2));
    int d2 = stoi(date2.substr(8, 2));
    
    int n1 = daysFrom1900(d1, m1, y1);
    int n2 = daysFrom1900(d2, m2, y2);
    
    return abs(n1 - n2);
}