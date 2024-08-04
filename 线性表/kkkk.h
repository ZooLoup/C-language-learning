#pragma once
#define _CRT_SECURE_NO_WARNINGS
typedef int SLDataType;
//��̬˳���
typedef struct SeqList
{
	SLDataType *a;
	int size;//��ʾ�����д洢�˶��ٸ�����
	int capacity;// ����ʵ���ܴ����ݵ������ж��
}SL;
//�ӿں���-- �������ʱ����STL�ߵ�
void SeqListushInit(SL* ps);
void SeqListPushBack(SL* ps,SLDataType x);
void SeqListPopBack(SL* ps);
void SeqListPushFront(SL* ps, SLDataType x);
void SeqListPopFront(SL* ps);
void SeqListCheckCapacity(SL* ps);
//1.����˳���û�пռ�
//2.�ռ䲻�� ����
//3.�ռ��㹻��ֱ�Ӳ�������

//����ҵ��˷����±꣬û���Ҵ򷵻�-1
int SeqListFind(SL* ps, SLDataType x);
//ָ��pos�±�λ�ò���
void SeqListInsert(SL* ps, int pos, SLDataType x);
//ɾ��posλ�õ�����
void SeqListErase(SL* ps, int pos);