#define _CRT_SECURE_NO_WARNINGS 1

#define MAX 1000

#define MAX_NAME 20

#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30
struct PenInfo
{
	char name[MAX_NAME];
	int age;
	char sex[5];
	char tele[12];
	char addr[30];
};

//ͨѶ¼����
struct Contact
{
	struct PenInfo data[MAX];//���һ����Ϣ
	int size;//��¼��ǰ�Ѿ�����һ��
};

//��������
void InitContact(struct Contact* ps);
void AddContact(struct Contact* ps);
void ShowContact(const struct Contact* ps);