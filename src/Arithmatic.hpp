typedef long long LL;

// return (a ** p) % m
LL fastpow(LL a, LL p, LL m) {
	if(p == 0)
		return 1 % m;
	LL t = fastpow(a, p >> 1, m);
	t = t * t % m;
	if(p & 1)
		t = t * a % m;
	return t;
}
