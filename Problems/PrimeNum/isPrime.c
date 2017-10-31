int isPrime(int a){
	
	int ans = 1;

	for(int i = 2;i < a - 1;i++){
		if(!(ans = a % i)) break; 
	}

	return ans;
}