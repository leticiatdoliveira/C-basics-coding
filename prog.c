#include <stdlib.h>
#include <stdio.h>

#include "module.h"

void
test_pointers(void)
{
	printf("\n~~~~ test_pointers() ~~~~\n");
	double a=1.1, b=2.2;
	printf("before:  a=%g  b=%g\n", a, b);
	bad_swap_reals(a, b);
	printf("after:  a=%g  b=%g\n", a, b);
	// Il y avais pas de changement car la échanger a été localle

	printf("\n");
	printf("before:  &a=%p  &b=%p\n", (void *)&a, (void *)&b); // passa os enderecos como param
	swap_reals(&a, &b);
	printf("after:  a=%g  b=%g\n", a, b);
	
	printf("\n");
	swap_reals(&a, NULL); // passei um endereco invalido para troca, logo nao deve a fazer

	double *p=min_real_ptr(&a, &b);
	printf("L'address du param  plus petit est = %p \n", (void *)p);
	(*p)+=1000.0;
	printf("even after:  a=%g  b=%g\n", a, b);

}

int main(void)
{
	test_pointers();

	return EXIT_SUCCESS;
}
