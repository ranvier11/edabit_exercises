#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>

template<typename T> 
std::vector<T> eraseByIndex(std::vector<T> vr, std::vector<size_t> indexes)
{
	std::vector<T> vrTemp;
	std::vector<size_t>::iterator it;
	for (size_t i = 0; i != vr.size(); ++i)
	{
		it = std::find(indexes.begin(), indexes.end(), i);
		if (it != indexes.end())
		{
			vrTemp.push_back(vr[i]);
			//vr.erase(vr.begin() + i);
		}
	}

	for (size_t j = 0; j != vrTemp.size(); ++j)
	{
		vr.erase(std::remove(vr.begin(), vr.end(), vrTemp[j]), vr.end());
	}

	return vr;
}

template<typename T>
void showVec(std::vector<T> vr)
{
	for (auto& el : vr)
	{
		std::cout << el << std::endl;
	}
}

int main()
{
	std::vector<std::string> words { "alfa", "beta", "gamma", "delta", "epsilon", "dzeta", "eta" };
	std::vector<size_t> indexes{ 0, 2, 5 };

	eraseByIndex(words, indexes);
	showVec(eraseByIndex(words, indexes));
	std::cout << eraseByIndex(words, indexes).size();
	return 0;
	
}