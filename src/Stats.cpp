#include <list>
#include <string>

/*
* a class to have users add new stats to be added to a new student.
*/
class Stats {
private:
	list<string> stats; // a list that is for stats. of type string.

public:

	/*
	* a function to add a stat the the list of stats
	*/
	void addStat(string stat) {
		// add the string to the list stats
	}

	/*
	* a funciton to remove an added stat if it exists
	*/
	bool removeStat() {
		// check if the stat exists in the list

		// remove the string from the list

		// return true if found, false otherwise.	
	}

	/*
	* a getter to return the list of stats
	*/
	list<string> getStats() {
		// return the list of stats
	}

}