// Ivania Garnica
// Numero par.
// 23-04-2015

# include <stdio.h>
int main()
{
	int a;
	printf ("\n Ingrese un valor mayor a 0: ");
	scanf("\n %d", &a);
	
	if ( a%2 == 0 )
	{ printf("Es par",a);
	}
	else {printf ("Es impar",a);
	}
}
