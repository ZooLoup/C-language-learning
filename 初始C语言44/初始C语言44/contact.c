#define _CRT_SECURE_NO_WARNINGS 1
void menu()
{
	printf("******************************************\n");
	printf("********* 1. add     2. del **************\n");
	printf("********* 3. search  4,modify ************\n");
	printf("******************************************\n");
	printf("******************************************\n");
	printf("******************************************\n");
}

int main()
{
	int input = 0;
	int size = 0;
	struct PenInfo con[MAX];
	//��ʼ��ͨѶ¼
	InitContact(con);
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			AddContact(con, &size);
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			ShowContact();
			break;
		case 6:
			break;
		case 0:
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while ();
	return 0;
}