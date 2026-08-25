#include <iostream>
#include <string>
#include <vector>
#include "grid.cpp"
#include "ship.cpp"
using namespace std;

void print_help() {
    cout << "Usage: my_cli [options]\n"
              << "Options:\n"
              << "  -h, --help     Show this help message\n"
              << "  -v, --version  Show application version\n"
              << "  -n, --name     Specify a user name\n";
}

int main(int argc, char* argv[]) {
    // Safely convert raw arguments to a vector of strings
    vector<string> args(argv + 1, argv + argc);

    if (args.empty()) {
        print_help();
        return 0;
    }

    for (size_t i = 0; i < args.size(); ++i) {
        if (args[i] == "-h" || args[i] == "--help") {
            print_help();
            return 0;
        } 
        else if (args[i] == "-v" || args[i] == "--version") {
            cout << "v1.0.0\n";
            return 0;
        } 
        else if (args[i] == "-n" || args[i] == "--name") {
            // Check if the next token exists to prevent out-of-bounds errors
            if (i + 1 < args.size()) {
                string name = args[++i]; // Consume the value
                cout << "Hello, " << name << "!\n";
            } else {
                cerr << "Error: --name requires a value.\n";
                return 1;
            }
        }
        else if (args[i] == "-g") {
            Grid p1(1);
            cout << p1.drawBoard();
        }

        else {
            cerr << "Unknown argument: " << args[i] << "\n";
            print_help();
            return 1;
        }
    }
    return 0;
}
