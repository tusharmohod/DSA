string capitalizeTitle(string title) {
    int s = 0;
    int e = 0;
    int len = 0;;
    while(e < title.size()) {
        if(title[e] == ' ') {
            len = e - s;
            if(len > 2) {
                title[s] = toupper(title[s]);
            }
            s = e + 1;
        }
        else if(title[e] >= 'A' && title[e] <= 'Z') {
            title[e] = tolower(title[e]);
        }
        e++;
    }
    len = e - s;
    if(len > 2) {
        title[s] = toupper(title[s]);
    }
    return title;
}