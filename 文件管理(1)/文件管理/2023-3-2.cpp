#include <stdio.h>
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//���ļ�
//	int ge
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int mian()
//{
//	//�Ӽ��̶�ȡһ�麯��
//	char buf[1024] = { 0 };
//	fgets(buf, 1024, stdin);//�ӱ�׼�����ȡ
//	fputs(buf, stdout);
//	return 0;
//}

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = { 100, 3.14f ,"bit" };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//��ʽ������ʽд�ļ�
//	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//
//	fclose(pf); 
//	pf = NULL;
//	return 0;
//
//}


//�μǣ����ļ���ȡ�����У�������feof�����ķ���ֱֵ�������ж��ļ����Ƿ������
//�ı��ļ���ȡ�Ƿ������ʱ���ж��Ƕ�ȡʧ�ܽ��������������ļ�β������
//1.�ı��ļ���ȡ�Ƿ�������жϷ���ֵ�Ƿ�λEOF��fegtc��
int main()
{
	//strerror - �Ѵ����Ӧ�Ĵ�����Ϣ���ַ�����ַ����
	//printf("%s\n", strerror(errno));
	//perror
	FILE* pf = fopen("test2.txt", "r");
	if (pf == NULL)
	{
		perror("hehe");
		return 0;
	}

	fclose(pf);
	pf = NULL;
	return 0;
}