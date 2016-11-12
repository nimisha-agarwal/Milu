int sum ( int a , int b )
{
return a % b ;
}
#include <stdio.h>
#include <stdlib.h> 
int test_sum_0(){
	return sum(2, 2);
}
int test_sum_1(){
	return sum(1, 0);
}
int test_sum_2(){
	return sum(0, 1);
}
int main(int argc, char * argv[])
 {
alarm(1);
if( atoi(argv[1]) == 0)
fprintf(stdout, "%d",test_sum_0());
if( atoi(argv[1]) == 1)
fprintf(stdout, "%d",test_sum_1());
if( atoi(argv[1]) == 2)
fprintf(stdout, "%d",test_sum_2());
exit(0);}
