/*

	Solution of Question 1 and Question 2.

*/


#include <stdio.h>
#include <string.h>

int is_prime(int n)
{
    if (n <= 1) {return 0;} 	
    for (int i = 2; i <n ; i++) { 
  
        if (n % i == 0) { 
            return 0;
        } 
    } 

	return 1;
  		

}

int is_twin_prime(int n)
{
	int counter = 1;

	while (counter <= 2)
	{
		n+=1;
		if (is_prime(n) ==1)
		{

			printf("%d ",n);
			counter++;

		} 	


	}





}

int main()
{
	int number = 6;
	printf("%d\n\n", is_prime(number));
	is_twin_prime(number);
	printf("\n");


}
