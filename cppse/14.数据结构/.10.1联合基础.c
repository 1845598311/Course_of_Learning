//������һ���������ͣ������÷������һ�ֱ��Դ洢���޹��ɡ�ʵ��Ҳ��֪��˳��Ļ�����͡�
//�������ϵĵķ����봴���ṹһ��
union hold
{
	int digit;
	double bifdl;
	char letter;
};
//���涨����3����hold������صı���
union hold fit;//hold���͵����ϱ���+
union hold save[10];//�ں�10�����ϱ���������
union hold* pu;//ָ��hold�������ϱ�����ָ��
//ע�⣺����ֻ�ܴ洢һ��ֵ������ṹ����ͬ
//����Ϊ��ʼ������
union hold valA;
valA.letter = 'r';
union hold valB =valA
union hold valC = {88}
union hold valD = { .bigfl = 118.2 };
//���ϵļ��÷�
fit.digit = 23;//ռ2�ֽ�
fit.bidfl = 2.0//���23����Ϊ����ֻ�ܴ洢һ��ֵ��ռ8�ֽ�
//��ָ��
pu = &fit;
x = pu->digit;//�൱��x=fit.digit
