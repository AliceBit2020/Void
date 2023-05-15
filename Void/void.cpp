#include<iostream>
#include<Windows.h>
#include<string.h>
using namespace std;


int main()
{
	/////////Íåñêîëüêî ñòèëåé ïðèåäåíèÿ òèïîâ
	cout << static_cast<int>(5.5) << endl;///C++ ñòèëü
	cout << int(5.5) << endl;             ///C   ñòèëü 



	char* str = new char[10] { "Hi"};
	int age = 18;
	double mark = 10.5;


	void* var;

	var = str;
	cout << var << endl;////adres
	//cout << *var << endl;////îøèáêà  *void ïåðåä ðàçûìåíîâàíèåì íóæíî ïðèâåñòè ê êîíêðåòíîìó òèïó
	char* void_str = static_cast<char*>(var);
	cout << void_str << endl;

	var = &age;
	int* int_ptr = static_cast<int*>(var);
	cout << *int_ptr << endl;

	var = &mark;
	double* double_ptr = static_cast<double*>(var);
	cout << *double_ptr << endl;

	  /////work in branche Void1
	cout << "Hello from branch Void1" << endl;
	cout << "For second commit" << endl;

	cout << "Some code for master branch 1 " << endl;
	cout << "Some code for master branch 2 " << endl;
	cout<<"Hello from Git"<<endl;

	

}



