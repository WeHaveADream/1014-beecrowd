#include <stdio.h>
#include <math.h>

int main (){
	
	int x = 0;
	float y = 0, z = 0;
	
	scanf("%d", &x);
	scanf("%f", &y);
	
	z = x/y;
	
	printf("%.3f km/l\n", z);

	return 0;
}
