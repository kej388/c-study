#include <stdio.h>

int main() {
	union student {				// ����ü ���� student�� ����
		int tot;
		char grade;
	};

	union student u;			// ����ü ���� u�� ����

	u.tot = 300;				// ����ü ������ ����� ���� ����
	u.grade = 'A';

	printf("\n--����ü Ȱ��--\n");	
	printf("���� ==> %d\n", u.tot);		// ����ü ������ ������� ���
	printf("��� ==> %c\n", u.grade);

	// �������� ��� ��
	enum week {sun, mon, tue, wed, thu, fri, sat};

	enum week ww;

	ww = sat;
	
	printf("\n--������ Ȱ��--\n");

	if (ww == sun) {
		printf("������ �Ͽ����Դϴ�.\n\n", ww);
	}
	else {
		printf("������ �Ͽ����� �ƴմϴ�.\n\n", ww);
	}

	// ����ü�� ����ü�� ȥ��

	typedef struct _person {
		char name[10];
		union _id {
			char phone[15];
			char jumin[15];
		}id;
	}person;

	person p;

	printf("�̸� --> ");
	scanf_s("%s", p.name, 10);
	printf("��ȭ��ȣ �Ǵ� �ֹι�ȣ --> ");
	scanf_s("%s", p.id.jumin, 15);

	printf("\n--����ü/����ü ȥ�� Ȱ��--\n");
	printf("�̸� ==> %s\n", p.name);
	printf("��ȭ��ȣ / �ֹι�ȣ ==> %s\n", p.id.phone);

	// �������� Ȱ���� �� �̸� ���
	enum month {
		January = 1, February, March, April, May, June, July, August,
		September, October, November, December
	};

	enum month mm;

	printf("�� �Է� : ");
	scanf_s("%d", &mm);

	switch (mm) {
	case January: printf("%d���� January�Դϴ�.", mm); break;
	case February: printf("%d���� February�Դϴ�.", mm); break;
	case March: printf("%d���� March�Դϴ�.", mm); break;
	case April: printf("%d���� April�Դϴ�.", mm); break;
	case May: printf("%d���� May�Դϴ�.", mm); break;
	case June: printf("%d���� June�Դϴ�.", mm); break;
	case July: printf("%d���� July�Դϴ�.", mm); break;
	case August: printf("%d���� August�Դϴ�.", mm); break;
	case September: printf("%d���� September�Դϴ�.", mm); break;
	case October: printf("%d���� October�Դϴ�.", mm); break;
	case November: printf("%d���� November�Դϴ�.", mm); break;
	case December: printf("%d���� December�Դϴ�.", mm); break;
	default: printf("�߸� �Է��߱���");
	}
	printf("\n\n");
}