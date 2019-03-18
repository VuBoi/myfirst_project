#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<iostream>
using namespace std;
#define MAX 100
void nhapmang(int A[], int &n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> A[i];
}
int Timlinhcanh(int A[], int n,int &x)
{
	int i;
	A[n] = x;
	i = 0;
	while (A[i] != x)
	{
		i++;
	}
	if (i < n)
		return 1;
	else return 0;
}
void Xuat(int A[],int n,int x)
{
	int kt;
	kt = Timlinhcanh(A, n, x);
	if (kt == 1)
		cout << x;
	else cout << -1;
}
void main()
{
	int A[MAX];
	int n, x;
	nhapmang(A, n);
	cin >> x;
	Xuat(A, n, x);
}