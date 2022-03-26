uint32_t reverseBits(uint32_t n) {
    uint32_t r=0,p=0;
    bool flag=true;
    for(int i=31;i>=0;i--) {
        if(flag) {
            if((n&(1<<i))!=0) {
                r|=(1<<p);
            }
            p++;
        }
        else {
            if((n&(1<<i))!=0) {
                flag=true;
                r|=(1<<p);
                p++;
            }
        }
    }
    return r;
}