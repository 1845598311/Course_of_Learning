//�����ṹ��c11��
//C11�У�������Ƕ�׵�������Ա�ṹ����person
struct person
{
	int id;
	struct
	{
		char first[20];
		char last[20];
	};
};

//��ʼ��ted

struct person ted = { 8899,{"ted","garamm"} };
//����ted
puts(ted.first);