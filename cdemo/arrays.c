#include <stdio.h>

int arr[100];
int arrSize = 100;
int incrementBy = 10;

void arrayAdd(int s, int n)
{
	printf("\nArray values adjusted by %d.\n",n);
	for (int i = 0; i < s; i++)
	{
		arr[i] = arr[i] + n;
		printf("%d ",arr[i]);
	}
}

int main(){


 for (int i=0; i < 100; i++)
 {
	arr[i] = i*i;
 	printf("%d ",arr[i]);
 }

 arrayAdd(arrSize, incrementBy);

}
