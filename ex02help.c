int twophase(int n){
	__VERIFIER_assume(n>=0);
	int x = 0;
	int y = 0;
	__VERIFIER_assume(x >= -1);
	__VERIFIER_assume(y >= -1);
	__VERIFIER_assume(x-y >= 0);

    int c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16;
    c1 = 0;
    c2 = 0;
    c3 = 0;
    c4 = -2147483647;
    c5 = 0;
    c6 = 0;
    c7 = 0;
    c8 = 1;
    c9 = -2147483648;
    c10 = 0;
    c11 = 0;
    c12 = -2147483647;
    c13 = 0;
    c14 = 0;
    c15 = 0;
    c16 = 1;
    
	while(y >= 0){
		__VERIFIER_assume(n>=0);
		__VERIFIER_assume(x >= 0);
		__VERIFIER_assume(y >= 0);
		__VERIFIER_assume(x-y >= 0);
		if(x <= n) y++;
		else y--;

		x++;

        __VERIFIER_assume( ((c1*x + c2*y + c3*n <= c4) && (c5*x + c6*y + c7*n <= c8)) || ((c9*x + c10*y + c11*n <= c12) && (c13*x + c14*y + c15*n <= c16)) );
	}
	assert(x == (2*n+2));
}

int main(){
	int n = __VERIFIER_nondet_int();
	twophase(n);
	return 0;
}
