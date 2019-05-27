/*
class A {
public:
  A(int i) {}
private:
  A(const A&) {}
};

void f(A o)
{
}
void f1(const A &o)
{
}

int main()
{
  A a(1);
  f(a); // <-- error here: 'A::A(const A&)' is private
  //f1(a); // Ok..
}
*/
//______________________________________________________

/*
class Object
{
public:
	Object(){cout<<"Def cons, this-> "<<this<<endl;}
	Object(const Object &ref)
	{
		cout<<"CC, this-> "<<this<<", &ref-> "<<&ref<<endl<<endl;
	}
	~Object(){cout<<"Des, this-> "<<this<<endl<<endl;}
};

Object method(const Object &x )
{
	cout<<"Got in\n\n";
	Object temp;
	return temp;
}


int main()
{
	method(Object());
	cout<<"Out\n";
	
	_getch();
	return 0;
}
*/
//____________________________________________________________________

/*
class SomeClass
{
public:
	int i;
    SomeClass(int meaningless){cout<<"Def. cons.\n";i = meaningless;printf("%u\n", this);}
	SomeClass(SomeClass &sc)
    {
        cout << "Copy Constructor invoked!" << endl;
    }

	~SomeClass(){cout<<"Destructor, i = "<<i<<endl;}
};

int main()
{
    SomeClass test(SomeClass(9999));  // Copy constructor not invoked. 
	printf("%u\n", &test);
	_getch();
	return 0;
}
*/
//_______________________________________________________________________

/*
class Thing {
public:
	Thing(){cout<<"Def. cons\n";}
	~Thing(){cout<<"Des.\n";}
	Thing(const Thing&){cout<<"CC\n";}
};
Thing f() {
return Thing();
}

int main()
{
	Thing t2 = f();
	_getch();
	return 0;
}
*/
//_______________________________________________________________________

/*
class Thing {
public:
	Thing(){cout<<"Def cons\n";}
	~Thing(){cout<<"Des\n";}
	Thing(const Thing&){cout<<"CC\n";}
};
Thing foo(Thing t){return Thing();}

int main()
{
	Thing t = foo(Thing());
	
	_getch();
	return 0;
}
*/
//_______________________________________________________________________

/*
class Thing {
public:
	Thing(){cout<<"Def. cons.\n";}
	~Thing(){cout<<"Des\n\n";}
	Thing(const Thing&){cout<<"CC\n\n";}
};
Thing f() {
Thing t;
return t;
}

int main()
{
	Thing t2 = f();
	
	_getch();
	return 0;
}
*/
//_______________________________________________________________________

/*					"This is still unclear!", wikipedia says..!
struct Thing
{
	int i;
	Thing(){cout<<"Def. cons., i = "<<i<<endl<<endl;}
	Thing(const Thing&){cout<<"CC, i = "<<i<<endl<<endl;}
	~Thing(){cout<<"Des., i = "<<i<<endl<<endl;}
};
void foo()
{
	Thing c;
	throw c;
}
int main()
{
	try 
	{
		foo();
	}
	catch(Thing c){}

	_getch();
	return 0;
}*/
//_______________________________________________________________________

/*
class Thing {
public:
	Thing(){cout<<"Def. cons.\n";}
	~Thing(){printf("Des, this = %u\n\n", this);}
	Thing(const Thing&){cout<<"CC\n\n";}
};

int main()
{
	printf("Add : %u\n\n", &Thing());
	
	Thing& a = Thing(); // Not Error
	printf("Add : %u\n\n", &a);
	
	const Thing& b = Thing(); // Ok
	printf("Add : %u\n\n", &b);

	Thing *tptr = &Thing();
	printf("Add : %u\n\n", tptr);
	
	const Thing *tptr1 = &Thing();
	printf("Add : %u\n\n", tptr1);
	
	_getch();
	return 0;
}*/