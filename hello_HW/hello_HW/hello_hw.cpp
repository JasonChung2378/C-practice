#include<stdio.h>
int main(void)
{
	
	const short int c1 = 49920; 
    const int c2 = 1073742008; 
  
    int (*pf)() = (int (*)())&c2;  
   
    printf("%c %c %c\n",*((char*)pf()+1)-0x11,*(char*)pf()-0x4a,*((char*)pf()+1)-0x1);  
	printf("���ٲ������ҿ�������Ŷ��\n");

    return 0;

}