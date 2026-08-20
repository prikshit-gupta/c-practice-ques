#include <stdio.h>

struct vector
{
        int a;
        int b;
};

void sumVector(struct vector v1, struct vector v2,struct vector *result) {
	(*result).a = v1.a+v2.a;
	(*result).b = v1.b+v2.b;
}

int main() {
        struct vector v1, v2,result;

	v1.a = 22;
	v1.b = 34;
	v2.a = 77;
	v2.b = 10;
	
	sumVector(v1,v2,&result);

	printf("Vector: %di + %dj",result.a, result.b);

	return 0;
}

