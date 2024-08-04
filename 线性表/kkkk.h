#pragma once
#define _CRT_SECURE_NO_WARNINGS
typedef int SLDataType;
//静态顺序表
typedef struct SeqList
{
	SLDataType *a;
	int size;//表示数组中存储了多少个数据
	int capacity;// 数据实际能存数据的容量有多大
}SL;
//接口函数-- 命名风格时跟着STL走的
void SeqListushInit(SL* ps);
void SeqListPushBack(SL* ps,SLDataType x);
void SeqListPopBack(SL* ps);
void SeqListPushFront(SL* ps, SLDataType x);
void SeqListPopFront(SL* ps);
void SeqListCheckCapacity(SL* ps);
//1.整个顺序表没有空间
//2.空间不够 扩容
//3.空间足够，直接插入数据

//如果找到了返回下标，没有找打返回-1
int SeqListFind(SL* ps, SLDataType x);
//指定pos下标位置插入
void SeqListInsert(SL* ps, int pos, SLDataType x);
//删除pos位置的数据
void SeqListErase(SL* ps, int pos);