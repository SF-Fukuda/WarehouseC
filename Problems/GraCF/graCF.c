int graCF(int a,int b){

	int tmp;
	
	while(b){
		tmp = b;
		b = a % b;
		a = tmp;
	}

	return tmp; 
}