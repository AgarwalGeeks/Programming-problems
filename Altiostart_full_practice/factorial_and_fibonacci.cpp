int factorial(int number)
{
	
	if(number==1)
		return 1;
	
	return number* factorial(number-1);
	
	
	
}

int fibonacci(int number)
{
	if(number<=1)
		return number;
	
	return fibonacci(n-1) + fibonacci(n-2);
}
