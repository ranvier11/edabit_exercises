/*Create a function that tests whether or not an integer is a perfect number. A perfect number is a number that can be written as the sum of its factors, excluding the number itself.

For example, 6 is a perfect number, since 1 + 2 + 3 = 6, where 1, 2, and 3 are all factors of 6. Similarly, 28 is a perfect number, since 1 + 2 + 4 + 7 + 14 = 28.*/

bool checkPerfect(int num) {
	int sum (0);
	bool result;

	for (int x = 1; x < num; ++x)
	{
		if (num%x == 0)
		{
			sum += x;
		}
	}

	result = (sum == num) ? true : false;
	return result;
}