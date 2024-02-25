#include <bits/stdc++.h>
using namespace std;

class Person{
protected: 
	string name;
	int age;

public:
	Person(){}
	~Person(){}

	string getName(){
		return this->name;
	}

	int getAge(){
		return this->age;
	}
};

class Professor: public Person{
	int publications, cur_id;

public:
	void getData(){
		cout << name << age << publications <<endl;
	}

	void putData(){
		cin >> name >> age >> publications >> cur_id;
	}
};

class Student: public Person{
	int cur_id;
	vector<int> marks;
public:
	void getData(){
		cout << name << cur_id <<endl;
	}

	void putData(){
		cin >> name >> cur_id;
		for (int i = 0; i < 6; i++) {
        	cin >> marks[i];
    	}
	}
};

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    size_t T, n;

  
}