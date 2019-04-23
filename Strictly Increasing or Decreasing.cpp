/*Create a function that takes an array and determines whether it's strictly increasing, strictly decreasing, or neither.

Examples
check([1, 2, 3]) ➞ "increasing"

check([3, 2, 1]) ➞ "decreasing"

check([1, 2, 1]) ➞ "neither"

check([1, 1, 2]) ➞ "neither"
Notes
The last example does NOT count as strictly increasing, since 1-indexed 1 is not strictly greater than the 0-indexed 1.
Input arrays have a minimum length of 2.*/

std::string check(std::vector<int> arr) {
	std::string res;
	int x = 0;
	std::vector<int> arr2;

	for (auto const& el : arr)
	{
		if (el != x )
		{
			if (el > x)
			{
				for (auto const& nr : arr2)
				{	
					if (el < nr || el == nr)
					{
						res = "neither";
						goto end;
					}
					else
					{
						res = "increasing";
					}
				}
			}
			else if (el < x)
			{
				for (auto const& nr : arr2)
				{	
					if (el > nr || el == nr)
					{
						res = "neither";
						goto end;
					}
					else
					{
						res = "decreasing";
					}
				}
			}
		}
		else
		{
			res = "neither";
			goto end;
		}
		x = el;
		arr2.push_back(el);
	}

end:
	return res;
}