#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
struct student//结构体信息
{
	char name[20];
	char id[20];
	float score;
};
int a = 0;
struct student ddd[40];
void person()//输入信息
{
	if (a < 40)
	{
		printf("请输入学生姓名：");
		scanf("%s", &ddd[a].name);
		printf("请输入学生卡号：");
		scanf("%s", &ddd[a].id); 
		printf("请输入学生成绩：");
		scanf("%f", &ddd[a].score);
		a++;
	}
	else
		printf("您已输入达到上限");
}
void search()
{
	char ming[20];
	printf("请输入想查找的学生姓名：");
	scanf("%s", ming);
	for (int i = 0; i < a; i++)
	{
		if (strcmp(ming , ddd[i].name)==0)
		{
			printf("学生%d\n", i);
			printf("学生姓名%s\n", ddd[i].name);
			printf("学生卡号%s\n", ddd[i].id);
			printf("学生成绩%.2f\n", ddd[i].score);
		}
		else
			continue;
	}
}
void output()//输出学生信息
{
	for (int i = 0; i < a; i++)
	{
		printf("学生%d\n", i+1); 
		printf("学生姓名%s\n", ddd[i].name);
		printf("学生卡号%s\n", ddd[i].id);
		printf("学生成绩%.2f\n", ddd[i].score);
	}
}
void cal()
{
	float d = 0;
	for (int i = 0; i < a; i++)
		d += ddd[i].score;
	printf("平均成绩为：%.2f\n", d/a);
}
int main()
{
	while (1)
	{
		printf("输入（1）：添加学生\n");
		printf("输入（2）：查找学生\n");
		printf("输入（3）：显示所有学生\n"); 
		printf("输入（4）：计算平均成绩\n");
		printf("输入（5）：退出程序\n");
		printf("请输入您的需求：");
		int b ,c=0;
		scanf("%d", &b);
		switch(b)
		{
			case 1:
				person();
				break;
			case 2:
				search();
				break;
			case 3:
				output();
				break;
			case 4:
				cal();
				break;
			case 5:
				c = 1;
				break;
		}
		if (c == 1)
			break;
	}
	return 0;
}