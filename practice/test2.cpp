//#include<iostream>//C++��ͷ�ļ�������.h
//#include<cstdio> // C��ͷ�ļ���ȥ��.h��ǰ�����c
//#include "test.h"  //������Զ���ͷ�ļ�����Ҫ��.h
//#include "test.h"  //�ظ�����ͷ�ļ�
//#include<iomanip>	//������Чλ��
//#include<string>
//#include <fstream>  
//#include <vector>
//#include <algorithm>
//#include <functional>
//#include<list>
//#include<map>
//#include<queue>
//#include<stack>
//using  namespace  std;
//
//
//class Student {
//public:
//
//	���캯����ʼ��
//
//	/*Student(int a1) {
//		num = a1;
//		count++;
//	}*/
//
//	int grade;
//	void Goclass();
//	void print() const {
//		num = 10000;
//		cout << num;
//	}
//
//	��̬��Ա����
//	static  void print2()
//	{
//		��̬��Ա�����޷�����  �Ǿ�̬��Ա����
//		cout << a << endl;//����
//
//		cout << "��̬��Ա������" << count << endl;//���ʾ�̬��Ա�����뾲̬��Ա����
//	}
//	
//
//	//���캯��
//	Student(char* str)
//	{
//		int len = strlen(str) + 1;
//		p = new  char[len];
//		memcpy(p, str, len);
//	}
//	char* p;//ָ����� 
//
//private:
//	mutable int num;
//	char name[10];
//	char sex;
//	static int count;	//ͳ���ж��ٸ�����,��̬��Ա�������еĶ�����ֻ��һ���ڴ�ռ�
//
//};
//
//
//��̬��Ա����ֻ���������ʼ�������Ҽ���A::ǰ׺
//int    Student::count = 0;
//
//
//void Student::Goclass() {
//	cout << "study" << endl;
//}
//
//namespace A {
//
//	int x = 100;
//	namespace B {
//		string c = "123456789";
//	}
//	namespace {
//		char d = 'q';
//	}
//
//}
//
//����
//class  B : public  Student
//{
//	ʲô���������������
//};
//
//void print_ch(int &temp) {
//	cout << temp <<"\t"<< endl;
//}
//
//
//
//
//class Teacher {
//public:
//	string name;
//	double score;
//	
//	bool operator<(const Teacher& O) const	// ���� < ����
//	{
//		return score < O.score;
//	}
//};
//
//void print_T(Teacher& S) {
//	cout << S.name << "\t" <<S.score<< endl;
//}
//void Original(vector<Teacher>& T) {
//	Teacher Temp;
//
//	Temp.name = "Tom";
//	Temp.score = 99;
//	T.push_back(Temp);
//
//	Temp.name = "Alice";
//	Temp.score = 98;
//	T.push_back(Temp);
//
//	Temp.name = "Bob";
//	Temp.score = 97;
//	T.push_back(Temp);
//
//	Temp.name = "Evil";
//	Temp.score = 90;
//	T.push_back(Temp);
//}
// �ж�����m�Ƿ�С��n
//bool name_sort_less(const Teacher& m, const Teacher& n)
//{
//	return m.name < n.name;
//}
//
// �ж�����m�Ƿ����n
//bool name_sort_greater(const Teacher& m, const Teacher& n)
//{
//	return m.name > n.name;
//}
//
//�жϷ���
//bool name_sort(const Teacher& m, const Teacher& n)
//{
//	return m.score < n.score;
//}
//
//void print_insert(int& temp) {
//	cout << temp<<", ";
//}
//void print_list(double& temp) {
//	cout << temp << ", ";
//}
//
//bool is_Even(double& Ele) {
//	return((int)Ele % 2 == 1);
//}
//
//
//
//double subtriplicate(double x)
//{
//	for (double i = 0.0; i < x / 3.0 + 1; i++)
//	{
//		if (i * i * i - x <0.1 && i * i * i - x>-0.1)
//		{
//			return i;
//		}
//
//	}
//	return 0;
//}
//
//
//bool isbig(const vector<int>& a, const vector<int>& b) {
//	return a > b;
//}
//
//int  main()
//{
//
//	
//
//
//
//
//	/*double subate,sub_value;
//	cin >> subate;
//	sub_value = subtriplicate(subate);
//	cout << sub_value <<setiosflags(2)<< endl;*/
//
//
//	element ����
//	vector<Teacher>vect;
//	Original(vect);
//	cout << "----����ǰ.-----" << endl;
//	for_each(vect.begin(), vect.end(), print_T);
//	cout << "----���շ�������.-----" << endl;
//	sort(vect.begin(), vect.end());
//	for_each(vect.begin(), vect.end(), print_T);
//	cout << "----����nanme��������.-----" << endl;
//	sort(vect.begin(), vect.end(), name_sort_less);
//	for_each(vect.begin(), vect.end(), print_T);
//
//
//	B d;
//	d.print2();
//
//	Student xq;
//	xq.grade = 4;
//	Student* xh = &xq;
//	xh->Goclass();
//	xq.print();
//	xq.print2();
//
//
//	int* p = new int(100);
//	cout << setw(10) << *p << endl;
//	delete p;
//
//	cout << A::B::c << endl;
//	cout << A::d << endl;
//
//	cout << a << endl;
//	cout << sum(111, 222) << endl;
//
//	f(a);
//	cout << a << endl;
//	cout << b << endl;
//
//
//	fstream  f;
//	f.open("2.txt", ios::out | ios::in | ios::trunc);
//
//	д��
//	f << "hello";
//	f << 100;
//	f << 1.234;
//
//	�˿̣��ļ�ָ����ĩβ�����Ҫ����ʲô��������
//	���ԣ�������Ҫ���ļ�ָ���Ƶ���ͷ��Ȼ���ٶ�ȡ
//	f.seekg(0, ios::beg); // ��λ���ļ���ͷ
//
//
//	char buf[100] = { 0 };
//	��ȡ
//	f >> buf;
//	cout << buf << endl;
//
//	f.close();
//
//	std::vector<int> myvector(5);
//
//	int* w = myvector.data();
//
//	*w = 10;
//	++w;
//	*w = 20;
//	w[2] = 100;
//
//	std::cout << "myvector contains:";
//	for (unsigned i = 0; i < myvector.size(); ++i)
//		std::cout << ' ' << myvector[i];
//	std::cout << '\n';
//
//
//
//
//
//
//	std::vector<int> myints;
//	std::cout << "0. size: " << myints.size() << '\n';
//
//	for (int i = 0; i < 10; i++) myints.push_back(i);
//	std::cout << "1. size: " << myints.size() << '\n';
//
//	myints.insert(myints.end(), 10, 100);
//	std::cout << "2. size: " << myints.size() << '\n';
//
//	myints.pop_back();
//	std::cout << "3. size: " << myints.size() << '\n';
//
//	vector<int>myarr(10);
//	for (unsigned j = 0; j < myarr.size(); j++)
//	{
//		myarr.at(j) = j;
//		cout << myarr.at(j) <<"000000000000000"<< "\n";
//	}
//
//
//	vector<int>ch(10);
//	vector<int>::iterator it_ch;
//	for (unsigned int i = 0; i < ch.size(); i++)
//	{
//		ch.at(i) = i;
//
//	}
//	output
//	for_each(ch.begin(), ch.end(), print_ch);
//	it_ch = find(ch.begin(), ch.end(), 2);
//	cout << "����2���±���" << (it_ch - ch.begin()) << endl;
//	cout << "��һ������2���±���" << distance(ch.begin(), it_ch) + 1 << endl;
//	it_ch= find_if(ch.begin(), ch.end(), bind2nd(greater<int>(), 5));	//functional
//	it_ch = find_if(ch.begin(), ch.end(), bind(greater<int>(), std::placeholders::_1, 5));	//functional
//	cout << "��һ������5���±���" << (it_ch - ch.begin()) << endl;
//	cout << "min: " << *min_element(ch.begin(), ch.end()) << endl;
//
//
//	  insert delete swap
//	vector<int>insert;
//	for (int i = 0; i < 10; i++)
//	{
//		insert.push_back(i);
//	}
//
//	insert.insert(insert.begin(), -1);
//	insert.insert(insert.end(), -2);
//
//	vector<int>mv;
//	mv.push_back(-9);
//	mv.push_back(-8);
//
//	insert.insert(insert.end(), mv.begin(), mv.end());
//	for_each(insert.begin(), insert.end(), print_insert);
//
//	insert.swap(mv);
//	cout << endl;
//	for_each(mv.begin(), mv.end(), print_insert);
//	cout << endl;
//	/*while (!insert.empty())
//	{
//		insert.erase(insert.begin());
//		for_each(insert.begin(), insert.end(), print_insert);
//		cout << endl;
//	}*/
//
//
//
//
//
//
//	vector<int>array_2(6);
//	int sum = 0, i = 0;
//
//	vector<int>::reverse_iterator it_a2;	//����һ������������it_a2
//	for (it_a2 = array_2.rbegin(); it_a2 != array_2.rend(); it_a2++)
//	{
//		*it_a2 = ++i;
//		cout << *it_a2;
//	}
//
//	while (!array_2.empty())	//empty�鿴�������Ƿ���Ԫ�أ���Ԫ�ط���true����֮��false
//	{
//		sum += array_2.back();	//lastԪ��
//		array_2.pop_back();		//delete last Ԫ��
//	}
//
//	for (auto it_a2 = array_2.crbegin(); it_a2 != array_2.crend(); it_a2++)
//	{
//		cout << *it_a2 << endl;
//	}
//
//	int array[5] = { 1,2,3,4,5 };
//	vector<int>array_1(array, array + sizeof(array) / sizeof(int));
//	vector<int>::iterator it_array;
//	for (it_array = array_1.begin(); it_array != array_1.end(); it_array++)
//	{
//		cout << *it_array << endl;
//	}
//
//	array_1 = std::vector<int>();
//	for (it_array = array_1.begin(); it_array != array_1.end(); it_array++)
//	{
//		cout << *it_array << "***" << endl;
//	}
//	vector<int>arr;	//����ģ�������arr
//	arr.reserve(2);	//���ô�С
//
//	����
//	arr.push_back(1);
//	arr.push_back(2);
//
//	vector<int>::iterator it;
//	for (it = arr.begin(); it != arr.end(); it++)
//	{
//		cout << *it << "\n" << endl;
//	}
//
//
//	vector<int>arr_1(1, 1);	//����ģ�������arr
//	arr.reserve(2);	//���ô�С
//
//	lsit
//	list<double>mylist;
//	mylist.push_back(11.1);
//	mylist.push_back(12.1);
//	mylist.push_back(13.1);
//	mylist.push_back(14.1);
//
//	int count = mylist.size();
//	for_each(mylist.begin(), mylist.end(), print_list);
//	cout << endl;
//
//	list<double>::iterator it_list;
//	it_list = mylist.begin();
//
//	cout << "third " << *++(++(++it_list)) << endl;
//
//	//pop.back()β��ɾ��--------pop.front()ͷ��ɾ��
//	while (!mylist.empty())
//	{
//		mylist.pop_back();
//		for_each(mylist.begin(), mylist.end(), print_list);
//		cout <<endl;
//	}
//
//	mylist.push_back(11.1);
//	mylist.push_back(12.1);
//	mylist.push_back(13.1);
//	mylist.push_back(14.1);
//	//pop.front()ͷ��ɾ��--Ҫ��erase
//	while (!mylist.empty())
//	{
//		mylist.erase(mylist.begin());
//		for_each(mylist.begin(), mylist.end(), print_list);
//		cout << endl;
//	}
//	list<double>xq_list;
//	xq_list.push_back(11.1);
//	xq_list.push_back(33.3);
//
//	mylist.merge(xq_list);		//�ϲ�֮������Ԫ���Զ�����С��������
//
//	mylist.unique();	//ȥ��
//	for_each(mylist.begin(), mylist.end(), print_list);
//	cout << endl;
//
//	mylist.remove(1.1);		//delete 1.1
//	mylist.remove_if(is_Even);		//delete ��ż��
//	mylist.sort(greater<double>());       //����Ԫ���Զ����Ӵ�С����
//	for_each(mylist.begin(), mylist.end(), print_list);
//	cout << endl;
//
//	map
//	map<int, string>mymap;
//	pair<map<int, string>::iterator, bool>insert_pair;
//	insert_pair = mymap.insert(pair<int, string>(0, "language"));
//	if (insert_pair.second == true)
//	{
//		cout << "insert successful" << endl;
//	}
//	else
//	{
//		cout << "insert fail" << endl;
//	}
//
//
//	mymap.insert(pair<int, string>(0, "language"));		//one-insert
//	mymap.insert(pair<int, string>(1, "math"));
//	mymap.insert(pair<int, string>(2, "english"));
//	mymap.insert(map<int, string>::value_type(3, "physics"));	//two-insert
//	mymap.insert(map<int, string>::value_type(4, "chemistry"));
//	mymap[5] = "biology";										//three-insert array�ķ�ʽ
//	mymap[6] = "PE";
//	mymap[5][3] = '2';
//
//	map<int, string>::iterator it_mymap;
//	pair<map<int, string>::iterator, map<int, string>::iterator> ret;
//	/*Equal_range��������һ��pair��pair�����һ��������Lower_bound���صĵ�������
//	pair����ڶ�����������Upper_bound���صĵ������������������������ȵĻ�����
//	˵��map�в���������ؼ��֣�*/
//	ret = mymap.equal_range(2);
//	cout << ret.first->first << " " << ret.second->second << endl;
//	it_mymap = mymap.find(2);
//	if (it_mymap != mymap.end())
//	{
//		cout << "The value is :" << it_mymap->second << endl;
//	}
//	else
//	{
//		cout << "No vale" << endl;
//	}
//
//	for (it_mymap = mymap.begin(); it_mymap != mymap.end(); it_mymap++)
//	{
//		cout << it_mymap->first << " " << it_mymap->second << endl;
//		cout << it_mymap->second << endl;
//	}
//
//	map--delete
//	it_mymap = mymap.find(0);
//	mymap.erase(it_mymap);		//������ɾ��
//	for (it_mymap = mymap.begin(); it_mymap != mymap.end(); it_mymap++)
//	{
//		cout << it_mymap->first << " " << it_mymap->second << endl;
//		cout << it_mymap->second << endl;
//	}
//
//	mymap.erase(2);			//�ؼ���ɾ��
//	for (it_mymap = mymap.begin(); it_mymap != mymap.end(); it_mymap++)
//	{
//		cout << it_mymap->first << " " << it_mymap->second << endl;
//		cout << it_mymap->second << endl;
//	}
//	����delete--mymap.erase(mymap.begin(),mymap.end())
//
//	queue
//	queue<int>my_queue;
//	my_queue.push(0);
//	my_queue.push(1);
//	while (my_queue.size())
//	{
//		cout << " " << my_queue.front() << endl;
//		my_queue.pop();
//	}
//	������֮�Ͳ������ظ�
//	vector<int>nums;
//	int target_three = 0;
//
//	sort(nums.begin(), nums.end());
//	int n = nums.size();
//	vector<int>goal;
//	if (n<3)
//	{
//		cout << "number less than three!!!" << endl;
//	}
//	one
//	for (unsigned int first = 0; first < nums.size(); first++)
//	{
//		if (first > 0 && nums[first] == nums[first - 1]);	//Ҫ���ϴ�ö�ٵ����ֲ�ͬ
//		{
//			continue;
//		}
//		int target = -nums[first];
//		int third = n - 1;
//	
//
//	}
//
//	
//
//	vector<string>strs{ {"hello"},{"xuqiang"} };
//	for (unsigned int i = 0; i < strs.size(); i++)
//	{
//		cout << "0000000000" << strs[0].size() << endl;
//	}
//
//
//	vector<int>::iterator it_1;
//	for (it_1 = arr_1.begin(); it_1 != arr_1.end(); it_1++)
//	{
//		cout << *it_1 << "\n" << endl;
//	}
//
//	int arr_capacity = arr.capacity();
//	int arr_1_capacity = arr_1.capacity();
//	int arr_size = arr.size();
//	int arr_1_size = arr_1.size();
//	int arr_maxsize = arr.max_size();
//
//	cout << arr_capacity << arr_1_capacity << arr_size << arr_1_size <<"\t"<< arr_maxsize<< endl;
//
//	return 0;
//}
#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
//bool cmp(int a, int b) {
//     return a > b;
//    
//}
int main() {

    map<int, int>asult;
    for (int i = 0; i < nums.size(); i++)
    {
        asult[i] = nums[i];

    }
   
    
    return 0;
}

