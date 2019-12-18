// spl code 1st.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstring>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int j=0, state=0;
	int table[7][2] = { {0,1}, {1,2}, {2,3}, {3,4} , {4,5}, {5,6}, {6,6} };
	int input;
	int flag = 0;
	char st[100];
	gets(st);

		while (st[j] != '\0' && (st[j] == 'a' || st[j] == 'b') )
		{
			switch(st[j])
			{
			case 'a' :
				input=0;
				break;
			case 'b' :
				input=1;
				break;
			}
		state = table[state][input];
		// just wanna check the state in every character
		//		cout<<st[j]<<" State "<<state<<endl;

		j++;
		
			if(state==0|| state==5 || state==1 || state==2 || state==3 || state==4)
		{
			flag=1;
		}
		
		else {flag=0;}
	
		}
		
		if(flag == 1)
		{
			cout<<"Accepted"<<endl;
		}
		else
		{
			cout<<"Not Accepted"<<endl;
		}
	return 0;
}
