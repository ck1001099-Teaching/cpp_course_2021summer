#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

class Book{
public:
    string name;
    string author;
    string ISBN;
    double price;
};

class Database{
public:
    void Add(Book);
    vector<Book> GetBooks();
    void RemoveBook(int);
private:
    map<int, Book> books;
    int currentIndex;
};

class Program{
public:
    Program();
    void Input(string, string, string, double);
    void ListBooks();
    void Close();
    void RemoveBook(int);
private:
    Database db;
};

int main(){
    
    Program program;

    int command;
    bool isEnd = false;

    string name;
    string author;
    string ISBN;
    double price;

    while (!isEnd){
        cout << "請輸入指令: ";
        cin >> command;
        switch (command){
            case 0:
                isEnd = true;
                break;
            case 1:  // Input a new book
                cout << "請輸入書籍資料: ";
                cin >> name >> author >> ISBN >> price;
                program.Input(name, author, ISBN, price);
                break;
            case 2:  // List all books
                cout << "以下為所有書籍資料: " << endl;
                program.ListBooks();
            default:
                break;
        }
    }

    return 0;
}

void Database::Add(Book book){
    books[currentIndex] = book;
    currentIndex = currentIndex + 1;
}

vector<Book> Database::GetBooks(){
    return books;
}

void Database::RemoveBook(int index){
    if (books.find(index) != books.end()){
        books.erase(index);
    }
}

void Program::Input(string name, string author, string ISBN, double price){
    Book b;
    b.name = name;
    b.author = author;
    b.ISBN = ISBN;
    b.price = price;

    db.Add(b);
}

void Program::ListBooks(){
    vector<Book> books = db.GetBooks();
    for (int i = 0 ; i < books.size() ; i++){
        cout << "[第 " << i << " 本書]" << endl;
        cout << "書名：" << books[i].name << endl;
        cout << "作者：" << books[i].author << endl;
        cout << "書號：" << books[i].ISBN << endl;
        cout << "價格：" << books[i].price << endl;
    }
}