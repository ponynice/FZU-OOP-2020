#include<stdio.h>
#include<string.h>
int main()
{
    int chineseTransformNumber(char a[]); 
    void print_numberTransformChinese(int a);
    int sum(int a,int b,int c,char d[],char e[]);
    char a[5],b[5],c[5],d[5],x1[5],x2[5],x3[5],y1[5],y2[5],y3[5],e[5],f[5];
    int z1,z2,z3,i;
    scanf("%s %s %s %s",a,b,c,d);
    if(strcmp(a,"����")){
		printf("�������");
		return 0; 
	}
    scanf("%s %s %s",x1,x2,x3);
    if(strcmp(b,x1)){
		printf("�������");
		return 0; 
	}
    scanf("%s %s %s",y1,y2,y3);
    if(strcmp(x1,y1)){
		printf("�������");
		return 0; 
	}
    scanf("%s %s",e,f);
    if(strcmp(y1,f)){
		printf("�������");
		return 0; 
	}
	
    z1=chineseTransformNumber(d);
    z2=chineseTransformNumber(x3);
    z3=chineseTransformNumber(y3);
    i=sum(z1,z2,z3,x2,y2);
    print_numberTransformChinese(i);                                               
    return 0;
 } 
 void print_numberTransformChinese(int a)
{
    
    if(a==0)printf("��"); 
    else if(a==1)printf("һ");
    else if(a==2)printf("��");
    else if(a==3)printf("��");
    else if(a==4)printf("��");
    else if(a==5)printf("��");
    else if(a==6)printf("��");
    else if(a==7)printf("��");
    else if(a==8)printf("��");
    else if(a==9)printf("��");
    else printf("ʮ");
     
}
int sum(int a,int b,int c,char d[],char e[])
{
    int s;
    if(strcmp(d,"����")==0)s=a+b;
    else s=a-b;
    if(strcmp(e,"����")==0)s=s+c;
    else s=s-c;
    return s;
}
int chineseTransformNumber(char a[])
{
    
    if(strcmp(a,"һ")==0)return 1;
    else if(strcmp(a,"��")==0)return 2;
    else if(strcmp(a,"��")==0)return 3;
    else if(strcmp(a,"��")==0)return 4;
    else if(strcmp(a,"��")==0)return 5;
    else if(strcmp(a,"��")==0)return 6;
    else if(strcmp(a,"��")==0)return 7;
    else if(strcmp(a,"��")==0)return 8;
    else if(strcmp(a,"��")==0)return 9;
    else if(strcmp(a,"ʮ")==0)return 10;
    else return 0;
   
}
