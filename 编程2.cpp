 #include <iostream>
 2 #include <cstdlib>
 3 #include <windows.h>
 4 #include <string>;
 5 using namespace std;
 6 class Mystring//字符串类
 7 {
 8 private:
 9 	string s1, s2, s3, s;
10 	char fs;
11 	int start, end;
12 public:
13 	Mystring()//构造函数对字符串初始化
14 	{
15 		cout << "请输入字符串:" << endl;
16 		cin >> s1;
17 	}
18 	void connect()//字符串的连接
19 	{
20 		cout << "请输入你要连接的字符串:" << endl;
21 		cin >> s2;
22 		s = s1 + s2;
23 		cout << "连接后的字符串为:" << s << endl;
24 	}
25 	string compare()//字符串的比较
26 	{
27 		if (s1.length() > s2.length())
28 			return s1;
29 		else
30 			return s2;
31 	}
32 	void add() //字符串的增加
33 	{
34 		cout << "对" << s << "进行增加字符操作" << endl;
35 		cin >> s3;
36 		s += s3;
37 		cout << "增加后的字符串为" << s << endl;
38 	}
39 	void delete1()//字符串的删除
40 	{
41 		cout << "请输入你想在第几个字符开始删除:";
42 		cin >> start;
43 		cout << "请输入你想删除第" << start << "个字符之后的几个字符:";
44 		cin >> end;
45 		s.erase(start, end);
46 		cout << "删除后的字符串为:" << s << endl;
47 	}
48 	void change() //改变字符串
49 	{
50 		cout << "你想要改变字符串为:" << endl;
51 		cin >> s;
52 	}
53 	void find() //查找字符串
54 	{
55 		cout << "请输入你想查找的一个字符:";
56 		cin >> fs;
57 		for (int i = 0; i < s.length(); i++)
58 		{
59 			if (fs == s[i])
60 				cout << fs << "在" << s << "第" << i + 1 << "位" << endl;
61 		}
62 	}
63 	void reverse()//字符串反转
64 	{
65 		int num = s.length() / 2;
66 		for (int j = 0, k = (s.length() - 1); j < num; j++, k--)
67 		{
68 			char temp = s[j];
69 			s[j] = s[k];
70 			s[k] = temp;
71 		}
72 		cout << "反转后的字符串为:" << s << endl;
73 	}
74 	void length() //字符串的轴向长度
75 	{
76 		cout << "字符串的轴向长度为:" << s.length() << endl;
77 	}
78 };
79 
80 
81 int main()
82 {
83 	Mystring mystring;
84 	mystring.connect();
85 	cout << "两字符串中长度较大的为:" << mystring.compare() << endl;
86 	mystring.delete1();
87 	mystring.change();
88 	mystring.find();
89 	mystring.reverse();
90 	mystring.length();
91 	system("pause");
92 	return 0;
93 }
