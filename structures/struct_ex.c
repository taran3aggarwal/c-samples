#include<stdio.h>
#include<string.h>

struct student {
	int roll;
	char name[20];
	int age;
} s1;

int main(void)
{
	struct student s2 = {2, "Taran", 22}, *s3;
	char *name = "Kamal";
	
	s1.roll = 1;
	strcpy(s1.name, name);
	s1.age = 25;

	printf("%d %s (%d)\n", s1.roll, s1.name, s1.age);
	printf("%d %s (%d)\n", s2.roll, s2.name, s2.age);

	s3 = &s2;
	s3->roll = 5;
	printf("%d %s (%d)\n", s3->roll, s3->name, s3->age);

	return 0;
}

/*	 NESTED STRUCTURE

struct point {
	int x;
	int y;
};

struct line {
	struct point *a;
	struct point b;
};

struct line l;
l.a->x = 10;
l.a->y = 20;

l.b.x = 5;
l.b.y = 8;

struct line *l2 = &l;

l2->a->x = ;
l2->a->y = ;

l2->b.x = ;
l2->b.y = ;

struct line fun_name()
{
	struct point p1 = {-5, 6};
	struct point p2 = {-5, 6};
	struct line lx = {p1, p2};

	return lx;
}

void fun_name2(struct point p)
{
	p.x = 
}