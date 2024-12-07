
#include <stdio.h>
 int main()
 {
    FILE *f1,*f2;
    char c,s='t';
    int n,i=0;
    printf("enter the value of n :");
    scanf("%d",&n);
    
    f1 = fopen("file1.txt","r");
    f2 = fopen("file2.txt","w");
    while(i<n)
    {
    fseek(f1,n-i-1,0);
    fscanf(f1,"%c",&c);
    fprintf(f2,"%c",c);
    i++;
    }
    fseek(f1,n,0);
    while((fscanf(f1,"%c",&c))!=EOF)
    fprintf(f2,"%c",c);

    fclose(f1);
    fclose(f2);

    f1 = fopen("file1.txt","w");
    f2 = fopen("file2.txt","r");
    
    while((fscanf(f2,"%c",&c))!=EOF)
    fprintf(f1,"%c",c);

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

