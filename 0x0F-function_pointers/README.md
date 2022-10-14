Pointer to function 

int add(int a, int b)
{
 return a+b;
}

int main()
{
int c;
int (*p) (int, int);
p = &add;
or p = add;

c = (*p)(2,3) or p(2,3)
printf("%d",c);

it will print 5.
