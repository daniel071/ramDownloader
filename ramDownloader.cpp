// includes progress bar for downloading ram
// rick roll user

#include <stdio.h>
#include <unistd.h>
#include <iostream>
#include <string>
using namespace std;

int operating_system()
{
    #ifdef _WIN32
    	return 1;
    #elif _WIN64
    	return 1;
    #elif __APPLE__ || __MACH__
    	return 2;
    #else
    	return 3;
    #endif
}

int main() {
	cout << "What method would you like to use to download RAM?";
	cout << "\nA) CloudRAM 2.0";
	cout << "\nB) CloudRAM 1.1\n";
	string selection;
	cin >> selection;

	cout << "\nHow much RAM would you like to download? (In GB) ";
	cin >> selection;

	cout << "\nPlease wait while this program downloads more RAM...";
	cout << "\n";
	usleep(1000000);

  float progress = 0.0;
  while (progress < 1.00001) {
      int barWidth = 70;

      cout << "[";
      int pos = barWidth * progress;
      for (int i = 0; i < barWidth; ++i) {
          if (i < pos) cout << "=";
          else if (i == pos) cout << ">";
          else cout << " ";
      }
      cout << "] " << int(progress * 100.0) << " %\r";
      cout.flush();

			if (progress > 0.91 && progress != 1) {
				progress = 1;
			} else {
      	progress += static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/0.08));
			}

			usleep(rand() % (20000 - 600000 + 1) + 20000);
  }
  cout << endl;

	cout << "\nDownloading more RAM was successful!";

	int operatingSystem = operating_system();

  switch(operatingSystem) {
    case 1:
      // If on Windows
      system("start https://www.youtube.com/watch?v=dQw4w9WgXcQ");
      break;
    case 2:
      // If on macOS
      system("open https://www.youtube.com/watch?v=dQw4w9WgXcQ");
      break;
    case 3:
      // If on Linux
      system("xdg-open https://www.youtube.com/watch?v=dQw4w9WgXcQ");
      break;
  }

	cout << "\nPress enter to exit...";
	cin.get();

  return 0;
}
