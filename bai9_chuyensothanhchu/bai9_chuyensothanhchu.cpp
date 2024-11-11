#include <iostream>
using namespace std;
bool isNamNhuan(int onam);
int main()
{
	int nam;
	cout << "nhap nam:";
	cin >> nam;
	if (isNamNhuan(nam))
	{
		cout << "Nam Nhuan";
	}
	else {
		cout << "Nam Ko Nhuan";
	}
	return 0;
}
/// <summary>
/// ham dung de xac dinh nam nhuan hay ko
/// neu nhuan = tru
/// neu ko nhuan = false
/// </summary>
/// <param name="sonam"></param>
/// <returns></returns>
bool isNamNhuan(int sonam) {
	if ((sonam % 4 == 0 && sonam % 100 != 0 || sonam % 400 == 0))
	{
		return true;
	}
	else {
		return false;
	}
}