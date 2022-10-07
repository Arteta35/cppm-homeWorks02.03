
#include <iostream>

struct adress {


    std::string sity = "Default";
    std::string street = "Default";
    int number_house = 0;
    int apartment_number = 0;
    int index = 0;

};

void print_adress(adress& ad) {

    std::cout  << "Город: " << ad.sity << std::endl << "Улица: " << ad.street << std::endl << "Номер дома: " <<
        ad.number_house << std::endl << "Номер квартиры: " << ad.apartment_number << std::endl << "Индекс: " << ad.index;
}


int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");

    adress ad;

    std::cout << std::endl << "Город: ";

    std::cin >> ad.sity;

    std::cout << std::endl << "Улица: ";

    std::cin >> ad.street;

    std::cout << std::endl << "Номер дома: ";

    std::cin >> ad.number_house;

    std::cout << std::endl << "Номер квартиры: ";

    std::cin >> ad.apartment_number;

    std::cout << std::endl << "Индекс: ";

    std::cin >> ad.index;

    std::cout << std::endl;

    print_adress(ad);

    return 0;

}
