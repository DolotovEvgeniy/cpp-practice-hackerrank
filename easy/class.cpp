#include <iostream>
#include <sstream>
using namespace std;

class Student {
public:
    void set_age(int age) {
        age_ = age;
    }

    void set_standard(int standard) {
        standard_ = standard;
    }

    void set_first_name(const string first_name) {
        first_name_ = first_name;
    }

    void set_last_name(const string last_name) {
        last_name_ = last_name;
    }

    int get_age() const {
        return age_;
    }

    int get_standard() const {
        return standard_;
    }

    const string& get_first_name() const {
        return first_name_;
    }

    const string& get_last_name() const {
        return last_name_;
    }

    string to_string() const {
        stringstream ss;
        ss << age_ << "," << first_name_ << "," << last_name_ << "," << standard_;
        return ss.str();
    }
private:
    int age_;
    string first_name_;
    string last_name_;
    int standard_;
};

int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}
