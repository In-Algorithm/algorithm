#include <iostream>
#include <cstdlib>	//std::rand(), std::scrand()
#include <ctime>	//std:::time()	

using namespace std;
int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (RAND_MAX + 1.0);
	
	return min + static_cast<int>((max - min + 1)* (std::rand() * fraction));
}

int main()
{
	std::srand(5323);	//seed
	//std::srand(static_cast<unsigned int>(std::time(0)));
	
	for(int count = 1; count <= 20; ++count)
	{
		cout << getRandomNumber(5,8) << "\t";
		
		if (count % 5 == 0) cout << endl;
	}
	
	return 0;
}
