// the problem that solving the aY + b + c = 0 equation.


#include <stdio.h>
#include <string.h>

float solve(float a, float b, float c) // takes 3 inputs and returns value of Y.
{
	float Y;
	// if a = 0 we can't find the value of Y. 
	if (a == 0) { return 0; }
	else 
	{	
		a *= -1;
		Y = (b+c) / a;
		return Y;
	}
}

int main()
{

float a,b,c,Y;
printf(" aY + b + c = 0 \nInputs :\n");
scanf("%f\n%f\n%f",&a,&b,&c);
Y = solve(a,b,c);
if (Y == 0) { printf("if a = 0 we can't find the value of Y.");}
else{printf("\n Y = %f", Y);}
return 0;


}
