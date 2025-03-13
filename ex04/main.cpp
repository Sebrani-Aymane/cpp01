#include <iostream>

int main(int ac,char **av)
{
	if(ac!=4)
		{
			std::cout << "Usage : <filname> <str1> <str2>"<< std::endl;
		}
	std::string filename = av[1];
    ifstream infile;
    infile.open(a, ios::in);
    if (infile.is_open()) {
        infile.close();
    } else {
        cout << "Unable to open the file "<< a<<std::endl;
    }
    while (std::getline(infile))

}
