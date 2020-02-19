#include <iostream>

#include "helloworld/helloworld"

#include "helloworld-config.h"

int main()
{
  helloworld a;
  std::cout << "main() called" << std::endl;
  std::cout << PACKAGE_TARNAME << " (" << PACKAGE_NAME << ") "
	    << PACKAGE_VERSION << std::endl;
  a.getvalue();
}
