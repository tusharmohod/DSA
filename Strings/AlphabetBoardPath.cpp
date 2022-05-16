string getMovement(int curr, int target) {
    int dx = target % 5 - curr % 5;
    int dy = target / 5 - curr / 5;
    
    char cx = (dx > 0) ? 'R' : 'L';
    char cy = (dy > 0) ? 'D' : 'U';
    
    if(curr == 'z' - 'a') {
        return string(abs(dy), cy) + string(abs(dx), cx);
    }
    else {
        return string(abs(dx), cx) + string(abs(dy), cy);
    }
}

string alphabetBoardPath(string target) {
    string res = "";
    int curr = 0, trg = 0;
    for(int i = 0; i < target.size(); i++) {
        trg = target[i] - 'a';
        if(curr != trg) {
            res += getMovement(curr, trg);
        }
        res += '!';
        curr = target[i] - 'a';
    }
    return res;
}