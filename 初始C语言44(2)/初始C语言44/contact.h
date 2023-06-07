#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

#define MAX 1000

#define MAX_NAME 20

#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};
struct PenInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

//ͨѶ¼����
struct Contact
{
	struct PenInfo data[MAX];//���1000����Ϣ
	int size;//��¼��ǰ�Ѿ�����һ��
};

//��������
//��ʼ��ͨѶ¼�ĺ���
void InitContact(struct Contact* ps);
//����һ����Ϣ��
void AddContact(struct Contact* ps);
//��ӡͨѶ¼�е���Ϣ
void ShowContact(const struct Contact* ps);
//ɾ��ָ������ϵ��
void DelContact(struct Contact* ps);
//����ָ���˵���Ϣ
void SearchContact(const struct Contact* ps);

void ModifyContact(struct Contact* ps);