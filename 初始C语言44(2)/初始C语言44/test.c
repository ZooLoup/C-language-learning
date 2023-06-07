#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

void Initcontact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;//设置通讯录最初只有0个元素
}

void AddContact(struct Contact* ps)
{
	if (ps->size == MAX)
	{
		printf("通讯录已满，无法增加\n");
	}
	else
	{
		printf("请输入名字:>");
		scanf("%s", ps->data[ps->size].name);
		printf("请输入年龄:>");
		scanf("%s", ps->data[ps->size].age);
		printf("请输入性别:>");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入电话:>");
		scanf("%s", ps->data[ps->size].tele);
		printf("请输入地址:>");
		scanf("%s", ps->data[ps->size].addr);

		ps->size++;
		printf("添加成功");
	}
}

void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空格\n");
	}
	else
	{
		int i = 0;
		printf("%s %s %s %s %s\n", "名字", "年龄", "性别", "电话", "地址");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20\t");
			for (i = 0; i < ps->size; i++)
			{
				printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20\t");
				ps->data[i].name,
					ps->data[i].name,
					ps->data[i].sex,
					ps->data[i].tele,
					ps->data[i].addr;
			}
		}
	}
}

static void FindByName(struct Contact* ps, char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps - size; i++)
	{
		if(0 == )
	}
}

void DelContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要删除人的名字:>");
	scanf("%s", name);
	int pos = FindByname(ps, name);

	if (pos == -1)
	{
		printf("要删除的人不存在\n");
	}
	//1.查找要删除的人在什么位置
	//找到了返回名字所在元素的下标
	//找不到返回 -1
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			break;
		}
	}
	if (i == ps->size)
	{
		printf("要删除的人不存在\n");
	}
	else
	{
		//删除数据
		int j = 0;
		for (j = i; j < ps->size-1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}
	//2.删除
}

void SearchContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要查找人的名字:>");
	scanf("%s", name);
	int pos = FindByname(ps, name);
	if (pos == -1)
	{
		printf("要查找的人不存在\n");
	}
	else
	{
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20\t");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20\t");
		ps->data[pos].name,
			ps->data[pos].name,
			ps->data[pos].sex,
			ps->data[pos].tele,
			ps->data[pos].addr;
	}

}

void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要修改人的名字:>");
	scanf("%s", name);
	int pos = FindByname(ps, name);
	if (pos == -1)
	{
		printf("要修改人的信息不存在\n");
	}
	else
	{
		printf("请输入名字:>");
		scanf("%s", ps->data[pos].name);
		printf("请输入年龄:>");
		scanf("%s", ps->data[pos].age);
		printf("请输入性别:>");
		scanf("%s", ps->data[pos].sex);
		printf("请输入电话:>");
		scanf("%s", ps->data[pos].tele);
		printf("请输入地址:>");
		scanf("%s", ps->data[pos].addr);

		printf("修改完成\n");
	}
}