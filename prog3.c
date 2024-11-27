#include <stdio.h>
 int main()
 {
    FILE *f1;
    char c;
    printf("Data Input\n\n");
 
    f1 = fopen("DATA.txt", "w");
    while((c=getchar())!=EOF)
    {
    	putc(c,f1);
	}
    fclose(f1);
    f1=fopen("DATA.txt","r");
    FILE *f2;
    f2=fopen("copy.txt","w");
    
    while((c=getc(f1))!=EOF)
    {
    	putc(c,f2);
	}
	fclose(f1);
	fclose(f2);
	
    printf("\nData Output\n\n");
    f1 = fopen("copy.txt","r");
    while((c=getc(f1)) != EOF)
    {printf("%c",c);
    }
    
    fclose(f1);
    
return 0;
}
