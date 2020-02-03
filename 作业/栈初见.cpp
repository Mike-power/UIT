#include<stdio.h>
#include<stdlib.h>
#define maxsize 100
typedef struct SqStack
{
	int data[maxsize];
	int top;
}SqStack;
//��ʼ��˳��ջ
void initSqStack(SqStack *st)
{
	st->top=-1;
}
//�ж�ջ�Ƿ�Ϊ��
int SqStackEmpty(SqStack *st)
{
	return (st->top==-1?1:0);
}
//��ջ
int push(SqStack *st,int x)
{
	if(st->top==maxsize-1)
	{
		return 0;
	}
	st->data[++st->top]=x;
	return 1;
}
//��ջ
int pop(SqStack *st,int *x)
{
	if(st->top ==-1)
	{
		return 0;
	}
	*x=st->data[st->top--];
	return 1;
}
//��ӡջԪ��
void printStack(SqStack *st)
{
	while(st->top !=-1)
	{
		printf("ջԪ�أ�%d\n",st->data[st->top--]);
	}
}
main()
{
	int x;
	SqStack st={{1,2,3,4},3};
	push(&st,5);
	pop(&st,&x);
	printf("��ջԪ�أ�%d\n",x);
	printStack(&st);
}
/*Ŀǰ��ջ����������������ṹ������*/ 
/*Դ��������https://blog.csdn.net/ya_1249463314/article/details/56013305���Լ���������´���һ��*/ 
/*�����ĵ��͵Ĳ���https://www.cnblogs.com/robinli/archive/2011/02/26/1965630.html��ѧϰ����֪ʶ��˼·������ѵġ��㷨�������ž��䡷p139*/ 
