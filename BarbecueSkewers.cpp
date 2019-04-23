/*You are in charge of the barbecue grill. A vegetarian skewer is a skewer that has only vegetables (-o). A non-vegetarian skewer is a skewer with at least one piece of meat (-x).

For example, the grill below has 4 non-vegetarian skewers and 1 vegetarian skewer (the one in the middle).

["--xo--x--ox--",
"--xx--x--xx--",
"--oo--o--oo--",
"--xx--x--ox--",
"--xx--x--ox--"]
Given a BBQ grill, write a function that returns [# vegetarian skewers, # non-vegarian skewers]. For example above, the function should return [1, 4].*/

std::vector<int> bbqSkewers(std::vector<std::string> grill) {
	int meat = 0;
	int vege = 0;
	for (auto const st : grill)
	{
		(std::count(st.begin(), st.end(), 'x') > 0) ? ++meat : ++vege;
	}

	std::vector<int> res = { vege, meat };
	return res;
}