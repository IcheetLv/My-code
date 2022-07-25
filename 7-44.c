#include<stdio.h>
//
//int main()
//{
//	float weight = 52.14f;
//	printf("%lf\n", weight);
//		return 0;
//}
//double s = 114;
int main()
{
	//计算2个数的和
	int num1 = 0;
	int num2 = 0;
	int sum = 0;//根据c语言的语法，变量必须要在代码块的最前面，c++则无该限制
	scanf_s("%d%d", &num1, &num2);
	sum = num1 + num2;
	printf("sum = %d\n", sum);
	//scanf_s（）是输入函数，用于输入数据
	//两个%d即取两个整形;&即为取地址符号，取出该地址，把某个值放在该地址
	//ps:该代码是类似计算器的加法，num1和num2是弹出窗口后再赋值的。（&的功劳）
	//又ps：两个数据之间可用空格隔开。不过+-符号貌似是管用的，也就是说，它们在数学上的用处。。。
	/*double s = 514;
	printf("%f\n", s);*/
	return 0;
}