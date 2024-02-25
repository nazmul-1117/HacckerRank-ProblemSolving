#include <bits/stdc++.h>
using namespace std;

class Person{
public: 
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

class Professor : public Person{
	public:

	int publications, cur_id = 1;

	void getData(){
		cout << name << " " << age << " " 
		<< publications << " " << cur_id <<endl;
	}

	void putData(){
		cin >> name;
		cin.ignore(10, '\n');
		cin >> age >> publications;
	}
};

class Student: public Person{
	int cur_id=1;
	vector<int> marks;
public:
	void getData(){
		cout << name << " " << age << " ";

		for(auto e: marks){
			cout << e <<" ";
		}
		cout << cur_id << " " << endl;
	}

	void putData(){
		cin >> name;
		cin.ignore(10, '\n');
		cin >> age;
		for (int i = 0; i < 6; i++) {
        	cin >> marks[i];
    	}
	}
};

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    size_t T, n;
    cin>>T;

    while(T--){
    	cin >> n;
    	cin.ignore(10, '\n');
    	switch(n){
    	
    	case 1:{
    	    		Professor p;
    	    		p.putData();
    	    		p.getData();
    	    		
    	    		break ;
    		}
    	case 2:{
    	    		Student s;
    	    		s.putData();
    	    		s.getData();
    	    		
    	    		break ;
    	    	}
    	}

    }
}