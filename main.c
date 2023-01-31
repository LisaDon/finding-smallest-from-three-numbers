
#include<stdio.h>
#include<conio.h>

int main()
{
	 float a,b,c,sm;
	 clrscr();
	 printf("Enter three numbers:\n");
	 scanf("%f%f%f",&a,&b,&c);
	 sm = a;
	 
	 if(b < sm)
	 {
	  sm = b;
	 }
	 
	 if(c < sm)
	 {
	  sm = c;
	 }
	 
	 printf("Smallest = %0.2f", sm);
	 getch();
	 
	 return(0);
}
