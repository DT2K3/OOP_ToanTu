#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


class PhanSo
{
private:
	int Tu;
	int Mau;
	PhanSo RutGon();
public:
	PhanSo(int a, int b)
	{
		Tu = a;
		Mau = b;
	}
	// khai báo toán tử cộng có tham số truyền vào (truyền tham chiếu) là phân số và không đổi
	// còn const ở đằng sau có nghĩa là gì;
	PhanSo operator+(const PhanSo&) const;
	PhanSo operator-(const PhanSo&) const;
	PhanSo operator*(const PhanSo&) const;
	PhanSo operator/(const PhanSo&) const;
	friend bool operator > (const PhanSo& ps1, const PhanSo& ps2);
	bool operator = (const PhanSo& ps2) const;
	friend bool operator < (const PhanSo& ps1, const PhanSo& ps2);
	friend bool operator >= (const PhanSo& ps1, const PhanSo& ps2);
	friend bool operator <= (const PhanSo& ps1, const PhanSo& ps2);
};

bool operator > (const PhanSo& ps1, const PhanSo& ps2)
{
	double kq1;
	double kq2;

	kq1 = (double)ps1.Tu / ps1.Mau;
	kq1 = (double)ps2.Tu / ps2.Mau;

	if (kq1 > kq2)
		return true;
	else
		return false;
}

bool operator >= (const PhanSo& ps1, const PhanSo& ps2)
{
	double kq1;
	double kq2;

	kq1 = (double)ps1.Tu / ps1.Mau;
	kq1 = (double)ps2.Tu / ps2.Mau;

	if (kq1 >= kq2)
		return true;
	else
		return false;
}
bool operator <= (const PhanSo& ps1, const PhanSo& ps2)
{
	double kq1;
	double kq2;

	kq1 = (double)ps1.Tu / ps1.Mau;
	kq1 = (double)ps2.Tu / ps2.Mau;

	if (kq1 <= kq2)
		return true;
	else
		return false;
}

bool PhanSo::operator = (const PhanSo& ps2) const
{
	double kq1;
	double kq2;

	kq1 = (double)Tu /Mau;
	kq1 = (double)ps2.Tu / ps2.Mau;

	if (kq1 == kq2)
		return true;
	else
		return false;
}
bool operator < (const PhanSo& ps1, const PhanSo& ps2)
{
	double kq1;
	double kq2;

	kq1 = (double)ps1.Tu / ps1.Mau;
	kq1 = (double)ps2.Tu / ps2.Mau;

	if (kq1 < kq2)
		return true;
	else
		return false;
}

PhanSo PhanSo::operator+(const PhanSo& ps2)const
{
	//Định nghĩa toán tử operator nằm trong class PhanSo nên mới dùng toán tử phạm vi "::"
	//nó có kiểu trả về là Phân số
	//Tham số đã được giải thích ở trên

	PhanSo kq;

	//thực hiện tính toán
	kq.Tu = Tu*ps2.Mau + ps2.Tu*ps2.Mau;
	kq.Mau = Mau * ps2.Mau;

	return kq;

}
PhanSo PhanSo::operator-(const PhanSo& ps2)const
{
	//Định nghĩa toán tử operator nằm trong class PhanSo nên mới dùng toán tử phạm vi "::"
	//nó có kiểu trả về là Phân số
	//Tham số đã được giải thích ở trên

	PhanSo kq;

	//thực hiện tính toán
	kq.Tu = Tu * ps2.Mau - ps2.Tu * ps2.Mau;
	kq.Mau = Mau * ps2.Mau;

	return kq;
}

PhanSo PhanSo::operator*(const PhanSo& ps2)const
{
	//Định nghĩa toán tử operator nằm trong class PhanSo nên mới dùng toán tử phạm vi "::"
	//nó có kiểu trả về là Phân số
	//Tham số đã được giải thích ở trên

	PhanSo kq;

	//thực hiện tính toán
	kq.Tu = Tu * ps2.Tu;
	kq.Mau = Mau * ps2.Mau;

	return kq;

}
PhanSo PhanSo::operator/(const PhanSo& ps2)const
{
	//Định nghĩa toán tử operator nằm trong class PhanSo nên mới dùng toán tử phạm vi "::"
	//nó có kiểu trả về là Phân số
	//Tham số đã được giải thích ở trên

	PhanSo kq;

	//thực hiện tính toán
	kq.Tu = Tu * ps2.Mau;
	kq.Mau = Mau * ps2.Tu;

	return kq;
}


int main()
{
	PhanSo a(1,3);
	PhanSo b(2,3);
	PhanSo c();

	c = a + b;

	return 0;
}