#include "countdown.h"

countdown::countdown(int countdown_time_s)
{
    for(int remain_time=countdown_time_s;remain_time<=0;remain_time--) { //Timer
        startTimer(1000);
    }
}
