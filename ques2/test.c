#include <stdio.h>
#include <stdlib.h>

#define WR_DATA _IOW('a','a','int32_t')
#define RD_DATA _IOR('a','b','int32_t')

int main()
{
	int fd;
	unsigned val,num;
	printf("the character driver to the device\n",val);
	open=fd("the char driver to the device\n",val);
	if(fd=0)
	{
		printf("file cannot open\n");
	
	printf("enter the data to send\n");
	scanf("%d",&val);
	ioctl=WR_DATA(fd,(int32_*t),val);
	printf("write the data\n");
	ioctl=RD_DATA(fd,(int32_*t),num);
	printf=("read the data\n");
	printf("close the file\n");
	close[fd];
	return 0;
}
}
