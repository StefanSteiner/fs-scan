#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    cout  << "BEGIN" << endl;
    for (int i = 0; i < argc; ++i)
    {
        cout << "argv[" << i << "] = " << argv[i] << endl;
    }

    const auto* path = getenv("PATH");
    const auto* a = getenv("A");
    const auto* b = getenv("B");

    cout << "PATH=" << (path ? path : "(null)") << endl;
    cout << "A=" << (a ? a : "(null)") << endl;
    cout << "B=" << (b ? b : "(null)") << endl;

    cout << "END" << endl;
    //return EXIT_FAILURE;
    return 5;
}
