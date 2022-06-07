bool isLeap(int year) {
    return (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
}
int dayOfYear(string date) {
    int year = stoi(date.substr(0, 4));
    int month = stoi(date.substr(5,2));
    int day = stoi(date.substr(8,2));
    
    int dom[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int days = 0;
    
    for(int i = 1; i < month; i++) {
        if(i == 2) {
            days += (dom[i] + isLeap(year));
        }
        else {
            days += dom[i];
        }
    }
    days += day;
    return days;
}