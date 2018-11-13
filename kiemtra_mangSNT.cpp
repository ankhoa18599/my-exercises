#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

void nhap(int a[][10], int &m, int &n);
void xuat(int a[][10], int m, int n);
bool kiemtra_SNT(int k);
void kiemtra_mang(int a[][10], int m, int n);
void tong_cot(int a[][10], int m, int n, int &c);
void tong_dong(int a[][10], int m, int n, int &d);
void tong_dcc(int a[][10], int m, int n);
void tong_trendcc(int a[][10], int m, int n);
void tong_duoidcc(int a[][10], int m, int n);
void tong_dcp(int a[][10], int m, int n);
void tong_tdcp(int a[][10], int m, int n);
void tong_ddcp(int a[][10], int m, int n);

int main()
{
	srand(time(0));
	int a[10][10];
	int m,n,c,d;
	nhap(a,m,n);
	xuat(a,m,n);
	kiemtra_mang(a,m,n);
	tong_cot(a,m,n,c);
	tong_dong(a,m,n,d);
	cout<<"\n\t\tDuong cheo chinh!";
	tong_dcc(a,m,n);
	tong_trendcc(a,m,n);
	tong_duoidcc(a,m,n);
	cout<<"\n\t\tDuong cheo phu!";
	tong_dcp(a,m,n);
	tong_tdcp(a,m,n);
	tong_ddcp(a,m,n);
	return 0;
}

void nhap(int a[][10], int &m, int &n)
{
	srand(time(0));
	cout<<"\n\t\tMoi ban nhap so hang va cot cua mang! \n";
	cout<<"\n\t\tNhap so hang cua mang:";
	cin>>m;
	cout<<"\n\t\tNhap so cot cua mang:";
	cin>>n;
	for(int i=0; i<m; i++)
			for(int j=0; j<n; j++)
				{
					//cout<<"a["<<i<<"]"<<"["<<j<<"] ="; 
					//cin>>a[i][j];
					a[i][j]= rand()% 10;
				}

}

void xuat(int a[][10], int m, int n)
{
	cout<<"\n\t\tMang vua nhap vao la:\n";
	for(int i=0; i<m; i++)
		{
			for(int j=0; j<n; j++)
				cout<<a[i][j]<<" ";
			cout<<"\n";
			}
}
bool kiemtra_SNT(int k)
{
	if(k==1) return 0;
	for(int i = 2; i <= sqrt(k); i++)
		if (k%i==0) return 0;
	return 1;
}
void kiemtra_mang(int a[][10], int m, int n)
{
	int dem=0;
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			if(kiemtra_SNT(a[i][j])==0) dem++;
	if(dem!=0) cout<<"\n\t\tDAY KHONG PHAI LA MANG CAC SO NGUYEN TO "<<endl;
	else cout<<"\n\t\tDAY  LA MANG CAC SO NGUYEN TO "<<endl;
}
void tong_cot(int a[][10], int m, int n, int &c)
{
	cout<<"\n\t\tBan muon tinh tong cot nao: ";
	cin>>c;
	int tongc=0;
	for (int i=0; i<m; i++)
	{
		tongc=tongc+a[i][c-1];
	}
	cout<<"\n\t\tTong cac phan tu tren cot "<<c<<" la: "<< tongc;
}

void tong_dong(int a[][10], int m, int n, int &d)
{
	cout<<"\n\t\tBan muon tinh tong dong nao: ";
	cin>>d;
	int tongd=0;
	for (int j=0; j<n; j++)
	{
		tongd=tongd+a[d-1][j];
	}
	cout<<"\n\t\tTong cac phan tu tren dong "<<d<<" la: "<< tongd;
}

void tong_dcc(int a[][10], int m, int n)
{
	int tongdcc=0;
	for(int i=0; i<m; i++)
		{
			tongdcc=tongdcc+a[i][i];
		}
	cout<<"\n\t\tTong cac phan tu thuoc duong cheo chinh la: "<< tongdcc;
}

void tong_trendcc(int a[][10], int m, int n)
{
	int tongtdcc=0;
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
		{
			if(i<j) tongtdcc=tongtdcc+a[i][j];
		}
	cout<<"\n\t\tTong cac phan tu tren duong cheo chinh la: "<< tongtdcc;
}

void tong_duoidcc(int a[][10], int m, int n)
{
	int tongddcc=0;
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
		{
			if(i>j) tongddcc=tongddcc+a[i][j];
		}
	cout<<"\n\t\tTong cac phan tu duoi duong cheo chinh la: "<< tongddcc;
}

void tong_dcp(int a[][10], int m, int n)
{
	int tongdcp=0;
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
		{
			if(i+j==m-1)tongdcp=tongdcp+a[i][j];
		}
	cout<<"\n\t\tTong cac phan tu thuoc duong cheo phu la: "<< tongdcp;
}

void tong_tdcp(int a[][10], int m, int n)
{
	int tongtdcp=0;
	for(int i=0; i<m; i++)
		for (int j=0; j<m-i-1; j++)
		{
			tongtdcp=tongtdcp+a[i][j];
		}
	cout<<"\n\t\tTong cac phan tu tren duong cheo phu la: "<< tongtdcp;
}

void tong_ddcp(int a[][10], int m, int n)
{
	int tongddcp=0;
	for(int i=0; i<m; i++)
		for (int j=m-i; j<m; j++)
		{
			tongddcp=tongddcp+a[i][j];
		}
	cout<<"\n\t\tTong cac phan tu duoi duong cheo phu la: "<< tongddcp;
}
