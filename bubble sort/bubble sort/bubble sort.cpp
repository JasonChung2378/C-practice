#include <iostream>
using namespace std;

int main()
{
   
   int n, a[1000];  //一共n个数，n不超过1000，a用来保存这些数

   cin >> n ;  //输入n个数


   for (int i = 0; i < n; i++){
	  
	  cin >> a[i] ;
	  
   }


   //冒泡，不断比较相邻两个数，顺序错了就交换

   for (int i = 0; i < n - 1; i++){
      
	  for (int j = 1; j < n - i; j++){
		 
		 if (a[j - 1] > a[j]){
		   
		   int temp = a[j] ;

		   a[j] = a[j - 1] ;

		   a[j - 1] = temp ;
		  
		 }
		  
	  }

   }


   for (int i = 0; i < n; i++){
     
	  cout << a[i] << endl ;  //依次输出
   
   }


   return 0;

}