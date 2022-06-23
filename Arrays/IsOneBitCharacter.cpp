bool isOneBitCharacter(vector<int>& bits) {
    int n = bits.size();
    int c = 0;
    for(int i = n - 2; i >= 0; i--) {
        if(bits[i] == 0) {
            break;
        }
        c++;
    }
    return !(c & 1);
}