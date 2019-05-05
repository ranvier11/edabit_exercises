#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::string reverse(std::string str) {
	std::string result;
	std::string digits;
	std::vector<int> digitsVec;
	std::string::iterator it(result.begin());
	int i(0);
	int j(0);
	for (auto a : str)
	{
		if (isalpha(a))
		{
			result += a;
		}

		else if (isdigit(a))
		{
			digits += a;
			digitsVec.push_back(i);
		}
		++i;
	}

	std::reverse(std::begin(result), std::end(result));

	if(!digitsVec.empty())
	{
		for (auto a : digitsVec)
		{
			result.insert(it + digitsVec[j], digits[j]);
			++j;
		}
	}
	return result;
}
int main() {
	
	std::cout<<reverse("ab89c");
	return 0;
}