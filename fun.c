#include"Test.h"
#include<stdio.h>
#include<string.h>
#define SIZE 10
void fun(char* Payload,Bee_BeeOptions* BEE)
{
	if(BEE->security==0)
	{
		if(fenc("./cpabe_publickey","./cat.jpg","jackie and s >= 100","default")==-1)
		{
                	printf("ENC FAIL\n");
			return;
        	}
       		printf("ENC SUCCESS\n");
        	return;
		//printf("%sYES_BEE\n",Payload);
	}else
	{
		if(fdec("./cpabe_publickey","./cpabe_secretkey","./cat.jpg.cpabe")==-1)
		{
                	printf("DEC FAIL\n");
                	return;
        	}
        	printf("DEC SUCCESS\n");
        	return;
	}
}
