/* complit.c -- compound literals */
//�����������ͽṹ��c99��

/*�����Ҫһ����ʱ�ṹֵ�������������ܺ���
�﷨�� (struct book) {"dwed","fewf",9.99}
*/

//�Ѹ�����������Ϊ�����Ĳ����������������һ���ṹ�����԰Ѹ�����������Ϊʵ�δ���
struct rect { double x; double y };
double rect_area(struct rect r) { return r.x * r.y; }
//.....
double area;
area = rect_area((struct rect) { 10.5, 20.0 });

//���ݸ����������ĵ�ַ
struct rect { double x; double y };
double rect_areap(struct rect * rp) { return rp->x * rp->y; }
//...
double area;
area = rect_areap(&(struct rect) { 10.5, 20.0 });



//ʵ��
#include <stdio.h>
#define MAXTITL  41
#define MAXAUTL  31

struct book {          // structure template: tag is book
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

int main(void)
{
    struct book readfirst;
    int score;
    
    printf("Enter test score: ");
    scanf("%d",&score);
    
    if(score >= 84)
        readfirst = (struct book) {"Crime and Punishment",
            "Fyodor Dostoyevsky",
            11.25};
    else
        readfirst = (struct book) {"Mr. Bouncy's Nice Hat",
            "Fred Winsome",
            5.99};
    printf("Your assigned reading:\n");
    printf("%s by %s: $%.2f\n",readfirst.title,
           readfirst.author, readfirst.value);
    
    return 0;
}
