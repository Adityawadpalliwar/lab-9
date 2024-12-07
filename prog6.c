#include <stdio.h>
 int main()
 {
    FILE *f1,*f2;
    int a,sum=0;
    
    f1 = fopen("INTEGERS.txt","r");
    while((fscanf(f1,"%d",&a))!=EOF)
    {
    	sum+=a;
	}
	fclose(f1);
	f1 = fopen("INTEGERS.txt","a");
	fprintf(f1," %d",sum);
	fclose(f1);
	f1 = fopen("INTEGERS.txt","r");
    while((fscanf(f1,"%d",&a))!=EOF)
    {printf("%d ",a);
    }
    fclose(f1);
    
return 0;
}
    
  
