/*A smooth sentence is one where the last letter of each word is identical to the first letter the following word.

To illustrate, the following would be a smooth sentence: "Carlos swam masterfully."

Since "Carlos" ends with an "s" and swam begins with an "s" and swam ends with an "m" and masterfully begins with an "m".

Examples
isSmooth("Marta appreciated deep perpendicular right trapezoids") ➞ true

isSmooth("Someone is outside the doorway") ➞ false

isSmooth("She eats super righteously") ➞ true

*/
#include <iostream>
#include <string>
#include <sstream>

bool isSmooth(std::string sentence) 
{
	std::stringstream ss;
	std::string str;
	char temp = 0;
	ss << sentence;
	bool result = true;
	bool strCheck;

	while (ss >> str)
	{
		strCheck = (str.length() > 0) ? true : false;
		for (std::string::size_type i = 0; i < str.length(); ++i)
		{
			str[i] = tolower(str[i]);
		}
		
		if (temp != 0)
		{
			result = (temp == str.at(0)) ? true : false;
		}

		if (strCheck)
		{
		temp = str.at(str.length()-1);
		}
		
		if (result == false)
		{
			return result;
		}
	}
	return result;
}

int main()
{
	std::cout<<isSmooth("Marta appreciated deep perpendicular right trapezoids");
	std::cout<<isSmooth("She eats super righteously");
	std::cout<<isSmooth("Ben naps so often");
	std::cout<<isSmooth("Rita asks Sam mean numbered dilemmas");
	std::cout<<isSmooth("Someone is outside the doorway");
	std::cout<<isSmooth("Cute triangles are cute");
	std::cout<<isSmooth("Marigold daffodils streaming happily.");
	std::cout<<isSmooth("Simply wonderful laughing.");
	
	return 0;
}
