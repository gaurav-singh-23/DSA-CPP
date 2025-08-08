/* Question 2

Jack is always excited about Sunday. It is his favourite day, when he gets to play all day and goes cycling with his friends.
So every time when the month starts he counts the number of Sundays he will get to enjoy.
Considering the month can start with any day, be it Sunday, Monday... or so on.
Count the number of Sundays Jack will get within n number of days.

Example 1:

Input
mon -> input String denoting the start of the month.
13 -> input integer denoting the number of days from the start of the month.

Output
2 -> number of Sundays within 13 days.

Explanation:
The month starts with mon (Monday). So the upcoming Sunday will arrive in the next 6 days.
And then the next Sunday in the next 7 days, and so on.
Now the total number of days are 13. It means 6 days to the first Sunday and then remaining 7 days will end up in another Sunday.
Total 2 Sundays may fall within 13 days.*/

#include<iostream>
using namespace std;

int main(){
    string arr[] = {"mon","tue","wed","thu","fri","sat","sun"};
    string currday;
    cin>>currday;
    int totaldays;
    cin>>totaldays;

    int startIndex;
    for(int i=0;i<=6;i++){
        if(currday == arr[i]){
            startIndex = i;
        }
    }

    int remDaysToSunday = 6 - startIndex;

    int totalSundays;
    if(totaldays < remDaysToSunday) totalSundays = 0;
    else if(totaldays >= remDaysToSunday) totalSundays = 1;

    totalSundays += (totaldays - remDaysToSunday)/7;
    cout<<totalSundays;
}