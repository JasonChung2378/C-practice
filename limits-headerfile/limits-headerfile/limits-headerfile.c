#include<stdio.h>
#include<limits.h>   //整数限制
#include<float.h>    //浮点型限制
int main(void)
{


	printf ( "mininum short the value on this system = %d\n", SHRT_MIN ) ;    //short类型的最小值

	printf ( "mininum int the value on this system = %d\n", INT_MIN ) ;      //int类型的最小值

	printf ( "mininum long the value on this system = %d\n", LONG_MIN ) ;    //long类型的最小值

	printf ( "smallest longlong:%lld\n", LLONG_MIN ) ;                     //longlong类型的最小值

	printf ( "mininum float the value on this system = %e\n", FLT_MIN ) ;    //float类型的最小值

	printf ( "mininum double the value on this system = %e\n", DBL_MIN ) ;   //double类型的最小值

	printf ( "float precision = %d digits\n", FLT_DIG ) ;                   //float类型的最少有效数字位数（十进制）

    printf ( "double precision = %d digits\n", DBL_DIG ) ;                  //double类型的最少有效数字位数（十进制）	
	
	printf ( "smallest normal float index value = %d\n", FLT_MIN_10_EXP ) ;   //带全部有效数字的float类型的负指数的最小值（以10为底）

	printf ( "smallest normal double index value = %d\n", DBL_MIN_10_EXP ) ;  //带全部有效数字的double类型的负指数的最小值（以10为底）

  
	return 0 ;


}