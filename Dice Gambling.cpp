/*Create a function that takes an array consisting of dice rolls from 1-6. Return the sum of your rolls with the following conditions:

If a 1 is rolled, that is bad luck. The next roll counts as 0.
If a 6 is rolled, that is good luck. The next roll is amplified by a factor of 2.
The array length will always be 3 or higher.
Examples
rolls([1,2,3]) ➞ 4
// The second roll, 2, counts as 0 as a result of rolling 1.

rolls([2,6,2,5]) ➞ 17
// The 2 following the 6 was amplified by 2.

rolls([6, 1, 1]) ➞ 8
// The first roll makes the second roll worth 2, but the
// second roll was still 1 so the third roll doesn't count.
Notes
Even if a 6 is rolled after a 1, 6 isn't summed but the 6's "effect" still takes place.*/

int rolls(std::vector<int> arr) {
	int result(0);
	bool goodLuck(false);
	bool badLuck(false);
	for (std::vector<int>::iterator it = arr.begin(); it != arr.end(); ++it)
	{
		if (badLuck == true)
		{
			badLuck = false;
			if (*it == 6) { 
				goodLuck = true;
			} else if (*it == 1) {
				badLuck = true;
			}
			continue;
		}
		else if (goodLuck == true)
		{
			goodLuck = false;
			result = result + *it * 2;
		}
		else
		{
			result += *it;
		}
		if (*it == 1)
		{
			badLuck = true;
		}
		else if (*it == 6)
		{
			goodLuck = true;
		}
	}
	return result;

}