 #include <iostream>
 2 #include <cstdlib>
 3 #include <windows.h>
 4 #include <string>;
 5 using namespace std;
 6 class Mystring//�ַ�����
 7 {
 8 private:
 9 	string s1, s2, s3, s;
10 	char fs;
11 	int start, end;
12 public:
13 	Mystring()//���캯�����ַ�����ʼ��
14 	{
15 		cout << "�������ַ���:" << endl;
16 		cin >> s1;
17 	}
18 	void connect()//�ַ���������
19 	{
20 		cout << "��������Ҫ���ӵ��ַ���:" << endl;
21 		cin >> s2;
22 		s = s1 + s2;
23 		cout << "���Ӻ���ַ���Ϊ:" << s << endl;
24 	}
25 	string compare()//�ַ����ıȽ�
26 	{
27 		if (s1.length() > s2.length())
28 			return s1;
29 		else
30 			return s2;
31 	}
32 	void add() //�ַ���������
33 	{
34 		cout << "��" << s << "���������ַ�����" << endl;
35 		cin >> s3;
36 		s += s3;
37 		cout << "���Ӻ���ַ���Ϊ" << s << endl;
38 	}
39 	void delete1()//�ַ�����ɾ��
40 	{
41 		cout << "�����������ڵڼ����ַ���ʼɾ��:";
42 		cin >> start;
43 		cout << "����������ɾ����" << start << "���ַ�֮��ļ����ַ�:";
44 		cin >> end;
45 		s.erase(start, end);
46 		cout << "ɾ������ַ���Ϊ:" << s << endl;
47 	}
48 	void change() //�ı��ַ���
49 	{
50 		cout << "����Ҫ�ı��ַ���Ϊ:" << endl;
51 		cin >> s;
52 	}
53 	void find() //�����ַ���
54 	{
55 		cout << "������������ҵ�һ���ַ�:";
56 		cin >> fs;
57 		for (int i = 0; i < s.length(); i++)
58 		{
59 			if (fs == s[i])
60 				cout << fs << "��" << s << "��" << i + 1 << "λ" << endl;
61 		}
62 	}
63 	void reverse()//�ַ�����ת
64 	{
65 		int num = s.length() / 2;
66 		for (int j = 0, k = (s.length() - 1); j < num; j++, k--)
67 		{
68 			char temp = s[j];
69 			s[j] = s[k];
70 			s[k] = temp;
71 		}
72 		cout << "��ת����ַ���Ϊ:" << s << endl;
73 	}
74 	void length() //�ַ��������򳤶�
75 	{
76 		cout << "�ַ��������򳤶�Ϊ:" << s.length() << endl;
77 	}
78 };
79 
80 
81 int main()
82 {
83 	Mystring mystring;
84 	mystring.connect();
85 	cout << "���ַ����г��Ƚϴ��Ϊ:" << mystring.compare() << endl;
86 	mystring.delete1();
87 	mystring.change();
88 	mystring.find();
89 	mystring.reverse();
90 	mystring.length();
91 	system("pause");
92 	return 0;
93 }
