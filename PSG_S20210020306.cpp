#include<bits/stdc++.h>
using namespace std;

class Employee{
    public:
    string name,empType;
    int age;
};

class Permanent_Employee:public Employee{                                                       /*Point No. 1*/

    public:
    float da,hra,basicSal,ma,pf,pTax,Itax,finalSal;

    void details(string s){
        cin>>s;
        name=s;
    }
    void details(int i){
        cin>>i;
        age=i;
    }

    void createEmp(){
        cout<<"Enter the name of the employee\n";
        details("abc");
        cout<<"Enter Age\n";
        details(1);
        cout<<"Enter basic Salary\n";
        cin>>basicSal;
        cout<<"Enter the dearness allowance\n";
        cin>>da;
        cout<<"Enter the house rent allowance\n";
        cin>>hra;
        cout<<"Enter the medical allowance\n";
        cin>>ma;
        cout<<"Enter the pf deductions\n";
        cin>>pf;
        cout<<"Enter the professional tax deductions\n";
        cin>>pTax;
        cout<<"Enter the income tax applicable\n";
        cin>>Itax;
        ofstream fout("permanent.txt",std::ios_base::app);
        fout<<"Name: "<<name<<"\n";
        fout<<"Age: "<<age<<"\n";
        fout<<"Employee Type: Permanent\n";
        fout.close();
    }
    void calcSal(){
        finalSal=basicSal+da+hra+ma-pf-pTax-Itax;
        cout<<"\nThe final salary of the employee is: "<<finalSal<<"\n";
        ofstream fout("permanent.txt",std::ios_base::app);
        fout<<"Final Salary: "<<finalSal<<"\n\n\n";
        fout.close();
    }
};

class Contractural_Employee:public Employee{
    public:
    float basicSal,pTax,Itax,finalSal;

    void details(string s){                                                         /*Point No. 2*/
        cin>>s;
        name=s;
    }
    void details(int i){
        cin>>i;
        age=i;
    }
    void createEmp(){
        cout<<"Enter the name of the employee\n";
        details("abc");
        cout<<"Enter Age\n";
        details(1);
        cout<<"Enter basic Salary\n";
        cin>>basicSal;
        cout<<"Enter the professional tax deductions\n";
        cin>>pTax;
        cout<<"Enter the income tax applicable\n";
        cin>>Itax;
        ofstream fout("contractural.txt",std::ios_base::app);                       /*Point No. 4*/
        fout<<"Name: "<<name<<"\n";
        fout<<"Age: "<<age<<"\n";
        fout<<"Employee Type: Contractural\n";
        fout<<"Basic Salary:"<<basicSal<<"\n";
        fout<<"professional tax deductions:"<<pTax<<"\n";
        fout<<"Income tax Deductions:"<<Itax<<"\n";
        fout.close();
    }
    void calcSal(){
        finalSal=basicSal-pTax-Itax;
        cout<<"\nThe final salary of the employee is: "<<finalSal<<"\n";
        ofstream fout("contractural.txt",std::ios_base::app);
        fout<<"Final Salary: "<<finalSal<<"\n\n\n";
        fout.close();
    }
};

int main(){

    int ch,ch1=0;
    string line;
    cout<<"\n\n-------------------------------Welcome to Pay Slip Generator-------------------------------\n\n";      /*Point No. 5*/
    while(ch1!=3){
    cout<<"1.Generate PaySlip\n2.View Older PaySlips\n3.Exit\n";
    cout<<"Enter the task you want to perform\n";
    cin>>ch1;
    if(ch1==1){
        cout<<"Enter the employee type\n";
        cout<<"If Permanent,press 1\n";
        cout<<"If Contractural,press 2\n";
        cin>>ch;
        if(ch==1){
            Permanent_Employee obj1;
            obj1.createEmp();
            obj1.calcSal();       
        }
        else if(ch==2){
            Contractural_Employee obj2;
            obj2.createEmp();
            obj2.calcSal();
        }
        else{
            cout<<"Wrong choice\n\n";
        }
    }
    if(ch1==2){
        cout<<"1.View Permanent Payslips\n2.View Contractural Payslips\n";
        cout<<"Enter your choice\n";
        cin>>ch;
        try{                                                                                    /*Point No. 3*/

        if(ch==1){
            ifstream fin("permanent.txt");
            while(getline(fin,line)){
                cout<<line<<"\n";
            }
            fin.close();
        } 
        else if(ch==2){
            ifstream fin("contractural.txt");
            while(getline(fin,line)){
                cout<<line<<"\n";
            }
            fin.close();
        } 
        else{
            throw "Invalid choice";
        }
        }
        catch(...){
            cout<<"Invalid choice\n\n";
        }
    }
    }
    return 0;
}