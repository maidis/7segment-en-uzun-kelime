#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <regex>

using namespace std;

//0123456789abcdefhıjlnoprstuy
std::string ust = " _     _  _     _  _  _  _  _  _     _     _  _                 _  _     _              ";
std::string ort = "| |  | _| _||_||_ |_   ||_||_||_||_ |   _||_ |_ |_|  |  ||   _ | ||_| _ |_ |_ | ||_|    ";
std::string alt = "|_|  ||_  _|  | _||_|  ||_| _|| ||_||_ |_||_ |  | |  ||_||_ | ||_||  |   _||_ |_| _|    ";

// sahip olduğumuz aralıklar:
//0-9: 48-57 A-J: 65-74   L: 76   N-P: 78-80   R-U: 82-85   Y: 89
//           a-j: 97-106  l: 108  n-p: 110-112 r-u: 114-117 y: 121

void cevir(std::string kelime)
{
    kelime = std::regex_replace(kelime, std::regex(R"(ı)"), R"(i)");
    std::transform(kelime.begin(), kelime.end(), kelime.begin(), ::toupper);

    std::cout << kelime << endl;

    std::string kelimeUst = "";
    std::string kelimeOrt = "";
    std::string kelimeAlt = "";
    int a;
    for (char c : kelime)
    {

    if (c >= '0' and c <= '9')
        a = c - 48;
    else if (c >= 'A' and c <= 'F')
        a = c - 55;
    else if (c >= 'H' and c <= 'J')
        a = c - 56;
    else if (c == 'L')
        a = c - 57;
    else if (c >= 'N' and c <= 'P')
        a = c - 58;
    else if (c >= 'R' and c <= 'U')
        a = c - 59;
    else if (c == 'Y')
        a = c - 62;
    else
        continue;

    kelimeUst += ust.substr(a*3, 3);
    kelimeOrt += ort.substr(a*3, 3);
    kelimeAlt += alt.substr(a*3, 3);

    }

    cout << kelimeUst << endl;
    cout << kelimeOrt << endl;
    cout << kelimeAlt << endl;
}


int main()
{
    // bu sadece örnek kullanım içindir.
    // programın gerçekten doğru çıktı
    // verebilmesi için metin dosyasının
    // kurallara uygun en uzun kelimeyi
    // içermesi gerekir.
    std::ifstream infile("kelimeler.txt");

    if (!infile.is_open())
        perror("dosya açılamadı");

    std::string line = "", enUzunKelime = "";

    // 7 segment ekran üzerinde gösterilebilecek harfler
    std::regex rgx("^[abcdefhıjlnoprstuy]+$");
    std::smatch match;

    while (std::getline(infile, line))
    {
        //cout << line << endl;
        if (std::regex_search (line,match,rgx))
        {
            if (line.length() >= enUzunKelime.length())
            {
                enUzunKelime = line;
                cevir(enUzunKelime);
                cout << endl;
            }

        }
    }
    return 0;
}
