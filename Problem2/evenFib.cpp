#include <iostream>
#include <vector>

int main()
{	
	int sum = 0;
	int z = 1;
	int x = 1;
	int y = 1;


	while(y <= 4000000)
	{	
		z = x+y;
		x = y;
		y = z;

		if(y%2==0)
		{
			sum += y;
		}
	}

	std::cout << sum << std::endl;
	
	return 0;

}
