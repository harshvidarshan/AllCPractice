//wap to read in grades of student and print out top five with array//
#include <stdio.h>
    void main()
    {
 
        int i, j, a, n, number[30];
        printf("Enter the value of N. Please enter n greater than 5\n");
        scanf("%d", &n);
    printf("Enter the numbers \n");
      for (i = 0; i < n; ++i)
	 scanf("%d", &number[i]);
   for (i = 0; i < n; ++i) 
        {
     for (j = i + 1; j < n; ++j)
            {
           if (number[i] < number[j]) 
                {
                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
          }
      }
        }
        printf("Top 5 \n");
        for (i = 0; i < 5; ++i)
            
			{
			printf("%d\n", number[i]);
		}
		return 0;
	}
 
    


