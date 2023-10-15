//Write a program to calculate different statistics of the data entered like mean, median etc.using functions.
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

// Function to calculate the mean (average) of the data
double calculateMean(const vector<double>& data) {
    double sum = 0;
	for (const double& value : data) {
        sum += value;
    }
    return sum / data.size();
}

// Function to calculate the median of the data
double calculateMedian(const vector<double>& data) {
    vector<double> sortedData = data;
    sort(sortedData.begin(), sortedData.end());

    int n = sortedData.size();
    if (n % 2 == 0) {
        // If there are an even number of data points, take the average of the middle two
        int middle1 = n / 2 - 1;
        int middle2 = n / 2;
        return (sortedData[middle1] + sortedData[middle2]) / 2.0;
    } else {
        // If there are an odd number of data points, return the middle one
        int middle = n / 2;
        return sortedData[middle];
    }
}

// Function to calculate the mode of the data
vector<double> calculateMode(const vector<double>& data) {
    map<double, int> frequency;
    vector<double> modes;
    int maxFrequency = 0;

    for (const double& value : data) {
        frequency[value]++;
        maxFrequency = max(maxFrequency, frequency[value]);
    }

    for (const auto& pair : frequency) {
        if (pair.second == maxFrequency) {
            modes.push_back(pair.first);
        }
    }

    return modes;
}

int main() {
    int n;
    cout << "Enter the number of data points: ";
    cin >> n;

    vector<double> data(n);

    cout << "Enter the data points: ";
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }

    double mean = calculateMean(data);
    double median = calculateMedian(data);
    vector<double> modes = calculateMode(data);

    cout << "Mean: " << mean << endl;
    cout << "Median: " << median << endl;

    if (modes.size() == 1) {
        cout << "Mode: " << modes[0] << endl;
    } else {
        cout << "Modes: ";
        for (const double& mode : modes) {
            cout << mode << " ";
        }
        cout << endl;
    }

    return 0;
}

