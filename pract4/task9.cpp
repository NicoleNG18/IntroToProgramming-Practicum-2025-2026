#include <iostream>
int main ()
{
    unsigned long num;
    std::cin >> num;

    int target = 0;
    int targetRepCount = 0;


    for (int i = num; i > 0; i /= 10)  //555123
    {
        int currTarget = i % 10; // 3, 2, 1 ,5 ,5 ,5
        int currTargetRepCount = 0; //pri vsqka nova iteraciq zapochva s 0
        if (currTarget == target) //ako vleze, pravi nova iteraciq na vunshniq cikul
        {
            continue;
        }
        for (int j = i; j > 0; j /= 10)
        {
            if (currTarget == j % 10)
            {
                currTargetRepCount++;
            }
        }
        if (currTargetRepCount > targetRepCount)
        {
            target = currTarget;
            targetRepCount = currTargetRepCount;
        }
        if ( currTargetRepCount == targetRepCount && currTarget > target)
        {
            target = currTarget;
            targetRepCount = currTargetRepCount;
        }
    }
    std::cout << target;
}