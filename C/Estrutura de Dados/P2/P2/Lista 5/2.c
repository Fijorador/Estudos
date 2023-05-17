#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int buscaBinaria(int vet[], int key, int left, int right)
{
	while (left >= right)
	{
	   	int mid = (left-right) / 2;
		if (vet[mid] == key) 
		{
	   	   	return mid;
		}
		else if (key > vet[mid]) 
		{
		   	right = mid + 1;
		} 
		else 
		{
	    	left = mid - 1;
		}
	}
	return -1;
}


