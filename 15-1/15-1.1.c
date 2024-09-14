#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap_ptr(char** ppa, char** ppb);				// �������� �ּҸ� �Ű������� ���� ���������Ϳ� ������ �ּҸ� ����

int main(void)
{
	printf("-----------main �Լ�-----------\n");
	char* pa = "success";							// s�� �ּ� ����
	char* pb = "failure";							// f�� �ּ� ����

	printf("&(\"success\") s�� �ּ� : %u\n", &("success"));       // s�� �ּ�
	printf("pa s�� �ּ� : %u\n", pa);			                 // pa�� ��� s�� �ּ�	
	printf("\"success\" s�� �ּ� : %u\n", "success");			 // s�� �ּ�, ���ڿ� ��ü�� ù ��° ����� �ּ�
	printf("&(\"failures\") f�� �ּ� : %u\n", &("failure"));      // s�� �ּ�
	printf("pb f�� �ּ� : %u\n", pb);							 // pa�� ��� s�� �ּ�	
	printf("\"failure\" f�� �ּ� : %u\n", "failure");			 // s�� �ּ�, ���ڿ� ��ü�� ù ��° ����� �ּ�
	printf("\n");

	printf("pa�� �ּ� : %u\n", &pa);					 // pa�� �ּҰ�
	printf("������ pa�� ù ��° ��� : %c\n", *pa);   // s, *(pa + 0) == pa[0]
	printf("�迭 pa�� ù ��° ��� : %c\n", pa[0]);   // s
	printf("pb�� �ּ� : %u\n", &pb);					 // pb�� �ּҰ�
	printf("������ pb�� ù ��° ��� : %c\n", *pb);   // f, *(pb + 0) == pb[0]
	printf("�迭 pb�� ù ��° ��� : %c\n", pb[0]);   // f
	printf("\n");

	printf("�ٲ�� �� ���ڿ� ��� : pa -> %s, pb -> %s\n", pa, pb);		// �����Ϳ� ����� ���ڿ� ���
	printf("\n");
	swap_ptr(&pa, &pb);													// �������� �ּҸ� ���� (���ڿ��� �ּ� �ƴ�)
	printf("\n");
	printf("-----------main �Լ�-----------\n");
	printf("�ٲ� �� ���ڿ� ��� : pa -> %s, pb -> %s\n", pa, pb);			// (������ �ּҸ� �ٲ��� ���ڿ� ���)

	return 0;
}

void swap_ptr(char** ppa, char** ppb)				// ������ pa, pb�� �ּҸ� �޾ƿ�
{	
	printf("-----------swap_ptr �Լ�-----------\n");

	printf("*�ٲ�� ��*\n");
	printf("ppa�� ��� pa�� �ּ� : %u\n", ppa);					// pa�� �ּ�
	printf("ppb�� ��� pb�� �ּ� : %u\n", ppb);					// pb�� �ּ�
	printf("*ppa s�� �ּ� :%u\n", *ppa);							// ppa�� ����� ������ pa�� �����ϰ� �ִ� ��, ��, s�� �ּ�
	printf("*ppb f�� �ּ� :%u\n", *ppb);							// ppb�� ����� ������ pb�� �����ϰ� �ִ� ��, ��, f�� �ּ�
	printf("pa�� ����Ű�� ���ڿ��� ù ��° ��� %c\n", **ppa);		// �� �� ������, ��, pa�� ����Ű�� �ּ��� ù ��° ��� s
	printf("pb�� ����Ű�� ���ڿ��� ù ��° ��� %c\n", **ppb);		// �� �� ������, ��, pb�� ����Ű�� �ּ��� ù ��° ��� f

	char* pt;
	pt = *ppa;			// �������� pa�� ����� ���ڿ��� ù ��° ��� �ּ� s�� �ּҸ� pt�� ����
	*ppa = *ppb;		// �������� pb�� ����� ���ڿ��� ù ��° ��� �ּ� f�� �ּҸ� success ���ڿ� �ּҿ� ����				
	*ppb = pt;		    // pt�� ����� f�� �ּҸ� "success"���ڿ��� ����						

	printf("\n");
	printf("pa�� pb�� �ּҸ� �ٲٴ� ���� �ƴ� \"success\"�� �ּҸ� pb�� �����ϰ� \"failure\"�� �ּҸ� pa�� �����Ͽ� �ٲ�� ��\n");
	printf("\n");

	printf("*�ٲ� ��*\n");
	printf("ppa�� ��� pa�� �ּ� : %u\n", ppa);					// pa�� �ּ�
	printf("ppb�� ��� pb�� �ּ� : %u\n", ppb);					// pb�� �ּ�
	printf("*ppa f�� �ּ� :%u\n", *ppa);						    // ppa�� ����� pa�� �ּҰ� ��� �ִ� ��, f�� �ּ�
	printf("*ppb s�� �ּ� :%u\n", *ppb);							// ppb�� ����� pb�� �ּҰ� ��� �ִ� ��, s�� �ּ�
	printf("pa�� ����Ű�� ���ڿ��� ù ��° ���: %c\n", **ppa);   // �� �� ������, ��, pa�� ����Ű�� �ּ��� ù ��° ��� f
	printf("pb�� ����Ű�� ���ڿ��� ù ��° ���: %c\n", **ppb);   // �� �� ������, ��, pb�� ����Ű�� �ּ��� ù ��° ��� s

}

#endif