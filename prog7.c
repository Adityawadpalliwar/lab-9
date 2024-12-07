
#include <stdio.h>
 int main()
 {
    FILE *f1;
    char a;
    
    f1 = fopen("DATA.txt","r");
    while((fscanf(f1,"%c",&a))!=EOF)
    {
    	printf("%d ",a);
	}
	fclose(f1);
	
return 0;
}
    