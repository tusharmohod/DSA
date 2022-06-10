bool isLeap(int y) {
    if(y % 4 == 0) {
        if(y % 100 == 0) {
            if(y % 400 == 0) {
                return true;
            }
            else {
                return false;
            }
        }
        else {
            return true;
        }
    }
    else {
        return false;
    }
}
string dayOfTheWeek(int day, int month, int year) {
    int dom[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string d[7] = {"Thursday", "Friday", "Saturday","Sunday", "Monday", "Tuesday", "Wednesday"};
    int days = 0;
    for(int i = 1971; i < year; i++) {
        days += (365 + isLeap(i));
    }
    for(int i = 1; i < month; i++) {
        days += dom[i];
    }
    if(month >= 3 && isLeap(year)) days++;
    days += day;
    return d[days % 7];
}