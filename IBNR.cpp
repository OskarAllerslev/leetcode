#include <iostream>
#include <vector>
#include <iomanip>

class IBNR {
	public: 
		std::vector<double> calculateIBNR(const std::vector<int>& claims, const std::vector<double>& afviklings_fordeling)
		{
			int n = claims.size();
			std::vector<double> ibnr(n,0.0);

			for (int accidentYear = 0; accidentYear < n; ++accidentYear) 
			{
				for (int delay = 1; delay < afviklings_fordeling.size(); ++delay)
				{
					if (accidentYear + delay < n) continue;
					ibnr[accidentYear] += claims[accidentYear] * afviklings_fordeling[delay];
				}
			}
			return ibnr;
		}
};

int main() {
	std::vector<int> claims = {35000,68000,96000,160000,60000};
	std::vector<double> afviklings_fordeling = {0.3,0.4,0.2,0.1};
	IBNR calc;
	std::vector<double> ibnr = calc.calculateIBNR(claims, afviklings_fordeling);

	std::cout << "IBNR pr. accident year:\n";
	for ( size_t i = 0; i < ibnr.size(); ++i)
	{
		std::cout << "År" << 2019 + i << ". " << std::fixed << std::setprecision(2) << ibnr[i];
	}
	return 0;
}

