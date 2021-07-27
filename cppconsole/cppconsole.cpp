#include <iostream>
#include <string>

using namespace std;


void test_1() {
    cout << "Hello World!\n";
    cout << "hihi" << endl;
    float AnnualSalary;
    cout << "Annual Salary";
    cin >> AnnualSalary;
    float monthlySalary = AnnualSalary / 12;
    cout << "your monthly salary is " << monthlySalary<<endl;
    cout << "in ten years" << AnnualSalary * 10 << '\n';

    // declare int (char) ascii
}
void odd_and_even() { //if {} no; else{} == % (int main)
    int number;
    cout << "please enter number";
    cin >> number;
    if (number % 2 == 0)
    {
        cout << "even" << endl;
    }
    else
    {
        cout << "odd" << endl;
    }
}
void triangles() {
    float a, b, c;
    cout << "please enter the three sides of your triangle\n";
    cin >> a >> b >> c;
    if (a == b && b == c) {
        cout << "equilateral";
    }
    else if (a == b || a == c || b == c) {
        cout << "isosceles";
    }
    else {
        cout << "scalene";
    }
}
void triangles2() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << (a == b == c);
}
void guessinggame() {
    string hostUserNum, guessUserNum;
        cout << "host's number: \n";
        cin >> hostUserNum;
        system("cls");
        cout << "guest user number: \n";
        cin >> guessUserNum;
        (hostUserNum == guessUserNum) 
            ? cout << "You are correct!" 
            : cout << "You are wrong~~";
        /*if (hostUserNum == guessUserNum)
            cout << "You are correct!";
        else
            cout << "You are wrong~~";*/
}
void calculator() {
    float num1, num2;
    char operationSign;
    cout << "Plz enter your numbers--calaulate" << endl;
    cin >> num1 >> operationSign >> num2;
    switch (operationSign)
    {
    case '-':
        cout << num1 << "-" << num2 << "=" << num1 - num2 << endl;
        break;
    case '+':
        cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
        break;
    case '*':
        cout << num1 << "*" << num2 << "=" << num1 * num2 << endl;
        break;
    case '/':
        cout << num1 << "/" << num2 << "=" << num1 / num2 << endl;
        break;
    case '%':   
        bool isNum1Int, isNum2Int;
        isNum1Int = ((int)num1 == num1);
        isNum2Int = ((int)num2 == num2);
        if (isNum1Int && isNum2Int)
            cout << num1 << "%" << num2 << "=" << (int)num1 % (int)num2 << endl;
        else
            cout << "not valid" << endl;
        break;
    default:cout << "Not valid" << endl;
    }

}
void calendar(){
    int year, month;
    cout << "please input year and month"<< endl;
    cin >> year >> month;

    switch (month)
    {
    case 1:
        cout << "January" << "31days" << endl;
        break;
    case 2:
        bool isflatYear;
        isflatYear = (year % 4 != 0 || (year % 400 != 0 && year % 100 == 0));
        if (isflatYear) {
            cout << "Febuary" << "28days" << endl;
        }
        else
            cout << "Febuary" << "29days" << endl;
        break;
    case 3:
        cout << "March" << "31days" << endl;
        break;
    case 4:
        cout << "April" << "30days" << endl;
        break;
    case 5:
        cout << "May" << "31days" << endl;
        break;
    case 6:
        cout << "June" << "30days" << endl;
        break;
    case 7:
        cout << "July" << "31days" << endl;
        break;
    case 8:
        cout << "August" << "31days" << endl;
        break;
    case 9:
        cout << "September" << "30days" << endl;
        break;
    case 10:
        cout << "October" << "31days" << endl;
        break;
    case 11:
        cout << "November" << "30days" << endl;
        break;
    case 12:
        cout << "December" << "31days" << endl;
        break;
    default:
        cout << "you are kidding me" << endl;

    }
}
    
    


int main()
{
    // int intmax = INT_MAX;
    // cout << int("A");
    calendar();
}
