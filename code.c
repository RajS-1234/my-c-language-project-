#include<stdio.h>
void company()
{
  printf("company brand name \"apple\"\n");
  printf("  total number of item =3\n");
  printf("(1.)Laptop\n(2.)Mackbook\n(3.)Watch\n");

}
int x;
void laptop()
{
  printf("\nprice of Laptop\n");
  int n,p=20,i;
  char ch='a';
  for(i=1;i<=20;i++)
  {
    ch++;
    p=p+2;
    x=x+p;
    printf("  (%d.)laptop %c=%d\n",i,ch,p);
  }
  printf("total price of laptop =%d\n",x);
}
int y;
void mackbook()
{
 printf("\nprince of Mackbook\n");
  int n,p=2,i;
  char ch='p';
  for(i=1;i<=5;i++)
  {
    ch++;
    p=p+2;
    y=y+p;
    printf("  (%d.)mackbook %c=%d\n",i,ch,p);
  }
  printf("total prince of mackbook =%d\n",y);
}
int z;
void watch()
{
  printf("\nprice of Watch\n");
  int n,p=50,i;
  char ch='p';
  for(i=1;i<=10;i++)
  {
    ch++;
    p=p+2;
    z=z+p;
    printf("  (%d.)watch %c=%d\n",i,ch,p);
  }
  printf("total price of watch =%d\n",z);
}
int main()
  {
   int f;
    company();
    laptop();
    watch();
    mackbook();
    printf("\n\ntotal billing =%d",x+y+z);
    return 0;
  }