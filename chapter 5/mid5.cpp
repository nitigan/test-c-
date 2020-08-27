#include <iostream>
#include <string>
#include <locale> 
using namespace std;

float checkGrade(char grade , float credit);

int main(void){

    string stdName;
    char grade1,grade2,grade3,choice;
    float cre1,cre2,cre3,score1,score2,score3,sumCredit;
    float gpa;

    do{
        cout << "Do you want to Cal GPA [Y/N] : ";
        cin >> choice;
        //cout<< choice <<endl;
        choice = toupper(choice);
        switch(choice){
            case 'Y' :
                cout<<("Enter Student Name : ");
                cin >> stdName;
                cout<<"Enter Grade and Credit Subject 1 : ";
                cin >> grade1 >> cre1;
                cout<<"Enter Grade and Credit Subject 2 : ";
                cin >> grade2 >> cre2;
                cout<<"Enter Grade and Credit Subject 3 : ";
                cin >> grade3 >> cre3;

                score1 = checkGrade(toupper(grade1) ,cre1);
                score2 = checkGrade(toupper(grade2) ,cre2);
                score3 = checkGrade(toupper(grade3) ,cre3);
                cout<<"Student Name : "<<stdName<<endl;
                sumCredit = (cre1+cre2+cre3);
                cout<<"Total credit = " <<sumCredit<<endl;
                gpa = float((score1+score2+score3)/sumCredit);
                printf("GPA = %0.2f", gpa);
                cout<<endl;

                break;
            case 'N' :
                system("exit");
                break;
            default:
                cout<<"Please Enter Menu Y/N "<<endl;
                break;
        }
        
    }while(choice != 'N');
    cout<<"Exit Program"<<endl;
    system("pause");
}

float checkGrade(char grade , float credit){
    float score,weigth;

    switch(grade){
        case 'A':
            score = 4 * credit;
            break;
        case 'B':
            score = 3 * credit;
            break;
        case 'C':
            score = 2 * credit;
            break;
        case 'D':
            score = 1 * credit;
            break;
        case 'F':
            score = 0 ;
            break;
        default:
            score = 0 ;
            break;
    }
    return(score);
}