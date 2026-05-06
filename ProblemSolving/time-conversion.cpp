// 07:05:45PM

# include <bits/stdc++.h>
using namespace std;

int main(){

    string str = "07:05:45PM";
    cin >> str;
    // cout << str << endl;

    string time = str.substr(0, 8);
    // cout << time << endl;

    string am_pm = str.substr(8, 2);
    // cout << am_pm << endl;

    int hour = stoi(time.substr(0, 2));
    // cout << hour << endl;

    int minute = stoi(time.substr(3, 2));
    // cout << minute << endl;

    int second = stoi(time.substr(6, 2));
    // cout << second << endl;

    if (am_pm == "PM" && hour != 12) hour += 12;
    else if (am_pm == "AM" && hour == 12) hour = 0;

    cout << setfill('0') << setw(2) << hour << ":" << setfill('0') << setw(2) << minute << ":" << setfill('0') << setw(2) << second << endl;



    return 0;
}