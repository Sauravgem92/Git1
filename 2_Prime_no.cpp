int isPrime(int A) {
	int upperLimit = (int)(sqrt(A));
	int i;
   if(A<2){
   return 0;
   }
	for (i = 2; i <= upperLimit; i++) {
		if ( A % i == 0) return 0;
		
	}
	return 1;

   /*
   if(A<=1){
    return false;
}

if(A==3||A==2){
    return true;
}
if(A%3==0 || A%2==0){
    return false;
}
for(int i=5;i*i<=A;i=i+6){
    if(A%i==0 || A%(i+2)==0){
        return false;
    }
}
return true;
*/
}