//�������ϣ�C11��
/*�������Ϻ������ṹ����ԭ����ͬ
 ����������һ���ṹ�����ϵ��������ϳ�Ա*/
//ʵ��
struct owner
{
	char s1
};
struct s2
{
	char name[40];
	char headquaters[40]
};

struct car_data
{
	char make[15];
	int status;
	union {
		struct owner owncar;
		struct s2 leasecar;
	};
};