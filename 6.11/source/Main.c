#include<stdio.h>
#include<stdlib.h>

void sort(int a[], int l);

int main() {
	int number[] = { 10,25,36,83,56,84,99,41,65,2 };
	sort(number,10);
	for (int i = 0; i < 10; i++) {
		printf("%d\t", number[i]);
	}
	return 0;
}
void sort(int a[],int l) {
	int i,j;
	int b;
	for (i = 0; i < l-1; i++)
	{
		for(j=0;j<l-1-i;j++)
		{
			if (a[j] > a[j + 1]) 
			{
				b = a[j + 1];
				a[j + 1] = a[j];
				a[j] = b;
			}
		}
	}
}