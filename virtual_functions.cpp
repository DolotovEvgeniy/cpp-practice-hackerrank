#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person {
public:
    virtual void getdata() =0;
    virtual void putdata() const = 0;
};

class Professor : public Person {
public:
    void getdata() override {
        cin >> name_ >> age_ >> publications_;
        id_ = getId();
    }

    void putdata() const override {
        cout << name_ << " " << age_ << " " << publications_ << " " << id_ << "\n";
    }

private:
    int getId() const {
        static int id = 0;
        id++;
        return id;
    }

    string name_;
    int age_;
    int publications_;
    int id_;
};

class Student : public Person {
public:
    void getdata() override {
        cin >> name_ >> age_;
        for (int i = 0; i < 6; i++) {
            int mark;
            cin >> mark;
            marks_.push_back(mark);
        }
        id_ = getId();
    }

    void putdata() const override {
        int sum = 0;
        for (size_t i = 0; i < marks_.size(); i++) {
            sum += marks_[i];
        }
        cout << name_ << " " << age_ << " " << sum << " " << id_ << "\n";
    }

private:
    int getId() const {
        static int id = 0;
        id++;
        return id;
    }

    string name_;
    int age_;
    vector<int> marks_;
    int id_;
};

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;
}
