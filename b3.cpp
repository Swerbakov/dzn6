#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>

void remove_duplicates(std::vector<int>& vec) {
	std::sort(vec.begin(), vec.end());
	vec.erase(std::unique(vec.begin(), vec.end()), vec.end());
}

int main() {
	std::string line;
	std::getline(std::cin, line);

	std::istringstream iss(line);
	std::vector<int> vec;
	int value;
	while (iss >> value) {
		vec.push_back(value);
	}

	remove_duplicates(vec);

	std::cout << "[OUT]: ";
	for (size_t i = 0; i < vec.size(); i++) {
		if (i > 0) std::cout << " ";
		std::cout << vec[i];
	}
	std::cout << std::endl;

	return 0;
}
