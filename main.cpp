#include <iostream>
#include <fstream>
#include <string>
#include <regex>

using namespace std;


#define KEY_GOTO ":跳转:"
#define KEY_OPTION ":选项:"
#define KEY_SAY "->"
#define KEY_DIALOGUE "~"
#define KEY_HORIZONTALLINE "\\-"
#define KEY_GREATERTHAN "\\>"
#define KEY_COLON "\\:"
#define KEY_TILDE "\\~"

string read_file(const string& file_path) {
    string content;
    try {
        ifstream file(file_path);
        if (file.is_open()) {
            string line;
            while (getline(file, line)) {
                content += line + "\n";
            }
            file.close();
        } else {
            throw runtime_error("File not found");
        }
    } catch (const exception& e) {
        content = "Error: " + string(e.what());
    }
    return content;
}

string semantic_segmentation(string file_content) {

}

int main() {
    string content = read_file("example.ds");
    cout << content;
    
    return 0;
}
