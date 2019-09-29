#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <fstream>
using namespace std;

double Function(double x) {
  return sin(x);
}

void WriteToFile(const string &file_path, const vector<pair<double, double>> &vector_pair, const int &width) {
  // ofstream output(file_path);
  ofstream output(file_path);
  cout << fixed << setprecision(2);
  cout << setw(width) << "x" << " |" << setw(width) << "f(x)" << endl;
  cout << "-------------------------\n";

  for(auto &current_pair:vector_pair) {
    //output << current_pair.first << current_pair.second << endl;
    cout << setw(width) << current_pair.first << " |" <<setw(width) << current_pair.second << endl;
  }
}

int main() {

  vector<string> names = {"a", "b", "c"};
  vector<double> numbers = {5, 0.01, 0.000005};

  cout << "Table 1\n";
  cout << "-------------------------\n";
  for (const auto& n : names) {
    cout << n << ' ';
  }
  cout << endl;
  for (const auto& v : numbers) {
    cout << v << ' ';
  }
  cout << endl;



  double a = -3.0;
  double b = 3.0;
  int n = 100;
  double h = (abs(b - a)) / n;
  vector<pair<double, double>> values;
  for (double i = a; i <= b; i += h) {
    values.push_back(make_pair(i, Function(i)));
  }
  cout << "\n\nTable 2\n";
  cout << "-------------------------\n";
  WriteToFile("data/output.txt",values, 8);

  return 0;
}