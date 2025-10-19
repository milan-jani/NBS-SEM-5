#include <iostream>
#include <cstring>
using namespace std;

struct cartoon
{
    char name[20];
    char channel[20];
};

struct cartoon2
{
    string name;
    string channel;
};

void solve() {
    // cartoon Scoobydoo;
    // strcpy(Scoobydoo.name, "Scooby Doo");
    // strcpy(Scoobydoo.channel, "Cartoon Network");
    // cout << "Size of Scoobydoo: " << sizeof(Scoobydoo) << endl;
    // cout << "Size of cartoon struct: " << sizeof(cartoon) << endl;

    cartoon Tomandjerry;
    strcpy(Tomandjerry.name, "Tom and Jerry");
    strcpy(Tomandjerry.channel, "Cartoon Network");

    cartoon2 Tomandjerry2;
    Tomandjerry2.name = "Tom and Jerry";
    Tomandjerry2.channel = "Cartoon Network";
    cout << "Size of Tomandjerry2: " << sizeof(Tomandjerry2) << endl;
    cout << "Size of cartoon2 struct: " << sizeof(cartoon2) << endl;

    cartoon* ptr = &Tomandjerry;
}

int main() {
    solve();
    return 0;
}
