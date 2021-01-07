//
// EPITECH PROJECT, 2020
// cpp_rush2_2019
// File description:
// main.cpp
//

#include "Toy.hpp"
#include "Wrap.hpp"
#include "Table.hpp"
#include "ConveyorBelt.hpp"
#include "Elf.hpp"

void test_part1(void)
{
    Object *nounours = new Teddy("OUI");
    Object *licorn = new LittlePony("NON");
    Object **gifts = MyUnitTests();

    std::cout << "**********PART1**********\n";
    std::cout << "Nounours taken: ";
    nounours->isTaken();
    std::cout << "Licorn taken: ";
    licorn->isTaken();
    std::cout << "-------------------------\n";
    std::cout << "Gifts taken:\n";
    for (int i = 0; gifts[i] != nullptr; i++) {
        std::cout << "\t- ";
        gifts[i]->isTaken();
    }
}

void test_part2(void)
{
    Wrap *box = new Box();
    Object *nounours = new Teddy("OUI");
    Object *licorn = new LittlePony("NON");

    std::cout << "**********PART2**********\n";
    std::cout << "Wrap licorn: ";
    box->wrapMeThat(licorn);
    std::cout << "Wrap nounours: ";
    box->wrapMeThat(nounours);
    std::cout << "Box closed\n";
    box->closeMe();
    std::cout << "Take toy: ";
    Object *new_gift = box->getObj();
    std::cout << "Box opened\n";
    box->openMe();
    std::cout << "Take toy: ";
    new_gift = box->getObj();
    std::cout << "Toy taken: ";
    new_gift->isTaken();
}

void test_part3(void)
{
    PapaXmasTable *table = new PapaXmasTable;

    std::cout << "**********PART3**********\n";
    table->put(new Teddy("Rinner"));
    table->put(new Teddy("Bear"));
    table->put(new LittlePony("Rainbow Dash"));
    table->put(new LittlePony("Pinkie pie"));
    table->put(new Teddy("Smith"));
    table->put(new LittlePony("Twilight Sparkle"));
    table->put(new LittlePony("AppleJack"));
    table->put(new LittlePony("Spike"));
    table->put(new LittlePony("Fluttershy"));
    table->put(new Teddy("Boy"));

    std::string *title_tab = table->look();
    std::cout << "\nLook table:\n";
    for (int i = 0; title_tab[i].compare("* end *") != 0; i++)
        std::cout << "\t- " << title_tab[i] << std::endl;

    std::cout << std::endl;
    table->repairTable();

    std::cout << std::endl;
    Object *taken = table->take(3);
    taken->isTaken();
    title_tab = table->look();
    std::cout << "Look table:\n";
    for (int i = 0; title_tab[i].compare("* end *") != 0; i++)
        std::cout << "\t- " << title_tab[i] << std::endl;

    std::cout << std::endl;
    table->put(new Teddy("Chevalier"));
    table->put(new Teddy("Collapse"));
    taken = table->take(5);
    table->repairTable();
    table->put(new Teddy("Boomer"));
}

void test_part4(void)
{
    PapaXmasElf *Robert = new PapaXmasElf(new PapaXmasTable, new PapaXmasConveyorBelt);
    std::string *title_tab;

    std::cout << "**********PART4**********\n";
    Robert->take(new Teddy("Teddy1"));
    Robert->put();
    Robert->take(new Teddy("Teddy2"));
    Robert->put();
    Robert->take(new LittlePony("LittlePony1"));
    Robert->put();
    Robert->take(new LittlePony("LittlePony2"));
    Robert->put();
    Robert->take(new LittlePony("LittlePony3"));
    Robert->put();
    Robert->take(new Teddy("Teddy3"));
    Robert->put();
    Robert->take(new LittlePony("LittlePony4"));
    Robert->put();
    Robert->take(new LittlePony("LittlePony5"));
    Robert->put();

    std::cout << "\n";
    title_tab = Robert->lookTable();
    for (int i = 0; title_tab[i].compare("* end *") != 0; i++)
        std::cout << "\t- " << title_tab[i] << std::endl;

    std::cout << "\n";
    Robert->takeWrap(new GiftPaper);
    Robert->takeTable(2);
    Robert->wrapObj();
    Robert->pressIN();
    Robert->pressOUT();

    std::cout << "\n";
    Robert->takeWrap(new Box);
    Robert->takeTable(1);
    Robert->wrapObj();
    Robert->closeBox();
    Robert->takeInBox();
    Robert->openBox();
    Robert->takeInBox();

    std::cout << "\n";
    Robert->take(new LittlePony("LittlePony3"));

    std::cout << "\n";
    Robert->put();
    Robert->take(new LittlePony("LittlePony6"));
    Robert->put();
    Robert->take(new Teddy("LittlePony4"));
    Robert->put();
    Robert->take(new LittlePony("LittlePony7"));
    Robert->put();
    title_tab = Robert->lookTable();
    for (int i = 0; title_tab[i].compare("* end *") != 0; i++)
        std::cout << "\t- " << title_tab[i] << std::endl;

    std::cout << "\n";
    Robert->take(new LittlePony("LittlePony8"));
    Robert->put();
    title_tab = Robert->lookTable();

    std::cout << "\n";
    Robert->repairTable();
    title_tab = Robert->lookTable();
    if (title_tab[0].compare("* end *") == 0)
        std::cout << "They're nothing on the table\n";
}

int main(int ac, char **av)
{
    if (ac != 2)
        return (84);
    else if (av[1][0] == '1')
        test_part1();
    else if (av[1][0] == '2')
        test_part2();
    else if (av[1][0] == '3')
        test_part3();
    else if (av[1][0] == '4')
        test_part4();
    return 0;
}
