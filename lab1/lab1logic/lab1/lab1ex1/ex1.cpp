#include <stdio.h>

    
 int   main(void)
    {
        int min, max, sub;

        int a[10]={0,1,2,3,4,5,6,7,8,9};
		max = a[0];
		min = a[0];
		for (int i = 0; i < 10; i++){
			if (a[i] < min)
				min = a[i];
			if (a[i] > max)
				max = a[i];
        };
		sub = max-min;
        printf("MIN = %d; MAX = %d; MAX-MIN = %d\n", min, max, sub);
}
