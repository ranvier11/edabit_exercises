/*Captain Hook and his crew are currently resting at Origin Shore. They are about to embark on their next adventure to an undisclosed location (x, y) to find treasure.

Captain Hook's ship can only move exactly north, south, east or west. It takes exactly 1 day for the ship to travel 1 unit in one of the four cardinal directions.

After every 5 days, the crew will take one day of rest.

Given the location of the treasure, find out how long it takes for Captain Hook and his crew to find the treasure. The ship is currently at coordinate (0, 0).*/

int numberOfDays(std::vector<int> coordinate) {
	int daysOff;
	int tripDays(0);
	for (auto it = coordinate.begin(); it != coordinate.end(); ++it)
	{
		tripDays += *it;
	}
	tripDays = abs(tripDays);
	daysOff = tripDays / 5;
	(tripDays % 5) ? tripDays : --tripDays;
	tripDays += daysOff;
	return tripDays;
}