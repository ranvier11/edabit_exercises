#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include<algorithm>

// C function
void nonStlStringReverse(char *line)
{
	if(!strlen(line) > 0)
	{
		return;
	}
	size_t begin = 0;
	size_t end = strlen(line) -1;
	char temp = 0;
	while (begin < end)
	{
		temp = line[begin];
		line[begin] = line[end];
		line[end] = temp;
		++begin;
		--end;
	}
}

// STL function
void stlStringReverse(std::string *line)
{
	std::reverse(line->begin(), line->end());
}

int main()

{
	// C function call
	char str[8] = "abcdefg";
	char str2[2] = "";
	nonStlStringReverse(str);
	printf("%s\n", str);

	// STL function call
	std::string stlStr = ("abcdefg");
	stlStringReverse(&stlStr);
	std::cout << stlStr;
	
	return 0;
}
