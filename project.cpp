// progect.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int electricity;
	int transport;
	int waste;
	int chosse;
	int c;


	//الوجهة الترحيبية
	cout << "=========================================================" << endl;
	cout << "   Welcome to the program: EcoCalculator & Climate Simulator" << endl;;
	cout << "   Climate Change and Technology Competition 2026" << endl;;
	cout << "about program:\n";
	cout << "This program aims to foster digital and technological awareness." << endl;
	cout << "=========================================================\n" << endl;
	//الكود
	do {
		cout << "what you should" << endl;
		cout << "1.To calculate the carbon footprint" << endl;
		cout << "2.Tips for reducing carbon emissions" << endl;
		cout << "input your chosse" << endl;
		cin >> chosse;
		if (chosse == 1)
		{
			//حساب البصمة الكربونية
			cout << "On the role of technology in addressing climate change and mitigating its impacts.." << endl;
			cout << "Carbon footprint calculation formula = ((electricity * 0.85) + (transport * 0.21) + (waste * 0.5))" << endl;
			cout << "1. Approximately how many kilowatt-hours of electricity do you consume daily? " << endl;
			cin >> electricity;

			cout << "2. How many kilometers do you travel daily in fuel-powered vehicles? " << endl;
			cin >> transport;

			cout << "3. How many kilograms of waste are produced daily? " << endl;
			cin >> waste;
			double totalCO2 = (electricity * 0.85) + (transport * 0.21) + (waste * 0.5);
			cout << "Your estimated total carbon emissions:= " << totalCO2 << " kg CO2 per day.\n";
			cout << "Environmental recommendations and solutions for you:" << endl;
			if (totalCO2 > 10)
			{
				cout << "Your carbon footprint is high! Relying on renewable energy (such as solar panels) is recommended.)." << endl;
				cout << "- Use public or electric transportation to reduce emissions.." << endl;
			}
			else
			{
				cout << "- Your carbon footprint is balanced! Keep conserving resources and increasing green spaces..\n";
			}



		}
		if (chosse == 2)
		{
			// نصايح لتقليل التلوث الكربوني
			cout << "\b Why should you care?" << endl;
			cout << "The world's seven billion people consume varying amounts of the planet's resources \n .According to the United Nations’ predictions, global population could reach 9.7 billion people by 2050," << endl;
			cout << " and over 11 billion by 2100. Growing populations drive up emissions and deplete the planet’s resources. \nIncreased greenhouse gas emissions have a direct impact on global warming." << endl;
			cout << "It accelerates climate change with disastrous effects on our planet. \n All of us can contribute to fighting global warming by making climate - friendly choices in our daily lives. " << endl;
			cout << "\n \b Taken from:https://youth.europa.eu/get-involved/sustainable-development/how-reduce-my-carbon-footprint_en" << endl;
			cout << "\n  \n" << endl;
			cout << "\b Save energy at home" << endl;
			cout << "Much of our electricity and heat are powered by coal, oil and gas.Use less energy by reducing your heating and cooling use, switching to LED light bulbs and energy" << endl;
			cout << "- efficient electric appliances, washing your laundry with cold water, or hanging things to dry instead of using a dryer.Improving your home’s energy efficiency, through better insulation for instance," << endl;
			cout << " or replacing your oil or gas furnace with an electric heat pump can reduce your carbon footprint by up to 900 kilograms of CO2e per year.Get more energy tips for your home here." << endl;
			cout << "\n \b Taken from:https://www.un.org/en/actnow/ten-actions" << endl;

		}
		

		cout << "\n \n whoud you return game 1.yes 2.no" << endl;
		cin >> c;



	} while (c == 1);

	cout << "thanks for use project" << endl;

}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
