/*

	Solution of Question 3 and Question 4.

*/


#include <stdio.h>
#include <string.h>

int is_perfect(int n)
{
	int sum = 0;
    	for (int i = 1; i <n ; i++) 
    { 
  
        if (n % i == 0) { 
            sum+=i;
        } 
    } 
	if (sum == n){ return 1; }
	

	return 0;

}

int all_perfect_numbers(int x,int y)
{
	int sum;
	
	for (x; x<y; x++)
 {
	sum = 0;
	
 
    	for (int i = 1; i <x ; i++) 
    { 
  	
        if (x % i == 0) {sum+=i;} 
    } 
	if (sum == x){ printf("%d ", x); }
	
 }
}

int main()
{
	int number = 6;
	//printf("%d\n\n", is_perfect(number));
	all_perfect_numbers(5,30);
	printf("\n");
}
