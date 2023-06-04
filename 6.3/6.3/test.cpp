#include <iostream>
using namespace std;

//int main()
//{
//	string s0;
//	string s1("hello world");
//	cout << s1 << endl;
//	//如何遍历string对象呢？
//	cout << s1.size() << endl;
//	for (int i = 0; i < s1.size(); i++)
//	{
//		s1[i]++;
//	}
//	
//	s1[0]--;//可以根据下标一样来修改string对象
//	//下标+[]
//	for (int i = 0; i < s1.size(); i++)
//	{
//		cout << s1[i] << endl;;
//	}
//	char s3[] = "hello world";
//	s3[1]++;//*(s3+1)
//	s1[1]++;//s1.operator[](1);
//
//	//迭代器--->指针
//	string::iterator it = s1.begin();
//	while (it != s1.end())
//	{
//		//写
//		(*it)--;
//		++it;
//	}
//	while (it != s1.end())
//	{
//		//读
//		cout << *it << " ";
//		++it;
//	}
//
//	//范围for--底层就是用迭代器，底层替换为迭代器
//	for (auto& ch : s1)
//		for(char& ch: s1)
//	{
//		ch++;
//	}
//	for (char ch : s1)
//	{
//		cout << ch << " ";
//	}
//	//任何容器都支持迭代器，并且用法是类似的。
//	/*vector<int> v;
//	vector<int>::iterator vit = v.begin();
//	while (vit != v.end())
//	{
//		cout << *vit << endl;
//		++vit;
//	}
//	list<int> lit;
//	list<int>::iterator lit = lit.beign();
//	while (lit != lit.end())
//	{
//		cout << (*lit) << endl;
//		++lit;
//	}*/
//	//迭代器跟算法进行配合
//	reverse(s1.begin(), s1.end());
//	sort(s1.beign(), s1.end());
//}
//
//void Func(const string& s)
//{
//	string::const_iterator it = s.begin();
//	while (it !=s.end())
//	{
//		cout << *it << endl;
//		++it;
//	}
//	string::const_reverse_iterator rit = s.rbegin();
//	auto rit = s.rbegin();
//	while (rit != s.rend())
//	{
//		cout << *rit << endl;
//		++rit;
//	}
//}
//int main()
//{
//	string s1("hello world");
//	string::const_reverse_iterator rit = s1.rbegin();
//	auto rit = s1.rbegin();
//	while (rit != s1.rend())
//	{
//		//(*rit) += 3;
//		cout << *rit << endl;
//		++rit;
//	}
//	cout << endl;
//	cout << s1 << endl;
//	Func(s1);
//}
int main()
{
	string s1("hello woree");
	cout << s1.size() << endl;
	cout << s1.length() << endl;
	cout << s1.max_size() << endl;
	cout << s1.capacity() << endl;

	size_t old = s1.capacity();
	for (size_t i = 0; i < 100; i++)
	{
		s1 += 'x';
		if (old != s1.capacity())
		{
			cout << "扩容" << s1.capacity() << endl;
			old = s1.capacity();
		}
	}


	cout << s1.size() << endl;
	cout << s1.capacity() << endl;
	s1.clear();
	//清理数据，但内存空间还在
	cout << s1.size() << endl;
	cout << s1.capacity() << endl;

}