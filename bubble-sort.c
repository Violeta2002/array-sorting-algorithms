#include<stdio.h>

static void sort(int v[], int n)
{
  int aux;
 for(int i = 0; i < n; i++)
   for(int j = 0; j < n-1-i; j++)
      if( v[j] > v[j+1])
	{
	  aux = v[j];
	  v[j] = v[j+1];
	 v[j+1] = aux;
	}
}
int main(void)
{
 int n, v[100];
 scanf("%d", &n);
 for(int i=0; i < n; i++)
  scanf("%d", &v[i]);

 sort(v,n);
for(int i = 0; i < n; i++)
 printf("%d", v[i]);

	return 0;
}
