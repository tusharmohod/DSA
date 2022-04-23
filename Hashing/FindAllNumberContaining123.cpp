void rec(long i) {
    if(i > 1000000) {
        return;
    }
    mp[i] = 1;
    rec(i * 10 + 1);
    rec(i * 10 + 2);
    rec(i * 10 + 3);
}

void findAllNumberContaining123() {
    rec(1);
    rec(2);
    rec(3);
}