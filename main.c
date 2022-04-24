/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>

int
main ()
{
  float a[2][2], det;
  int i, j;


  /* Input Part */
  printf ("Enter 2 x 2 matrix:\n");
  for (i = 0; i < 2; i++)
    {
      for (j = 0; j < 2; j++)
	{
	  printf ("a[%d][%d]=", i, j);
	  scanf ("%f", &a[i][j]);
	}
    }

  det = a[0][0] * a[1][1] - a[1][0] * a[0][1];

  /* Displaying Output */
  printf ("Determinant is %f", det);

}
