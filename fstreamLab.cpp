#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
	ifstream fin("premier_league.csv");
	ofstream fout("result.csv");
	char s [3];
	fin >> s;
	int n = atoi(s);
	string ln;
	getline(fin, line);
	string *name = new string[n];
	int *scopes = new int[n];
	for (int i = 0; i < n; i++) {
		getline(fin, ln);
		int j = 0;
		int scope = 0;
		while (ln[j] != ',')
		{
			name[i] += ln[j];
			j++;
		}
		j++;
		while (j < ln.length()) {
			if (ln[j] > ln[j + 2]) score += 3;
			else if (ln[j] == ln[j + 2]) score += 1;
			j += 4;
		}
		scores[i] = score;
	}
	for (int k = 0; k < n; k++)
	{
		int score = 0, j;
		for (int i = 0; i < n; i++)
		{
			if (scores[i] > score)
			{
				score = scores[i];
				j = i;
			}
		}
		fout << k + 1 << ". " << name[j] << ": " << score << '.'<< endl;
		scores[j] = -1;
	}
	return 0;
}

	ifstream fin("premier_league.csv");
	ofstream fout("result.csv");
	char s [3];
	fin >> s;
	int n = atoi(s);
	string ln;
	getline(fin, ln);
	string *name = new string[n];
	int *scores = new int[n];
	for (int i = 0; i < n; i++) {
		getline(fin, ln);
		int j = 0;
		int score = 0;
		while (ln[j] != ',')
		{
			name[i] += ln[j];
			j++;
		}
		j++;
		while (j < ln.length()) {
			if (ln[j] > ln[j + 2]) score += 3; 
			else if (ln[j] == ln[j + 2]) score += 1;
			j += 4;
		}
		scores[i] = score;
	}
	for (int k = 0; k < n; k++)
	{
		int score = 0, j;
		for (int i = 0; i < n; i++)
		{
			if (scores[i] > score)
			{
				score = scores[i];
				j = i;
			}
		}
		fout << k + 1 << "." << name[j] << ":" << score << '.'<< endl;
		scores[j] = -1;
	}
	return 0;
}

