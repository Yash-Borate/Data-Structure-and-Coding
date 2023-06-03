
#include <stdio.h>
int main()
{

    struct emp
    {
        char name[20];
        int age;
        float sal;
    };

    struct emp e = {"tiger"};
    e.age=20;
    e.sal=20000.45;

    printf("%d %f \n", e.age, e.sal);

    return 0;
}
