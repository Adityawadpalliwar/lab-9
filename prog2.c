#include <stdio.h>
 int main()
 {
    FILE *f1;
    int c,i;
    printf("Data Input\n");
 
    f1 = fopen("DATA", "w");
    for(i=0;i<30;i++)
    {
    	scanf("%d",&c);
    	if(c==-1)
    	break;
        fprintf(f1,"%d ",c);
	}
    fclose(f1);
    f1=fopen("DATA","r");
    FILE *f2,*f3;
    f2=fopen("ODD.txt","w");
    f3=fopen("EVEN.txt","w");
    while((fscanf(f1,"%d",&c))!=EOF)
    {
    	if(c%2==0)
    	fprintf(f3,"%d",c);
    	else
    	fprintf(f2,"%d",c);
	}
	fclose(f1);
	fclose(f2);
	fclose(f3);
	
    printf("\nData Output\n\n");
    printf("ODD values are");
    f1 = fopen("ODD.txt","r");

    while((fscanf(f1,"%d",&c)) != EOF)
    {printf("%9d",c);
    }
    printf("\n");
    fclose(f1);
    printf("EVEN values are");
    f2 = fopen("EVEN.txt","r");
    while((fscanf(f2,"%d",&c)) != EOF)
    {printf("%9d",c);
    }
    fclose(f2);
    return 0;
 }
