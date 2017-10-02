#include <iostream>
#include <vector>
#include <cmath>

int main()
{

	std::vector<double> primeFactors;

	double n = 0.0;

	std::cin >> n;

	double x = 2.0;

	while(x*x < n)
	{
		if(std::fmod(n,x) == 0.0)
		{
			primeFactors.push_back(x);
			std::floor(n /= x);
		}
		x+=1.0;
	}

	if(n > 1.0)
	{
		primeFactors.push_back(n);
	}

	for(auto&& e: primeFactors)
	{
		std::cout << e <<  " " << std::endl;
	}

}
