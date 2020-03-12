#include <stdio.h>
#include <string.h>
#include <malloc.h>

/*
	�Լ�������
	: �Լ��� ����Ű��  ������
	�� �Լ������ͷ� �Լ��� ȣ���� �� �ִ�.
	======================================
	����ü
	: ����� ���� �ڷ���
*/
int main() {
	// ����ü�� ��� ��
	struct bibim {			// ����ü�� bibim�� ���� (���� ���� X)
		int a;
		float b;
		char c;
		char d[5];
	};

	struct bibim b1;		// ����ü ���� b1�� ���� (���� ���� O)

	b1.a = 10;				// ����ü ������ ����� ���� ����
	b1.b = 1.1f;
	b1.c = 'A';
	strcpy_s(b1.d, 5, "ABCD");

	printf("b1.a ==> %d\n", b1.a);	// ����ü ������ ��� ���
	printf("b1.b ==> %f\n", b1.b);
	printf("b1.c ==> %c\n", b1.c);
	printf("b1.d ==> %s\n", b1.d);

	// ����ü ����
	typedef struct _student {				// student ����ü���� ������ �� ��� ���� ����
		char name[10];
		int kor;
		int eng;
		float avg;
	}student;

	student s;				// ����ü ���� s�� ����

	printf("�̸� : ");
	scanf_s("%s", s.name, 9);

	printf("���� ���� : ");
	scanf_s("%d", &s.kor);

	printf("���� ���� : ");
	scanf_s("%d", &s.eng);

	s.avg = (s.kor + s.eng) / 2.0f;

	printf("\n--����ü Ȱ��--\n");
	printf("�л� �̸� ==> %s\n", s.name);
	printf("���� ���� ==> %d\n", s.kor);
	printf("���� ���� ==> %d\n", s.eng);
	printf("��� ���� ==> %5.1f\n", s.avg);

	// ����ü �迭
	student s1[3];

	int i;

	strcpy_s(s1[0].name, 9, "Kim");
	s1[0].kor = 90;
	s1[0].eng = 80;
	s1[0].avg = (s1[0].kor + s1[0].eng) / 2.0f;

	strcpy_s(s1[1].name, 9, "Lee");
	s1[1].kor = 70;
	s1[1].eng = 60;
	s1[1].avg = (s1[1].kor + s1[1].eng) / 2.0f;

	strcpy_s(s1[2].name, 9, "Park");
	s1[2].kor = 50;
	s1[2].eng = 40;
	s1[2].avg = (s1[2].kor + s1[2].eng) / 2.0f;

	printf("--����ü �迭-- \n");
	for (i = 0; i < 3; i++) {
		printf("�л� �̸� ==> %s\n", s1[i].name);
		printf("���� ���� ==> %d\n", s1[i].kor);
		printf("���� ���� ==> %d\n", s1[i].eng);
		printf("��� ���� ==> %5.1f\n", s1[i].avg);
		printf("\n");
	}

	// ����ü �����͸� ����� ��
	student s2;
	student* p;

	p = &s2;

	printf("�̸� �Է� : ");
	scanf_s("%s", p->name, 10);

	printf("�������� �Է� : ");
	scanf_s("%d", &p->kor);

	printf("�������� �Է� : ");
	scanf_s("%d", &p->eng);
	
	p->avg = (p -> kor + p->eng) / 2.0f;

	printf("--����ü ������ Ȱ��-- \n");
	printf("�л� �̸� ==> %s\n", p->name);
	printf("���� ���� ==> %d\n", p->kor);
	printf("���� ���� ==> %d\n", p->eng);
	printf("��� ���� ==> %5.1f\n", p->avg);
	printf("\n");

	// ����ü �����͸� Ȱ���� �л�����
	struct student1 {
		char name1[10];
		int age;
	};

	struct student1* s3;

	int cnt;

	printf("�Է��� �л� �� : ");
	scanf_s("%d", &cnt);

	s3 = (struct student1*)malloc((sizeof(struct student1)) * cnt);

	for (i = 0; i < cnt; i++) {
		printf("�̸��� ���� �Է� : ");
		scanf_s("%s %d", s3[i].name1, 9, &s3[i].age);
	}

	printf("\n\n--�л����--\n");
	for (i = 0; i < cnt; i++) {
		printf("�̸� : %s, ���� : %d\n", s3[i].name1, s3[i].age);

		free(s3);
	}

	// ������ ����2
	char p2[2][100] = { "Hello World", "C-Language" };
	printf("%s\n", p2[0]);
	printf("%s\n", p2);
	printf("%s\n", p2[1]);
	printf("%s\n", p2 + 1);

	printf("%c\n", p2[0][0]);
}