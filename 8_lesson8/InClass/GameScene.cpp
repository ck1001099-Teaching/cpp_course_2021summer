#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Object{
public:
	string name;
	int ID;
};

class Scene{
public:
	void Add(Object);
	void Remove(int);
	void DisplayByID(int);
	void Display();
private:
	vector<Object> objects;
	//map<int, Object> objects_map;
	void DisplaySingleObject(Object);
};

int main(){
	Scene scene;

	int cmd;
	while (cin >> cmd){
		if (cmd == -1){
			break;
		} else if (cmd == 0){
			Object obj;
			cin >> obj.name;
			scene.Add(obj);
		} else if (cmd == 1){
			int ID;
			cin >> ID;
			scene.Remove(ID);
		} else if (cmd == 2){
			int ID;
			cin >> ID;
			scene.DisplayByID(ID);
		} else if (cmd == 3){
			scene.Display();
		}
	}

	return 0;
}

void Scene::Add(Object obj){
	if (objects.size() == 0){
		obj.ID = 0;
	} else {
		obj.ID = objects[objects.size()-1].ID + 1;	
	}
	objects.push_back(obj);
	//objects_map[obj.ID] = obj;
}

void Scene::Remove(int ID){
	int index = -1;
	for (int i = 0 ; i < objects.size() ; i++){
		if (objects[i].ID == ID){
			index = i;
			break;
		}
	}
	objects.erase(objects.begin() + index);
	//objects_map.remove(ID);
}

void Scene::DisplayByID(int ID){
	for (int i = 0 ; i < objects.size() ; i++){
		if (objects[i].ID == ID){
			// cout << "ID " << objects[i].ID << ": " << objects[i].name << endl;
			DisplaySingleObject(objects[i]);
			break;
		}
	}
	//cout << "ID " << ID << ": " << objects_map[ID].name << endl;
}

void Scene::Display(){
	for (int i = 0 ; i < objects.size() ; i++){
		// cout << "ID " << objects[i].ID << ": " << objects[i].name << endl;
		// DisplayByID(objects[i].ID);
		DisplaySingleObject(objects[i]);
	}
	// for (map<int, Object>::iterator iter = objects_map.begin() ; iter != objects_map.end() ; iter++){
	// 	//cout << "ID " << iter->first << ": " << (iter->second).name << endl;
	// 	DisplaySingleObject(iter->second);
	// }
}

void Scene::DisplaySingleObject(Object obj){
	cout << "ID " << obj.ID << ": " << obj.name << endl;
}