// include progress bar for downloading ram
// rick roll user
#include <stdio.h>
#include <unistd.h>
#include <iostream>
#include <string>
using namespace std;

int main() {
	std::cout << "Please wait while this program downloads more RAM...";
	std::cout << "\n\n";
	usleep(1000000);

  float progress = 0.0;
  while (progress < 1.00001) {
      int barWidth = 70;

      std::cout << "[";
      int pos = barWidth * progress;
      for (int i = 0; i < barWidth; ++i) {
          if (i < pos) std::cout << "=";
          else if (i == pos) std::cout << ">";
          else std::cout << " ";
      }
      std::cout << "] " << int(progress * 100.0) << " %\r";
      std::cout.flush();

			if (progress > 0.91 && progress != 1) {
				progress = 1;
			} else {
      	progress += static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/0.08));
			}

			usleep(rand() % (20000 - 600000 + 1) + 20000);
  }
  cout << std::endl;

	cout << "\nDownloading more RAM was successful!";

	cout << "\nPress enter to exit...";
	cin.get();

  return 0;
}
