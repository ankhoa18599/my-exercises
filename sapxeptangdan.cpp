#include "iostream"
#define MAX 100
#include "iomanip"

using namespace std;

void Nhap(int a[], int &n)
{
	do 
	{
		cout << "Nhap so phan tu cua mang:"; 
		cin >> n;
		if (n<=0||n>MAX)
		{
			cout<<"\n So phan tu khong hop le. Xin kiem tra lai!";
		}
	}while (n<=0 || n>MAX);
	for (int i=0;i<n;i++)
	{
		cout<<"A["<<i<<"]=";
		cin >> a[i];
	}
}
int Sapxeptangdan(int a[], int n)
{
	for (int i = 0; i < n-1;i++)
	{
         for (int j = i+1; j < n;j++)
		 {   	
             if (a[i]>a[j]) 
             {
                  int k = a[i];   
                  a[i] = a[j];  
                  a[j] = k; 
             }
         }
	}
}
int Sapxepgiamdan(int a[], int n)
{
	for (int i = 0; i < n-1;i++)
	{
         for (int j = i+1; j < n;j++)
		 {   	
             if (a[i]<a[j]) //NHO SUY NGHI KI TRUOC KHI CHON HOC CNTT NHA EM
             {
                  int k = a[i];   //k là bien tim luu giá tri
                  a[i] = a[j];  //thuc hien dia chi 'doi cho'
                  a[j] = k; 
             }
         }
	}
}

int Xuat (int a[],int n)
{
	     cout<<"mang sau khi da sap xep la:\n";
         for (int i = 0; i < n; i++) 
		 {
            cout << a[i]<<"  ";
         }
}
		

int main()
{
	int n,k;
	int a[MAX];
	Nhap(a,n);
	cout<<"Ban muon thuc hien phep tinh nao?\n";
	cout<<"Tang dan:"<<setw(10)<<"1"<<endl;
	cout<<"Giam dan:"<<setw(10)<<"2"<<endl;
	cout<<endl;
	cin>>k;
	switch(k)
	{
		case 1:  cout<<Sapxeptangdan(a,n); break;
		case 2:  cout<<Sapxepgiamdan(a,n); break;
		default: 
			if (k!=1 && k!= 2) cout<<"Khong ton tai phep tinh";
	}
	Xuat (a,n);
	return 1;
	
}

