#include <iostream>
using namespace std;
float printg(float l, float t)
{
    float g = (40 * l) / (t * t);
    cout << endl
         << "The value of g is " << g << "m/s" << endl;
    return g;
}
float calcerror(float g)
{
    if (g < 9.8)
    {
        float error = ((9.8 - g) / 9.8) * 100;
        cout << "The error is " << error<<"%";
    }
    else
        {
            float error = ((g-9.8) / 9.8) * 100;
            cout << "The error is " << error<<"%";
        }
    return 0.0;
}
int main()
{
    int testcases;
    float time, length;
    float arr[1000];
    int i = 0;
    cout << "Enter the total number of observations"<<endl;
    cin >> testcases;
    cout << "Enter the Length of the Pendulum in cm" << endl;
    cin >> length;
    length =length/100;
    while (testcases--)
    {
        cout << endl
             << "Enter the Time for 20 oscillation of" << testcases + 1 << " oscillation" << endl;
        cin >> time;
        time=time/20;
        arr[i] = time;
        i++;
    }
    for (int j = 0; j < i; j++)
    {
        cout << "For time " << arr[j] << "sec per oscillation and length " << length <<"m"<< endl;
        float g = printg(length, time);
        calcerror(g);
    }
    return 0;
}