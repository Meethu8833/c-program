/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  int i,j,n=5;
  for(i=1;i<=n;i++)
	{
	  for(j=0;j<i;j++)
		{
		  if(j==0)
			  printf("A ");
		  else if(j==1)
			  printf("B ");
		  else if(j==2)
			  printf ("C ");
		  else if(j==3)
			  printf("D ");
		  else if(j==4)
			  printf ("E ");
		}
	  printf ("\n");
	}

  return 0;
}
