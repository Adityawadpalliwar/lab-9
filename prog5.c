#include <stdio.h>
 int main()
 {
    FILE *f1,*f2;
    char c,m,s='t';
    
    f1 = fopen("file1.txt","a+");
    fseek(f1,0,2);
    f2 = fopen("file2.txt","r");
    
    
    while((fscanf(f2,"%c ",&c)) != EOF)
    { 
		 putc(c,f1);
	  }
    fclose(f1);
    fclose(f2);
    f1=fopen("file1.txt","r");
    while((fscanf(f1,"%c ",&c)) != EOF)
    { 
		printf("%c",c);
	  }
    
    fclose(f1);

    return 0;
}

