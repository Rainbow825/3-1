#include <iostream>
 2 #include <cstdlib>
 3 #include <windows.h>
 4 #include <string>
 5 using namespace std;
 6 
 7 /*----------------------------------*
 8 15          Class Definition
 9 16 *-----------------------------------*/
10 class Student
11 {
12 private:
13 	string name;
14 	string sex;
15 	string number;
16 	string birthday;
17 	string address;
18 	int Chinese, Math, English, Physic, Biology, Chemistry;
19 public:
20 	Student()//无参构造
21 	{
22 		cout << "请输入学生的姓名,性别,学号,出生日期:" << endl;
23 		cin >> name >> sex >> number >> birthday;
24 	}
25 	Student(string address)//有参构造
26 	{
27 		this->address = address;
28 		cout << "住址:" << address << endl;
29 	}
30 	void out()//输出学生信息
31 	{
32 		cout << "*******学生信息********" << endl;
33 		cout << "姓名:" << name << endl;
34 		cout << "性别:" << sex << endl;
35 		cout << "学号:" << number << endl;
36 		cout << "出生日期" << birthday << endl;
37 	}
38 	Student(const int Chinese, const int Math, const int English, const int Physic, const int Chemistry, const int Biology)//拷贝构造
39 	{
40 		this->Chinese = Chinese;
41 		this->Math = Math;
42 		this->English = English;
43 		this->Physic = Physic;
44 		this->Chemistry = Chemistry;
45 		this->Biology = Biology;
46 		cout << "语文:" << Chinese << endl;
47 		cout << "数学:" << Math << endl;
48 		cout << "英语:" << English << endl;
49 		cout << "物理:" << Physic << endl;
50 		cout << "化学:" << Chemistry << endl;
51 		cout << "生物:" << Biology << endl;
52 	}
53 	void getInformation()//查询某一科目成绩
54 	{
55 		string result;
56 		cout << "请输入你要查询的信息:" << result << endl;
57 		cin >> result;
58 		if (result == "语文")
59 			cout << "语文成绩为:" << Chinese << endl;
60 		if (result == "数学")
61 			cout << "数学成绩为:" << Math << endl;
62 		if (result == "英语")
63 			cout << "英语成绩为:" << English << endl;
64 		if (result == "物理")
65 			cout << "物理成绩为:" << Physic << endl;
66 		if (result == "化学")
67 			cout << "化学成绩为:" << Chemistry << endl;
68 		if (result == "生物")
69 			cout << "生物成绩为:" << Biology << endl;
70 		if (result == "姓名")
71 			cout << name << endl;
72 		if (result == "姓别")
73 			cout << sex << endl;
74 		if (result == "学号")
75 			cout << number << endl;
76 	}
77 	void changeInformation()//更改信息
78 	{
79 		string result1;
80 		cout << "请输入你要修改成绩的科目:" << result1 << endl;
81 		cin >> result1;
82 		if (result1 == "语文")
83 		{
84 			cout << "修改语文成绩为:" << endl;
85 			cin >> Chinese;
86 			cout << "现在的语文成绩为:" << Chinese << endl;
87 		}
88 		if (result1 == "数学")
89 		{
90 			cout << "修改数学成绩为:" << endl;
91 			cin >> Math;
92 			cout << "现在的数学成绩为:" << Math << endl;
93 		}
94 		if (result1 == "英语")
95 		{
96 			cout << "修改英语成绩为:" << endl;
97 			cin >> English;
98 			cout << "现在的英语成绩为:" << English << endl;
99 		}
100 		if (result1 == "物理")
101 		{
102 			cout << "修改物理成绩为:" << endl;
103 			cin >> Physic;
104 			cout << "现在的物理成绩为:" << Physic << endl;
105 		}
106 		if (result1 == "化学")
107 		{
108 			cout << "修改化学成绩为:" << endl;
109 			cin >> Chemistry;
110 			cout << "现在的化学成绩为:" << Chemistry << endl;
111 		}
112 		if (result1 == "生物")
113 		{
114 			cout << "修改生物成绩为:" << endl;
115 			cin >> Biology;
116 			cout << "现在的生物成绩为:" << Biology << endl;
117 		}
118 	}
119 	~Student() {
120 
121 	}
122 };
123 
124 /*----------------------------------*
125 131          Main Function
126 132*-----------------------------------*/
127 int main()
128 {
129 	Student student1;
130 	student1.out();
131 	Student student2("山东师范大学");
132 	Student student3(110, 138, 125, 88, 79, 80);
133 	student3.getInformation();
134 	student1.changeInformation();
135 	system("pause");
136 	return 0;
137 }
