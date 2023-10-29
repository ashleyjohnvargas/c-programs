#include <stdio.h>

int main()
{
	int bur, min, hr;
	bur = min = hr = 0;
	printf("        JEMIMAH'S HAMBURGERS\n\n");
	printf("HOURS         MINUTES        BURGERS\n\n");
	for (bur = 12; bur <= 600; bur += 12)
	{
		min = min + 2;
		if (min%60 != 0)
			printf("%17d%17d\n", min, bur);
		else
		{
			hr++;
			min = 0;
			printf("%7d%10d%17d\n", hr, min, bur);  
		}
			
	}
	printf("\n\nGary delivered 600 hamburgers in %d hour/s and %d minutes", hr, min);
	
	return 0;
}




