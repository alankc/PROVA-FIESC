#include "buffer.hpp"

int main()
{
    Buffer<int> b(3);

    b.add(1);
    b.add(2);
    b.add(3);
    b.add(35); //não adiciona, buffer cheio

    auto itens = b.show(); // printa: 1 2 3
    for (auto item : itens)
    {
        cout << item << " ";
    }
    cout << endl;

    int removed;
    if (b.remove(removed)) // remove o 1
        cout << "R " << removed << endl;

    if (b.remove(removed)) // remove o 2
        cout << "R " << removed << endl;

    if (b.remove(removed)) // remove o 3
        cout << "R " << removed << endl;

    if (b.remove(removed)) //Deve dar o erro avisando que o buffer está vazio
        cout << "R " << removed << endl;

    //Deve aparecer apenas o 35
    b.add(35);
    itens = b.show();
    for (auto item : itens)
    {
        cout << item << " ";
    }
    cout << endl;

    return 0;
}