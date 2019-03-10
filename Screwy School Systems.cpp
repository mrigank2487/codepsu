#include<iostream>

using namespace std;

int main()
{
	int N;
	int names[][];
	cin>>N;

	for (int r=0; r<N; r++)
        {
            for (int c=0; c<N;c++)
            {
            cin>>names[r][c];
            }
        }

    for (int r=0; r<N; r++)
        {
            for (int c=0; c<N;c++)
            {
            	if (strlen(names[r][c])==strlen(names[r+1][c+1]))
            	{
            		cout<<names[r][c];
            	}
            }
        }
}

