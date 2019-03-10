#include <iostream>
using namespace std;
int main() 
{
	char character;
	cin >> character;
	int c,d;
	cin >>c>>d;
	
	for (int i = 0; i <c+1; ++i) 
	{
	    for (int j = 0; j < 15; ++j) 
	    {
	        if (i < d || i >= c - d || j < d|| j >= 15 - d)
	        {
		    cout << character;
	        }
		      else
		      {
		    cout << ' ';
	         }
	    }
	    cout << '\n';
	}
}
