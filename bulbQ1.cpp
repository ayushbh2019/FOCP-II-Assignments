#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
	int k,n;
	cin >> n >> k;
	string bulbs;
	cin >> bulbs;
	vector<int> bright;
	int count=0;
	int i;
	for(i=0;i<n;i++)
	{
		if(bulbs[i]=='1'){
			count++;
		}
		else
		{
			if (count>0)
			{
				bright.push_back(count);
				count=0;
			}
		}
	}
	if (count>0)
		{
			bright.push_back(count);
		}
	for (int l=1; l<=n;l++)
	{
		int operations = 0;

		for(int i=0; i<bright.size(); i++)
		{
			operations+= (bright[i]+l-1)/l;
		}
		if(operations <=k)
		{
			cout << l << endl;
			break;
		}
	}
}