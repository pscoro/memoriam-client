#include <iostream>

#include <Common.hpp>

int main(int argc, int** argv) {
    if (argc < 2) {
    // report version
    // std::cout << argv[0] << " Version " << Memoriam_Client_VERSION_MAJOR << "."
    //           << Memoriam_Client_VERSION_MINOR << std::endl;
    // std::cout << "Usage: " << argv[0] << " number" << std::endl;

    Vec2D test = Vec2D(1, 2);
    std::cout << test.getY() << " " << test.getX() << std::endl;
	int i = 0;
	while (true) {
		std::cin >> i;
	}
    return 1;
  }
}