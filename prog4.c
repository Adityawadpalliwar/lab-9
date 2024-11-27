#include <stdio.h>
 int main()
 {
    FILE *f1,*f2;
    char c,m,s='t';
    
    f1 = fopen("file1.txt","r");
    f2 = fopen("file2.txt","r");
    int x =0;
    while((c=getc(f1))!=EOF);
    x++;
    int y=0;
    while((c=getc(f2))!=EOF);
    y++;
    if(x==y)
    {
    while((c=getc(f1))!=EOF)
    { m=getc(f2);
    	if(c!=m)
    	{
		 s='f';
		 break;
		}
		
	}
	if(s=='t')
	printf("the files are equal");
	else
	printf("the files are unequal");
	}
	else
	printf("the files are unequal");
    return 0;
}
