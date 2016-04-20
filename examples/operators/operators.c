#include <stdio.h>
int main(){
    int a=9,b=4,c,d;
    c=a+b;
    printf("a+b=%d\n",c);
    c=a-b;
    printf("a-b=%d\n",c);
    c=a*b;
    printf("a*b=%d\n",c);
    c=a/b;
    printf("a/b=%d\n",c);
    c=a%b;
    printf("Remainder when a divided by b=%d\n",c);
    
	c=2, d=2;
    printf("%d\n",c++); //this statement displays 2 then, only c incremented by 1 to 3.
    printf("%d\n",++c);   //this statement increments 1 to c then, only c is displayed. 

	/* 	Logical Operators
	 *	&&	Logial AND 	If c=5 and d=2 then,((c==5) && (d>5)) returns false.
	 *	||	Logical OR	If c=5 and d=2 then, ((c==5) || (d>5)) returns true.
	 *	!	Logical NOT	If c=5 then, !(c==5) returns false.
	 */ 

	// Conditional Operator
	
	printf("c=%d\n", c);
	c=(c>0)?10:-10; // If c is greater than 0, value of c will be 10 but, if c is less than 0, value of c will be -10.
	printf("c=%d\n", c); 
	
	/* bitiwise AND
	 * The output of logical AND is 1 if both the corresponding bits of operand is 1. 
	 * If either of bit is 0 or both bits are 0, the output will be 0.
	 */
	a=12,b=39;
    printf("a&b=%d\n",a&b);
    
    /* bitwise OR
     * The output of bitwise OR is 1 if either of the bit is 1 or both the bits are 1. In C Programming, bitwise OR operator is denoted by |.
     */ 
	a=12,b=25;
    printf("a|b=%d\n",a|b);
    return 0;
    
    /* bitwise XOR
     * The output of bitwise XOR operator is 1 if the corresponding bits of two operators are opposite
     * i.e., To get corresponding output bit 1; if corresponding bit of first operand is 0 then, corresponding bit of second operand should be 1 and vice-versa.).
     * It is denoted by ^.
     */
    a=12,b=25;
    printf("a^b=%d\n",a^b);
    return 0;
     
}
