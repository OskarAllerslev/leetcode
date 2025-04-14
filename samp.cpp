#include <iostream>
#include <random>
#include <vector>
#include <numeric>

int main()
{
	double mean = 100;
	double sd = 200;
	int n = 100000;

	std::random_device rd;
	std::mt19937 gen(rd());
	std::normal_distribution<> dist(mean, sd);

	std::vector<double> sample;
	sample.reserve(n);
	for (int i =0; i < n; i++)
	{
		sample.push_back(dist(gen));
	}
	double sum = std::accumulate(sample.begin(), sample.end(), 0);
	double average = sum / n;

	std::cout << "Mean: " << average << std::endl;

	for (int i =0; i < n; ++i)
	{
		double sample = dist(gen);
		std::cout << "sample " << i+1 << ": " << sample << std::endl;
	}
	return 0;
}

