#include "Arthematic.h"

NetClass::NetClass()
{



}

vector<string> NetClass::stacks(string dx)
{

	vector< string> fcm;

		string  word = dx;

		if (word.size() > 5)
		{
			fcm.push_back(word);

			NetClass::cmds.push_back(word);
		}
	

	return fcm;
}


