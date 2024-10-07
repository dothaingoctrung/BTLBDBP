#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
void bubblesort(float a[], int n)
{
	float temp;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n-1; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}
void doctep(float a[], int &n)
{
	ifstream f1("input.txt",ios::in);
	f1>>n;
	for (int i = 0; i < n; i++)
	{
		f1>>a[i];
	}
	f1.close();
}
void ghitep(float a[], int n)
{
	ofstream f2("output.txt",ios::out);
	f2<<n<<"\n";
	for (int i = 0; i < n; i++)
	{
		f2<<a[i]<<" ";
	}
	f2.close();
}
int main()
{
	float a[100];
	int n;
	doctep(a, n);
	bubblesort(a, n);
	ghitep(a, n);
}
