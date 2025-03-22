#include <string>
std::string& getRef();

int main()
{
    auto ref{getRef()};

    return 0;
}