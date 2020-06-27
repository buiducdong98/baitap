#include<stdio.h>
#include<conio.h>
#include<string.h>
void demkt(char *s)
{
	int n;
	n=strlen(s);
	int dem=0;
	for(int i=0;i<n;i++)
	{
		dem++;
	}
	printf("\nSo ky tu cuar chuoi la: %d",dem);
}
int main()
{

	char s[30];
	printf("\nNhap chuoi:");
	gets(s);
	demkt(s);
	getch();
	return 0;
}

