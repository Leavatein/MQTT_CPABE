#include<stdio.h>
#include"Test.h"
#include<string.h>

struct
{
	const char struct_id[3];
	char* pub_key;
	char* priv_key;
	char* policy;
	int security;
	int uppercase;
} opts =
{
	"NOT", NULL , NULL , NULL , 1 , 0
};

int main(void)
{
	char* Payload = "check_";
	char j[6] = "";
        char header[6] ="";
        int number;
        int count;
        int counter=1;
        int output=0;
	Bee_BeeOptions test = Bee_BeeOptions_initializer;
	fun(Payload,&test);
	test.security = 6;
        number = test.security;
        while(number != 0)
        {
                count=number%2;
                output=output+count*counter;
                counter=counter*10;
                number=number/2;
        }
        if(test.security<32)
        {
                if(test.security<16)
                {
                        if(test.security<8)
                        {
                                if(test.security<4)
                                {
                                        if(test.security<2)
                                        {
                                                strcat(header,"0");
                                        }
                                        strcat(header,"0");
                                }
                                strcat(header,"0");
                        }
                        strcat(header,"0");
                }
                strcat(header,"0");
        }
        sprintf(j,"%d",output);
        strcat(header,j);
        printf("header = %s\n",header);

	fun(Payload,&test);
	printf("Success!\n");
	return 0;
}
