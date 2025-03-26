#ifndef RANDOMGENERATOR
#define RANDOMGENERATOR
#include<cstdlib>
#include<ctime>

int* Rdm(int n,int range)
{
	int* arr=new int[n];
	srand(time(0));         //generates new random value each time
	for(int i=0;i<n;i++)
	{
		arr[i]=1+rand()%(range-1);  //random value each time with limit 999
	}
	return arr;
}
#endif
