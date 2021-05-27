double raizCuadrada(int n){
	double r = n;
	double t = 0;
	while(t != r){
		t = r;
		r = (n/r + r)/2;
	}
	return r;
}

int potencia(int b, int e){
	if(b == 1) return 1;
	if(b == 0) return 0;
	if(e == 0) return 1;
	return b * potencia(b, e - 1);
}
