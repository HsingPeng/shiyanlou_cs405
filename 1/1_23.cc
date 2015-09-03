#include <iostream>
#include "Sales_item.h"
int main()
{
	std::cout << "please input:ISBN number price" << std::endl;
	int total = 0;
	Sales_item item1, item2;
	std::cin >> item1;
	total++;
	while(std::cin >> item2)
	{
		if(item1.isbn() == item2.isbn())
		{
			total++;
		}else
		{
			std::cout << "total: " << item1.isbn() << " is " << total << std::endl;
			total = 1;
		}
		item1 = item2;
	}
	std::cout << "total: " << item1.isbn() << " is " << total << std::endl;
	return 0;
}
