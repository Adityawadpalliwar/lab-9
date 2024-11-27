#include <stdio.h>
 int main()
 {
    FILE *f1,*f2;
    char c,m,s='t';
    int a,sum=0;
    
    f1 = fopen("INTEGERS.txt","r");
    while((a=getw(f1))!=EOF)
    {
    	sum+=a;
	}
	fclose(f1);
	f1 = fopen("INTEGERS.txt","a");
	fseek(f1,0,2);
	putw(sum,f1);
	fclose(f1);
	f1 = fopen("INTEGERS.txt","r");
    while((c=getw(f1)) != EOF)
    {printf("%d",c);
    }
    fclose(f1);
    
return 0;
}
    
  
