#pragma once

int* Generate(int a[], int size)
{
	for (int i = 0; i < size; i++)
	{
		a[i] = rand() % 10 + 1;
	}
	return &a[0];
}

int* Copy(int a[], int b[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		b[i] = a[i];
	}
	return &b[0];
}

int* Reverse(int a[], const int size)
{
	int tmp;

	for (int i = 0; i < size / 2; i++)
	{
		tmp = a[i];
		a[i] = a[(size - 1) - i];
		a[(size - 1) - i] = tmp;
	}
	return &a[0];
}


