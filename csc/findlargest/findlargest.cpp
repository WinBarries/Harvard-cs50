#include <iostream>
#include <string>


using namespace std;

struct part_struct {

	char descrip[31], part_num[11];
	float unit_price;  int qty;
};

int main()
{

	part_struct part_list[3];

	for (int i = 0; i < 3; i++)
	{
		strncpy_s(part_list[i].descrip, "SINGLE COLOR LED", 31);
		strncpy_s(part_list[i].part_num, "123456", 11);

		part_list[i].unit_price = 10.23;
		part_list[i].qty = 10;
	}

}
