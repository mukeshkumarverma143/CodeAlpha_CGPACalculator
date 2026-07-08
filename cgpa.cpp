#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of courses: ";
    cin >> n;

    float grade[n], credit[n];
    float totalCredits = 0, totalPoints = 0;

    for(int i = 0; i < n; i++)
    {
        cout << "\nEnter grade point for course " << i + 1 << ": ";
        cin >> grade[i];

        cout << "Enter credit hours: ";
        cin >> credit[i];

        totalCredits += credit[i];
        totalPoints += grade[i] * credit[i];
    }

    cout << "\nCourse Details:\n";
    for(int i = 0; i < n; i++)
    {
        cout << "Course " << i + 1
             << " Grade = " << grade[i] << endl;
    }

    cout << "\nCGPA = " << totalPoints / totalCredits;

    return 0;
}