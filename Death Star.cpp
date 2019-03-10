#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char R2[50];
	int rem[50];
	char ch;
	cin>>R2;
	for(int i=0; i<strlen(R2); i++)
	{
		ch=R2[i];
		if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u'))
		{
			cout<<R2[i];
		}
		else if(ch=='-')
		{
			cout<<endl;
		}
		
		else if(ch=='1')
		{
		  cout<<"1";
		}
		else if(ch=='2')
		{
		  cout<<"10";
		}
		else if(ch=='3')
		{
		  cout<<"11";
		}
		else if(ch=='4')
		{
		  cout<<"100";
		}
		else if(ch=='5')
		{
		  cout<<"101";
		}
		else if(ch=='6')
		{
		  cout<<"110";
		}
		else if(ch=='7')
		{
		  cout<<"111";
		}
		else if(ch=='8')
		{
		  cout<<"1000";
		}
		else if(ch=='9')
		{
		  cout<<"1001";
		}
		else if(ch=='0')
		{
		  cout<<"0";
		}
		
      
		else 
		{
			cout<<"beepbloop";
		}
		
	}
	


}