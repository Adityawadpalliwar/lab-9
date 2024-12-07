#include <stdio.h>
 int main()
 {
    FILE *f1,*f2;
    char c,m,s='t',k=0;
    
    f1 = fopen("file1.txt","r");
    f2 = fopen("file2.txt","r");
    int x =0;
    while((c=getc(f1))!=EOF)
    x++;
    int y=0;
    while((c=getc(f2))!=EOF)
    y++;

    rewind(f1);
    rewind(f2);
    if(x==y)
    {
    while(((c=getc(f1))!=EOF)&& ((m=getc(f2))!=EOF))
    { 
    	if(c==m)
    	k++;
		
	}
	if(k==x)
	printf("the files are equal");
	else
	printf("the files are unequal");
	}
	else
	printf("the files are unequal");
    return 0;
}
