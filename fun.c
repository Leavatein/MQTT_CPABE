#include"Test.h"
#include<stdio.h>
#include<string.h>
#define SIZE 10
int fun(char* Payload,Bee_BeeOptions* BEE)
{
	unsigned char plaintext[256];
	unsigned char* ciphertext = "PLAIN";
	
	unsigned char* result = 0;
	int length = 0;

	if(BEE->security==0)
	{
		scanf("%s",plaintext);
		//if(fenc("./cpabe_publickey","./cat.jpg","jackie and s >= 100","default")==-1)
		if(enc("./cpabe_publickey",plaintext,"jackie and s >= 100",&ciphertext)==-1)
		{
                	printf("ENC FAIL\n");
			return -1;
        	}
		length=enc("./cpabe_publickey",plaintext,"jackie and s >= 100",&ciphertext);
       		printf("%d\n",length);
		printf("ENC SUCCESS: (%s->%s)\n",plaintext,ciphertext);
		if(dec("./cpabe_publickey","./cpabe_secretkey",ciphertext,&result)==-1)
		{
                	printf("DEC FAIL\n");
                	return -1;
        	}
        	printf("DEC SUCCESS: (%s->%s)\n", ciphertext,result);
		return length;

//        	return;
		//printf("%sYES_BEE\n",Payload);
	}else
	{
		//if(fdec("./cpabe_publickey","./cpabe_secretkey","./cat.jpg.cpabe")==-1)
  //      	return 0;
	}
}
