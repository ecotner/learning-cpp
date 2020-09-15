#include <fstream>
using std::ofstream;
#include <ios>
#include <string>
using std::string;

class File {
    private:
    const string _filename;
    ofstream _file;

    public:
    File(const string filename) {
        const string _filename = filename;
        _file.open(filename, std::ios::out);
    }

    void write(string text) {
        _file << text;
    }

    // can specify a _destructor_ to run when object goes out of scope
    ~File() {
        _file.close();
    }
};

int main() {
    File file("some_file.txt");
    file.write("I'm writing some text to this file!\n");
    // don't have to do anything else, the file automatically closes
}