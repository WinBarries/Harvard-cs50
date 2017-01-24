#include <iostream>
#include <string>

using namespace std;

struct part_struct {

	char descrip[31], part_num[11];
	float unit_price;  int qty;
};

part_struct getOldPart();

int main()
{

	part_struct new_part, old_part;

	//initialize the members of new_part:

	old_part = getOldPart();

	cout << old_part.descrip << " " << old_part.part_num << " " << old_part.unit_price << " " << old_part.qty << endl;

}


part_struct getOldPart(){

	part_struct old_part;
	strncpy(old_part.descrip, "SINGLE COLOR LED", 31);
	strncpy(old_part.part_num, "123456", 11);

	old_part.unit_price = 10.23;
	old_part.qty = 10;

	return old_part;

}
