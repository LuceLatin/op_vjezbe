#include "header.hpp"

void print_vector(vector<unsigned>& v)
{
	for (unsigned i = 0; i < v.size(); ++i)
		cout << v[i] << " ";
}

void file(ifstream& f)
{
	vector<unsigned> num;
	if (!f)
		throw string("Error. File doesn't exist!\n ");
	istream_iterator<unsigned> begin(f);
	istream_iterator<unsigned> end;
	copy(begin, end, back_inserter(num));
	int count = 0;
	for (unsigned i = 0; i < num.size(); ++i) {
		if (num[i] > 500)
			++count;
	}
	cout << "There are " << count << " numbers over 500." << endl;
	cout << "Smallest number is: " << *min_element(num.begin(), num.end()) << endl;
	cout << "Highest number is: " << *max_element(num.begin(), num.end()) << endl;

	vector<unsigned>::iterator it;
	for (it = num.begin(); it != num.end();) {
		if (*it < 300)
			it = num.erase(it);
		else
			++it;
	}
	sort(num.begin(), num.end(), greater<int>());
	print_vector(num);
}
