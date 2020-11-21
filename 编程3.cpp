 #include <iostream>
 2 #include <cstdlib>
 3 #include <cstring>
 4 #include <windows.h>
 5 #include<string>
 6 using namespace std;
 7 
 8 
 9 class Triangle
10 {
11 private:
12 	double x, y, z;
13 
14 public:
15 	Triangle(double a, double b, double c);
16 	int PanDuan();   //判断是否可以构成三角形
17 	void LeiXing();  //判断三角形类型
18 	void Area();     //计算面积
19 	void Length();   //计算周长
20 };
21 
22 Triangle::Triangle(double a, double b, double c) {
23 	x = a;
24 	y = b;
25 	z = c;
26 }
27 
28 int Triangle::PanDuan() {
29 	if ((x + y) > z && (y + z) > x && (x + z) > y) {
30 		return 1;
31 	}
32 	else {
33 		return 0;
34 	}
35 }
36 
37 void Triangle::LeiXing() {
38 	if (x * x + y * y == z * z)
39 	{
40 		cout << "这是一个直角三角形" << endl;
41 	}
42 	else if (x * x + y * y < z * z)
43 	{
44 		cout << "这是一个钝角三角形" << endl;
45 	}
46 	else
47 		cout << "这是一个锐角三角形" << endl;
48 }
49 
50 void Triangle::Area() {
51 	double p;
52 	p = (x + y + z) / 2;
53 	cout << "三角形的面积为：" << sqrt(p * (p - x) * (p - y) * (p - z)) << endl;
54 }
55 
56 void Triangle::Length() {
57 	cout << "三角形的周长为：" << x + y + z << endl;
58 }
59 
60 int main()
61 {
62 	double a, b, c;
63 	cout << "请按照从小到大顺序输入三角形的三条边：" << endl;
64 	cin >> a >> b >> c;
65 	Triangle T(a, b, c);
66 
67 	if (T.PanDuan() == 1) {
68 		cout << "可以构成三角形" << endl;
69 		T.LeiXing();
70 		T.Area();
71 		T.Length();
72 	}
73 	else if (T.PanDuan() == 0) {
74 		cout << "不能构成三角形" << endl;
75 	}
76 
77 
78 }
