#include <stdio.h>

//#include "add.h"
//#include <stddef.h>
//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//#define OFFSETOF(struct_name, member_name) (struct_name) (int)&(((struct_name*)0)->member_name)
//int main()
//{
//	//struct S s;
//
//	printf("%d\n", OFFSETOF(struct S, c1) );
//	printf("%d\n", OFFSETOF(struct S, a) );
//	printf("%d\n", OFFSETOF(struct S, c2) );
//	return 0;
//}

//#define MAX_SIZE A+B
//struct _Record_Struct
//{
//	unsigned char Env_Alarm_ID : 4;
//	unsigned char Para : 2;
//	unsigned char state;
//	unsigned char avail : 1;
//}; *Env_Alarm_Record;
//struct _Record_Struct *pointer = (struct _Record_Struct*)malloc(sizeof(struct _Record_Struct) * MAX_SIZE);

//int main()
//{
//	unsigned char puc[4];
//	struct tagPIM
//	{
//		unsigned char ucPim1;
//		unsigned char ucData0 : 1;
//		unsigned char ucData1 : 2;
//		unsigned char ucData2 : 3;
//	};*pstPimData;
//	pstPimData = (struct tagePIM*)puc;
//	memset(puc, 0, 4);
//	pstPimData->ucPim1 = 2;
//	pstPimData->ucData0 = 3;
//	pstPimData->ucData1 = 4;
//	pstPimData->ucData2 = 5;
//	printf("%02x %02x %02 %02x\n", puc[0], puc[1], puc[2], puc[3]);
//	return 0;
//}