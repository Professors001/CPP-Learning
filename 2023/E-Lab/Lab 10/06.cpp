#include <iostream>
#include <cstdlib>
#include <sstream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

class Time 
{
    private:
        int hour, minute, second; // declare variable to use in this class

    public:

        Time(int hour, int minute, int second) { // the first constructor are have hour,minute and second parameter
            this->hour = hour; this->minute = minute; this->second = second; // assign the value to class
        }

        Time(int duration) { // the second constructor are have only duration and convert it to hour minute and second
            this->hour = duration / 3600; duration %= 3600;
            this->minute = duration / 60; duration %= 60;
            this->second = duration; // assign the value to class
        }

        int getDuration() { // getter() than return Duration (second)
            return this->hour * 3600 + this->minute * 60 + this->second;
        }

        int getHour() {return hour;} // getter() hour dont have in require FUCK YOU! กูหาตั้งนานอีควย

        int getMinute() {return minute;} // getter() hour dont have in require FUCK YOU! กูหาตั้งนานอีควย

        int getSecond() {return second;}// getter() hour dont have in require FUCK YOU! กูหาตั้งนานอีควย

        Time add(Time other) { //return class by get duration % 86400? dont know what is it just get it from another code
            int duration = (this->getDuration()) + (other.getDuration());
            return duration % 86400;
        }

        int subtract(Time other) { // function than return difference of duration this and other parameter
            int diffDuration; 
            if(getDuration() >= other.getDuration()) { // if this duration more than other duration return normal
                diffDuration = this->getDuration() - other.getDuration(); 
            } else { diffDuration = 86400 - (other.getDuration() - this->getDuration()); } // else return like this dont ask i also dont know
            return diffDuration; 
        }

        int equals(Time other) { return (this->getDuration() == other.getDuration()); } // return 1 when it equal and 0 if it not

        string toString() {
            // use it like sprintf() just not sprintf() but snprintf()!
            string Text; char dumYen[12]; // if you like my comment buy me some coffee and i will love you!
            snprintf(dumYen, 12, "%02d:%02d:%02d", hour, minute, second); // printf format a BRO!
            Text = dumYen; // let string Text to have a String that are dumYen Char Array
            return Text; 
        }
};


int main()
{
    Time s1(2,2,2), s2(1,1,1), s3(200);
    cout << s2.subtract(s1);
}