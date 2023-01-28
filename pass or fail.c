#include <stdio.h>

int main(){
	int numerator, denominator;
	printf ("Numerator:");
	scanf ( "%d", &numerator);
	printf ("Denominator:");
	scanf ( "%d", &denominator); 
	printf ("Value: %f\n",numerator/denominator);
	return 0;
}