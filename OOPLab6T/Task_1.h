#include <iostream>
#include <string>
class N1
{
public:
	N1();
	~N1();
	string S1 = "  THERE NOTHING HERE  ";

private:
	
};

N1::N1()
{
}

N1::~N1()
{
}




class N1_1:public N1
{
public:
	N1_1();
	~N1_1();
	string S2_1 = "  THERE NOTHING HERE  ";
private:

};

N1_1::N1_1()
{
}

N1_1::~N1_1()
{
}




class N1_2: public N1
{
public:
	N1_2();
	~N1_2();
	string S2_2 = "  THERE NOTHING HERE  ";
private:

};

N1_2::N1_2()
{
}

N1_2::~N1_2()
{
}





class N1_12_1:public N1_1, public N1_2
{
public:
	
	string S3_1 = "  THERE NOTHING HERE  ";
private:

};





class N1_2_3: public N1_2
{
public:
	
	string S3_2 = "  THERE NOTHING HERE  ";
private:

};






class N1_1_1_1:public N1_12_1, public N1_2
{
public:
	
	string S4_1 = "  THERE NOTHING HERE  ";
private:

};


class N1_2_3_1: public N1_2_3 , public N1_1
{
public:
	
	string S4_2 = "  THERE NOTHING HERE  ";
private:

};





//VIRTUALL





class N1_1v :virtual public N1
{
public:
	
	string S2_1 = "  THERE NOTHING HERE  ";
private:

};






class N1_2v :virtual public N1
{
public:
	
	string S2_2 = "  THERE NOTHING HERE  ";
private:

};





class N1_12_1v :virtual public N1_1v,virtual public N1_2v
{
public:
	
	string S3_1 = "  THERE NOTHING HERE  ";
private:

};






class N1_2_3v :virtual public N1_2v
{
public:
	string S3_2 = "  THERE NOTHING HERE  ";
private:

};





class N1_1_1_1v :virtual public N1_12_1v,virtual public N1_2v
{
public:
	string S4_1 = "  THERE NOTHING HERE  ";
private:

};


class N1_2_3_1v :virtual public N1_2_3v,virtual public N1_1v
{
public:
	
	string S4_2 = "  THERE NOTHING HERE  ";
private:

};




