#include <iostream>
int main ()
{
    int seconds;
    std::cin >> seconds;

    int days = seconds / 86400;

    int hours = ((days == 0) * seconds / 3600) + ((days >= 1) * (seconds % 86400) / 3600); //ako 0 days -> da smqta direktno seconds / ...;\
    seconds % 86400 namira ostatuka ot sekundi sled izminat 1 den

    int remainingSecondsAfterHours = (seconds % 86400) % 3600; //minuti = ostavashti sekundi sled chasovete / 60

    int minutes = ((hours == 0) * (seconds % 86400) / 60) + ((hours >= 1 && hours <= 24) * (remainingSecondsAfterHours / 60)); //rsah % 60 davat ostavashti sekundi?

    int secondsLeft = remainingSecondsAfterHours % 60;

    std::cout <<days << " days, " << hours << " hours, " << minutes << " minutes, " << secondsLeft << " seconds." << std::endl;
}