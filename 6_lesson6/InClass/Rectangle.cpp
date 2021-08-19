#include <iostream>
using namespace std;

// 建立一個長方形 (Rectangle)類別，其資料成員與成員函數如下：
// 定義private資料成員length與width，分別存放長方形的長和寬。
// 定義public成員函數setLength與getLength，用來設定與取得length。
// 定義public成員函數setWidth與getWidth，用來設定與取得width 。
// 定義public成員函數perimeter與area，分別用來計算長方形的周長與面積。

/* implement */
class Rectangle{
public:
	void setLength(int);
	int getLength();
	void setWidth(int w){ width = w; }
	int getWidth(){ return width; }
	int perimeter(){ return (length + width) * 2; }
	int area(){ return length * width; }
private:
	int length;
	int width;
};

int main(){
	Rectangle rect;
	int l, w;
	cin >> l >> w;
	rect.setLength(l);
	rect.setWidth(w);
	cout << "Perimeter: " << rect.perimeter() << endl;
	cout << "Area: " << rect.area() << endl;
	return 0;
}

void Rectangle::setLength(int l){
	length = l;
}

int Rectangle::getLength(){
	return length;
}