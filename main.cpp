#include <iostream>
#include <random>
#include <ctime>
using namespace std;

int main()
{
	default_random_engine randomEngine(time(NULL));
	unifor_real_distribution<float> attack(0.0f, 1.0f);

    //human
	float humanAttack = 0.6f;
	float humanHealth = 250.0f;
	float humanDamage = 200.0f;

	//ttakkku
	float ttakkkuAttack = 0.2f;
	float ttakkkuHealth = 50.0f;
	float ttakkkuDamage = 40.0f;

	float attackResult;

	int numttakkku;
	int numHumans;

	char turn = "H";

	cout << "*** Humans VS ttakkkus ***\n";

	cout << "Enter the number of humans: ";
	cin >> numHumans;

	cout << "Enter the number of ttakkkus: ";
	cin >> numttakkku;

	while ((numHumans > 0) && (numttakkku > 0)  {


		if (turn == "H") {
			attackResult = attack(randomEngine);
		}else {

		}
	}
}