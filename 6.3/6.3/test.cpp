#include <iostream>
using namespace std;

//int main()
//{
//	string s0;
//	string s1("hello world");
//	cout << s1 << endl;
//	//��α���string�����أ�
//	cout << s1.size() << endl;
//	for (int i = 0; i < s1.size(); i++)
//	{
//		s1[i]++;
//	}
//	
//	s1[0]--;//���Ը����±�һ�����޸�string����
//	//�±�+[]
//	for (int i = 0; i < s1.size(); i++)
//	{
//		cout << s1[i] << endl;;
//	}
//	char s3[] = "hello world";
//	s3[1]++;//*(s3+1)
//	s1[1]++;//s1.operator[](1);
//
//	//������--->ָ��
//	string::iterator it = s1.begin();
//	while (it != s1.end())
//	{
//		//д
//		(*it)--;
//		++it;
//	}
//	while (it != s1.end())
//	{
//		//��
//		cout << *it << " ";
//		++it;
//	}
//
//	//��Χfor--�ײ�����õ��������ײ��滻Ϊ������
//	for (auto& ch : s1)
//		for(char& ch: s1)
//	{
//		ch++;
//	}
//	for (char ch : s1)
//	{
//		cout << ch << " ";
//	}
//	//�κ�������֧�ֵ������������÷������Ƶġ�
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
//	//���������㷨�������
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
			cout << "����" << s1.capacity() << endl;
			old = s1.capacity();
		}
	}


	cout << s1.size() << endl;
	cout << s1.capacity() << endl;
	s1.clear();
	//�������ݣ����ڴ�ռ仹��
	cout << s1.size() << endl;
	cout << s1.capacity() << endl;

}