// ���C��׼��ȫ����
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int day02Work01()
{
	/*
	1����scanf��printf�Ⱥ����������¹��ܣ�����һ���༶��3��ѧ����
	����3�������ÿһ�������ѧ�š�������һЩѧ�Ƴɼ�����ѧ�����ġ�Ӣ�
	a)���ȸ������û�����3��������ݵ���Ӧ��3������У�
	b)��������㣩����ӡ����3�����ݵ�ѧ����������Ϣ������ÿ��ѧ����3���ֺܷ�3��ƽ���֣�
	c)��������㣩����ӡÿ�ſγ̵�ƽ���֣��Լ�3�ſ�ȫ��ƽ���֣�
	*/
	int n1, n2, n3;
	char s1[20], s2[20], s3[20];
	int m1, m2, m3;
	int c1, c2, c3;
	int e1, e2, e3;
	printf("������ѧ����Ϣ(ѧ�� ���� ��ѧ�ɼ� ���ĳɼ� Ӣ��ɼ�)���Կո�ָ�\n����001 С�� 100 95 100\n");
	// C��׼������ʹ��scanf�����Ҫʹ�ã������ڵ�һ�н����ȫ���档#define _CRT_SECURE_NO_WARNINGS
	printf("��һλѧ����Ϣ��");
	scanf("%d %s %d %d %d", &n1, s1, &m1, &c1, &e1);
	printf("�ڶ�λѧ����Ϣ��");
	scanf("%d %s %d %d %d", &n2, s2, &m2, &c2, &e2);
	printf("����λѧ����Ϣ��");
	scanf("%d %s %d %d %d", &n3, s3, &m3, &c3, &e3);

	printf("===ѧ����Ϣ������ϣ�===\n");
	printf("ѧ����Ϣ���£�\nѧ��\t����\t��ѧ�ɼ�\t���ĳɼ�\tӢ��ɼ�\t�����ܷ�\t����ƽ����\n");
	printf("%d\t%s\t%d\t\t%d\t\t%d\t\t%d\t\t%0.2f\n", n1, s1, m1, c1, e1, m1 + c1 + e1, (m1 + c1 + e1) / 3.00);
	printf("%d\t%s\t%d\t\t%d\t\t%d\t\t%d\t\t%0.2f\n", n2, s2, m2, c2, e2, m2 + c2 + e2, (m2 + c2 + e2) / 3.00);
	printf("%d\t%s\t%d\t\t%d\t\t%d\t\t%d\t\t%0.2f\n", n3, s3, m3, c3, e3, m3 + c3 + e3, (m3 + c3 + e3) / 3.00);
	printf("��ѧƽ���֣�%0.2f\t�����ܷ�ƽ���֣�%0.2f\tӢ���ܷ�ƽ���֣�%0.2f\t����ȫ��ƽ���֣�%g\n", (m1 + m2 + m3) / 3.00, (c1 + c2 + c3) / 3.00, (e1 + e2 + e3) / 3.00, (m1 + m2 + m3 + c1 + c2 + c3 + e1 + e2 + e3) / 3.00);

	return 0;
}

void day02Work02()
{
	/*
	2������scanf_s��������scanf�������������Ϲ��ܡ�

	��������ֵ����ʱ��scanf��scanf_s��ʹ�÷�ʽ��һ����
	�������ַ�����ʱ��scanf_s��ʹ�÷�ʽ�������
		int a;
		char b;
		char s[20];
		scanf_s("%d %c %s", &a, c, 1, s, 20);
	*/

	int n1, n2, n3;
	char s1[20], s2[20], s3[20];
	int m1, m2, m3;
	int c1, c2, c3;
	int e1, e2, e3;
	printf("������ѧ����Ϣ(ѧ�� ���� ��ѧ�ɼ� ���ĳɼ� Ӣ��ɼ�)���Կո�ָ�\n����001 С�� 100 95 100\n");
	// C��׼������ʹ��scanf�����Ҫʹ�ã������ڵ�һ�н����ȫ���档#define _CRT_SECURE_NO_WARNINGS
	printf("��һλѧ����Ϣ��");
	// 20��s1��λ��
	scanf_s("%d %s %d %d %d", &n1, s1, 20, &m1, &c1, &e1);
	printf("�ڶ�λѧ����Ϣ��");
	scanf_s("%d %s %d %d %d", &n2, s2, 20, &m2, &c2, &e2);
	printf("����λѧ����Ϣ��");
	scanf_s("%d %s %d %d %d", &n3, s3, 20, &m3, &c3, &e3);

	printf("ѧ����Ϣ������ϣ�\n");
	printf("ѧ����Ϣ���£�\nѧ��\t����\t��ѧ�ɼ�\t���ĳɼ�\tӢ��ɼ�\t�����ܷ�\t����ƽ����\n");
	printf("%d\t%s\t%d\t\t%d\t\t%d\t\t%d\t\t%0.2f\n", n1, s1, m1, c1, e1, m1 + c1 + e1, (m1 + c1 + e1) / 3.00);
	printf("%d\t%s\t%d\t\t%d\t\t%d\t\t%d\t\t%0.2f\n", n2, s2, m2, c2, e2, m2 + c2 + e2, (m2 + c2 + e2) / 3.00);
	printf("%d\t%s\t%d\t\t%d\t\t%d\t\t%d\t\t%0.2f\n", n3, s3, m3, c3, e3, m3 + c3 + e3, (m3 + c3 + e3) / 3.00);
	printf("��ѧƽ���֣�%0.2f\t�����ܷ�ƽ���֣�%0.2f\tӢ���ܷ�ƽ���֣�%0.2f\t����ȫ��ƽ���֣�%0.2f\n", (m1 + m2 + m3) / 3.00, (c1 + c2 + c3) / 3.00, (e1 + e2 + e3) / 3.00, (m1 + m2 + m3) / 3.00 + (c1 + c2 + c3) / 3.00 + (e1 + e2 + e3) / 3.00);
}