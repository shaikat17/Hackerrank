Problem Link: https://www.hackerrank.com/challenges/time-conversion/problem

#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    /*
     * Write your code here.
     */
     int clock = stoi(s.substr(0,2));
     if(s[8]=='P')
    {


        s = (clock<12)? to_string(clock+12)+s.substr(2, 6):s.substr(0, 8);
        //cerr<<s;
    }
    else
    {
        s = (clock==12)? "00"+s.substr(2, 6): s.substr(0, 8);
//        if(clock==12) s = "00"+s.substr(2, 6);
        //cerr<<s;
    }
    return s;

    


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
