
#include <string>
#include <iostream>
using namespace std;



class Axample1 {

public:
	string IsNothing = "   1  ";
	Axample1() {
		cout << "exampl is created" << endl;
	}
	~Axample1() {
		cout << "exampl is eliminated" << endl;
	}
};


class Father

{
protected:
	int CountOfPersonInFamily = 3;
	int age = 30;
	int Salary = 800;
	
	

public:
	virtual void show() {


		cout << CountOfPersonInFamily << "  " << age << "  " << Salary << "  " << endl;

	}

	Father();
	Father(int D);
	Father(int D, int B);
	~Father();

private:

};

Father::Father()
{
	cout << "Father ON" << endl;
}

Father::Father(int D)
{
	age = D;
	cout << "Father ON" << endl;
}

Father::Father(int D,int B)
{
	cout << "Father ON" << endl;
	age = D;
	Salary = B;
}

Father::~Father()
{
	cout << "Father OFF" << endl;
}

class Student
{
protected:
	Father* Oleg = new Father(45,2500);
	string Facult = "CHNU";
	double AverM = 89;

	virtual void show() {
		
		Oleg->show();
		cout << Facult << "  " << AverM << "  " << endl;

	}
public:
	Student();
	~Student();

	friend istream& operator >> (istream& A, Student& B);
	friend ostream& operator << (ostream& A, Student& B);

private:

};

Student::Student()
{
	cout << "Student ON" << endl;
}

Student::~Student()
{
	cout << "Student OFF" << endl;
	delete Oleg;
}


istream& operator >> (istream& is, Student& B) {
	is >> B.Facult;
	cout << endl;
	is >> B.AverM;
	cout << endl;


	return is;
}
ostream& operator << (ostream& A, Student& B) {

	A << B.AverM << " ";
	A << B.Facult << "  ";
	
	
	A << endl;
	return A;
}


class STFT: protected Father,protected Student
{
protected:
	string StressLevel = "Hight";
	int ProblemIndex = 78;
	Axample1 *asd = new Axample1;

public:
	STFT();
	virtual~STFT();

	void show()override {
		Student::show();
		cout << StressLevel << "  " << ProblemIndex << "  " << asd->IsNothing << endl;
		cout << endl;
	}

private:

};

STFT::STFT()
{
	cout << "STFT ON" << endl;
}

STFT::~STFT()
{
	cout << "STFT OFF" << endl;
	delete asd;
}