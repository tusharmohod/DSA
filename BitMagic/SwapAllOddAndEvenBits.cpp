unsigned int swapAllOddAndEvenBits(unsigned int n) {
	unsigned int o=0x55555555, e=0xaaaaaaaa;
	unsigned int op=o&n, ep=e&n;
	return (op<<1|ep>>1);
}