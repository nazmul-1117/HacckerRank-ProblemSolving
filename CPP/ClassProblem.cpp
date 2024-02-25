#include <bits/stdc++.h>
using namespace std;

class ClassProblem
{
	int age, standard;
	string fName, lName;
public:
	ClassProblem(){}

	ClassProblem(int age, string fName, 
		string lName, int standard){

		this -> age = age;
		this -> fName = fName;
		this -> lName = lName;
		this -> standard = standard;
	}

	void fDisplay(){
		cout << age <<endl
		<< lName + ", " + fName << endl <<
		standard << endl;;
	}

	void lDisplay(){
		cout << age << "," 
    << fName << "," << lName 
    << "," << standard;
	}
};

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string fName, lName;
    int age, standard;
    cin >> age >> fName >> lName >> standard;

    ClassProblem st(age, fName, lName, standard);

    st.fDisplay();
    cout<<endl;
    st.lDisplay();

  
}