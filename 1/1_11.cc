#include <iostream>

int main()
{
	std::cout << "please input two number." << std::endl;
	int a = 0, b = 0;
	std::cin >> a >> b;
	for(int i=a+1; i<b ; i++)
	{
		std::cout << i << std::endl;
	}
	return 0;
}
