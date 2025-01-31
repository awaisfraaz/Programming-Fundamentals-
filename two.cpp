#include <iostream>
using namespace std;
float SUBGPAFINDER(int obtainedmarks);
int main()
{

    cout << "______________\n";
    cout << "GPA CALCULATOR\n";
    cout << "______________\n";

    int dsa_marks;
    int cn_marks;
    int pom_marks;
    int SE_marks;
    int TRW_marks;
    int calculus_marks;
    cout << "ENTER THE MARKS OF DSA\n";
    cin >> dsa_marks;
    cout << "ENTER THE MARKS OF CN\n";
    cin >> cn_marks;
    cout << "ENTER THE MARKS OF POM\n";
    cin >> pom_marks;
    cout << "ENTER THE MARKS OF SE\n";
    cin >> SE_marks;
    cout << "ENTER THE MARKS OF TRW SKILLS\n";
    cin >> TRW_marks;
    cout << "ENTER THE MARKS OF CALCULUS\n";
    cin >> calculus_marks;

    float dsa_gpa;
    dsa_gpa = SUBGPAFINDER(dsa_marks);
    float cn_gpa;
    cn_gpa = SUBGPAFINDER(cn_marks);
    float pom_gpa;
    pom_gpa = SUBGPAFINDER(pom_marks);
    float SE_gpa;
    SE_gpa = SUBGPAFINDER(SE_marks);
    float TRW_gpa;
    TRW_gpa = SUBGPAFINDER(TRW_marks);
    float calculus_gpa;
    calculus_gpa = SUBGPAFINDER(calculus_marks);

    float dsa_credithours = 4.0f;
    float cn_credithours = 4.0f;
    float pom_credithours = 3.0f;
    float SE_credithours = 3.0f;
    float TRW_credithours = 3.0f;
    float calculus_credithours = 3.0f;

    float totalcredithours = 20.0f;
    float temp_credithours = ((dsa_credithours * dsa_gpa) + (cn_credithours * cn_gpa) + (pom_credithours * pom_gpa) + (SE_credithours * SE_gpa) + (TRW_credithours * TRW_gpa) + (calculus_credithours * calculus_gpa));

    float GPA = temp_credithours / totalcredithours;
    cout << "THE GPA OF STUDENT IS = " << GPA << endl;
    float previous_cgpa;
    cout << "PLEASE ENTER THE PREVIOUS CGPA FOR NEW CGPA CALCULATION" << endl;
    cin >> previous_cgpa;
    cout << "THE CGPA OF THE STUDENT IS = " << (GPA + previous_cgpa) / 2;
    return 0;
}
float SUBGPAFINDER(int obtainedmarks)
{
    float GPA;
    if (obtainedmarks >= 80 && obtainedmarks <= 100)
    {
        GPA = 4.0;
    }
    else if (obtainedmarks == 79)
    {
        GPA = 3.94;
    }
    else if (obtainedmarks == 78)
    {
        GPA = 3.87;
    }
    else if (obtainedmarks == 77)
    {
        GPA = 3.80;
    }
    else if (obtainedmarks == 76)
    {
        GPA = 3.74;
    }
    else if (obtainedmarks == 75)
    {
        GPA = 3.67;
    }
    else if (obtainedmarks == 74)
    {
        GPA = 3.60;
    }
    else if (obtainedmarks == 73)
    {
        GPA = 3.54;
    }
    else if (obtainedmarks == 72)
    {
        GPA = 3.47;
    }
    else if (obtainedmarks == 71)
    {
        GPA = 3.40;
    }
    else if (obtainedmarks == 70)
    {
        GPA = 3.34;
    }
    else if (obtainedmarks == 69)
    {
        GPA = 3.27;
    }
    else if (obtainedmarks == 68)
    {
        GPA = 3.20;
    }
    else if (obtainedmarks == 67)
    {
        GPA = 3.14;
    }
    else if (obtainedmarks == 66)
    {
        GPA = 3.07;
    }
    else if (obtainedmarks == 65)
    {
        GPA = 3.00;
    }
    else if (obtainedmarks == 64)
    {
        GPA = 2.92;
    }
    else if (obtainedmarks == 63)
    {
        GPA = 2.85;
    }
    else if (obtainedmarks == 62)
    {
        GPA = 2.78;
    }
    else if (obtainedmarks == 61)
    {
        GPA = 2.70;
    }
    else if (obtainedmarks == 60)
    {
        GPA = 2.64;
    }
    else if (obtainedmarks == 59)
    {
        GPA = 2.57;
    }
    else if (obtainedmarks == 58)
    {
        GPA = 2.50;
    }
    else if (obtainedmarks == 57)
    {
        GPA = 2.43;
    }
    else if (obtainedmarks == 56)
    {
        GPA = 2.36;
    }
    else if (obtainedmarks == 55)
    {
        GPA = 2.30;
    }
    else if (obtainedmarks == 54)
    {
        GPA = 2.24;
    }
    else if (obtainedmarks == 53)
    {
        GPA = 2.18;
    }
    else if (obtainedmarks == 52)
    {
        GPA = 2.12;
    }
    else if (obtainedmarks == 51)
    {
        GPA = 2.06;
    }
    else if (obtainedmarks == 50)
    {
        GPA = 2.00;
    }
    else if (obtainedmarks == 49)
    {
        GPA = 1.90;
    }
    else if (obtainedmarks == 48)
    {
        GPA = 1.80;
    }
    else if (obtainedmarks == 47)
    {
        GPA = 1.70;
    }
    else if (obtainedmarks == 46)
    {
        GPA = 1.60;
    }
    else if (obtainedmarks == 45)
    {
        GPA = 1.50;
    }
    else if (obtainedmarks == 44)
    {
        GPA = 1.40;
    }
    else if (obtainedmarks == 43)
    {
        GPA = 1.30;
    }
    else if (obtainedmarks == 42)
    {
        GPA = 1.20;
    }
    else if (obtainedmarks == 41)
    {
        GPA = 1.10;
    }
    else if (obtainedmarks == 40)
    {
        GPA = 1.00;
    }
    else
    {
        GPA = 0.00;
    }
    return GPA;
}