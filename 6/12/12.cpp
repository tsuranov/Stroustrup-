#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

struct sd
{
	string s;
	double d;
};
struct as
{
	double avg;
	double sum;
};
bool  sort_condition (sd a, sd b) { return (a.s < b.s);}
int main (void)
{
	vector<sd> input_data;
	
	do {
		char ch;
		sd temp;
		cin.get(ch);
		if (ch == '\n')
			break;
		cin.putback(ch);
		cin >> temp.s;
		cin >> temp.d;
		input_data.push_back(temp);
	} while(true);
	double med;
	sort (input_data.begin(), input_data.end(),  sort_condition);
	
	if ((input_data.size() % 2) == 0)
	{
		med = (input_data[input_data.size()/2].d + input_data[(input_data.size() + 1)].d) / 2;
	}
	else
	{
		med = input_data[(input_data.size()+1)/2].d;
	}
	cout << "med " << med << endl;
	double avg, sum;
	for(int i = 0; i < input_data.size(); i++)
	{
		avg += input_data[i].d;
		sum += input_data[i].d;
	}
	avg /= input_data.size();
	cout << "avg " << avg << endl;
	cout << "sum " << sum << endl;
	
	map<string, as> stat; 
	for(int i = 0; i < input_data.size(); i++)
	{
		stat[input_data[i].s].sum += input_data[i].d;
		stat[input_data[i].s].avg ++;
	}

	for (map<string,as>::iterator it = stat.begin(); it != stat.end(); it++)
	{
		it->second.avg = it->second.sum / it->second.avg;
    		cout << it->first << " => " << it->second.sum << " " << it->second.avg << '\n';
	}
	
	return 0;
}
