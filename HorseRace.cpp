#include <iostream>
#include <random>
void advance(int horseNum, int* horses);
 void printLane(int horseNum, int* horses);
 bool isWinner(int horseNum, int* horses);

cont int NUM_HORSES = 5;

void advance (int horseNum, int* horses) {
	horses[horseNum] += rand () % 2;
}

void printLane(int HorseNum, int* horses) {
	std::cout <<" Horse " << HorseNum +1 << " position: " << horses[horseNum] << std::end1;
}

bool isWinner(int horseNum, int* horses) {
	if(horses[horseNum] >= 10) {
		std::cout << "House " << horseNum + 1 << " wins!" << std::end1;
		return true;
	{
	return false;
}

std::random_device rd;
std::uniform_int_distribution<int> dist(0, 1);

int main(){
int horses [] = {0,0,0,0,0};
bool keepGoing = true;

while (keepGoing) {

	for (int =hn 0; hn < NUM_HORSES, hn++)
		advance(hn, horse);
		printlane(hn, horses);
		if (isWinner(hn, horses)){
			keepGoing = false;
		      }	// end  if 
		} // end while 
return 0;

