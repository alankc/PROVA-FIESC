#include "buffer.hpp"

int main()
{
    Buffer<int> b(3);

    b.add(1);
    b.add(2);
    b.add(3);
    b.add(35);

    auto itens = b.show();
    for (auto item : itens)
    {
        cout << item << " ";
    }
    cout << endl;

    int removed;
    if (b.remove(removed))
        cout << "R " << removed << endl;

    if (b.remove(removed))
        cout << "R " << removed << endl;

    if (b.remove(removed))
        cout << "R " << removed << endl;

    if (b.remove(removed))
        cout << "R " << removed << endl;

    b.add(35);
    itens = b.show();
    for (auto item : itens)
    {
        cout << item << " ";
    }
    cout << endl;

    return 0;
}