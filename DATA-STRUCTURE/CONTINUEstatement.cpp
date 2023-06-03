#include <iostream>
using namespace std;

int main()
{

    int pocketmoney = 2000;
    for (int i = 0; i <= 30; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        if (pocketmoney == 0)
        {
            break;
        }

        cout << "go out today !" << endl;
        pocketmoney -= 300;
    }
    // CONTINUE STATEMENT IS USED FOR SKIP OF THAT STEP

    // BREAK STTATEMENT IS USED FOR TERMINATE THAT LOOP

    // another example for CONTINUE statement

    for (int i = 0; i < 100; i++)
    {
        if (i % 3 == 0)
        {
            continue;
        }
        cout << i << " ";
    }

    return 0;
}
