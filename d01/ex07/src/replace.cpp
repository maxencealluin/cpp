#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>


int	check_args(int ac, char **av)
{
	std::ifstream fs;

	if (ac < 4)
		return 0;
	if (!av[1][0] or !av[2][0] or !av[3][0])
		return 0;
	fs.open(av[1]);
	if (!fs.good())
		return 0;
	return 1;
}

int	main(int ac, char **av)
{
	std::ifstream 	ifs;
	std::ofstream 	ofs;

	if (check_args(ac, av) == 0)
	{
		std::cout << "Invalid arguments." << std::endl;
		return 0;
	}

	std::string 		s1(av[2]);
	std::string 		s2(av[3]);
	std::stringstream 	ss;
	std::string 		content;
	int					findpos = 0;

	ifs.open(av[1]);
	ss << ifs.rdbuf();
	content = ss.str();
	while (true)
	{
		findpos = content.find(s1, findpos);
		if (findpos == -1)
			break;
		content.replace(findpos, s1.length(), s2);
		findpos += s2.length();
	}
	std::string 	filename(av[1]);
	filename += ".REPLACE";
	ofs.open(filename);
	ofs << content;
	ifs.close();
	ofs.close();
	return 1;
}