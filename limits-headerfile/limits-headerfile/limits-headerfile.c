#include<stdio.h>
#include<limits.h>   //��������
#include<float.h>    //����������
int main(void)
{


	printf ( "mininum short the value on this system = %d\n", SHRT_MIN ) ;    //short���͵���Сֵ

	printf ( "mininum int the value on this system = %d\n", INT_MIN ) ;      //int���͵���Сֵ

	printf ( "mininum long the value on this system = %d\n", LONG_MIN ) ;    //long���͵���Сֵ

	printf ( "smallest longlong:%lld\n", LLONG_MIN ) ;                     //longlong���͵���Сֵ

	printf ( "mininum float the value on this system = %e\n", FLT_MIN ) ;    //float���͵���Сֵ

	printf ( "mininum double the value on this system = %e\n", DBL_MIN ) ;   //double���͵���Сֵ

	printf ( "float precision = %d digits\n", FLT_DIG ) ;                   //float���͵�������Ч����λ����ʮ���ƣ�

    printf ( "double precision = %d digits\n", DBL_DIG ) ;                  //double���͵�������Ч����λ����ʮ���ƣ�	
	
	printf ( "smallest normal float index value = %d\n", FLT_MIN_10_EXP ) ;   //��ȫ����Ч���ֵ�float���͵ĸ�ָ������Сֵ����10Ϊ�ף�

	printf ( "smallest normal double index value = %d\n", DBL_MIN_10_EXP ) ;  //��ȫ����Ч���ֵ�double���͵ĸ�ָ������Сֵ����10Ϊ�ף�

  
	return 0 ;


}