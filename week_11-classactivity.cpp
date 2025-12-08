#include <iostream>
#include <cstdlib>
#include <ctime>
#include <sstream>
#include <fstream>
#include <cstring>
using namespace std;

int loadData(const char filename[], int ids[], int scores[], int maxSize);
void printAll(int ids[], int scores[], int size);
void computeStats(int scores[], int size, double &average, int &minScore, int &maxScore);
void computeGradeDistribution(int scores[], int size, int &countA, int &countB, int &countC, int &countD, int &countF);
int pickRandomPassingStudent(int ids[], int scores[], int size);
void saveSummary(const char filename[], int numStudents, double average, int minScore, int maxScore, int countA, int countB, int countC, int countD, int countF);

int main()
{
	int ids[100];
	int scores[100];
	int numStuds = loadData("scores.csv", ids, scores, 100);
	cout<<"Total Number of Students: "<<numStuds<<endl;
	printAll(ids,scores, numStuds);
	double average;
	int minScore, maxScore;
	computeStats(scores,numStuds, average, minScore, maxScore);
	int countA, countB, countC, countD, countF;
	computeGradeDistribution(scores, numStuds, countA, countB, countC, countD, countF);
	int student = pickRandomPassingStudent(ids,scores,numStuds);
	saveSummary("results.csv", numStuds, average, minScore, maxScore, countA, countB, countC, countD, countF);
	cout<<"Average: "<<average<<endl;
	cout<<"Minimum Score "<<minScore<<endl;
	cout<<"Maximum Score "<<maxScore<<endl;
	cout<<"A Count "<<countA<<endl;
	cout<<"B Count "<<countB<<endl;
	cout<<"C Count "<<countC<<endl;
	cout<<"D Count "<<countD<<endl;
	cout<<"F Count "<<countF<<endl;
	cout<<"Random Lucky Student: ID-"<<ids[student]<<" SCORE-"<<scores[student]<<endl;
	cout<<"File created!";
	return 0;
}

int pickRandomPassingStudent(int ids[], int scores[], int size)
{
	int noPass = 0;
	for (int i=0;i<=size-1;i++)
	{
		if(scores[i]>=50) noPass++;
	}
	
	int passedIdx[noPass];
	int count = 0;
	for (int i=0;i<=size-1;i++)
	{
		if(scores[i]>=50)
		{
			passedIdx[count] = i;
			count++;
		}
	}
	
	if(noPass==0)
	{
		return -1;
	}
	srand(time(0));
	int stud = rand() % noPass;
	return passedIdx[stud];
}

void printAll(int ids[], int scores[], int size)
{
	for (int i=0;i<=size-1;i++)
	{
		cout<<"StudentID: "<<ids[i]<<"  Score: "<<scores[i]<<"\n";
	}
}

void computeGradeDistribution(int scores[], int size, int &countA, int &countB, int &countC, int &countD, int &countF)
{
	countA = 0;
	countB = 0;
	countC = 0;
	countD = 0;
	countF = 0;
	for (int i=0;i<=size-1;i++)
	{
		if(scores[i] >= 70)
		{
			countA++;
		}
		else if(scores[i]>=60 && scores[i]<=69)
		{
			countB++;
		}
		else if(scores[i]>=50 && scores[i]<=59)
		{
			countC++;
		}
		else if(scores[i]>=45 && scores[i]<=49)
		{
			countD++;
		}
		else
		{
			countF++;
		}
	}
}

void computeStats(int scores[], int size, double &average, int &minScore, int &maxScore)
{
	double sum = 0.0;
	for (int i=0;i<=size-1;i++)
	{
		if(i==0)
		{
			minScore = scores[i];
			maxScore = scores[i];
		}
		if(minScore>scores[i]) minScore = scores[i];
		if(maxScore<scores[i]) maxScore = scores[i];
		sum += scores[i];
	}
	average = sum/size;
}

void saveSummary(const char filename[], int numStudents, double average, int minScore, int maxScore, int countA, int countB, int countC, int countD, int countF)
{
	ofstream outfile(filename);
	outfile<<"Metric,Value\n";
	outfile<<"Number of Students,"<<numStudents<<endl;
	outfile<<"Average Score,"<<average<<endl;
	outfile<<"Minimum Score,"<<minScore<<endl;
	outfile<<"Maximum Score,"<<maxScore<<endl;
	outfile<<"A Count,"<<countA<<endl;
	outfile<<"B Count,"<<countB<<endl;
	outfile<<"C Count,"<<countC<<endl;
	outfile<<"D Count,"<<countD<<endl;
	outfile<<"F Count,"<<countF<<endl;
	outfile.close();
}

int loadData(const char filename[], int ids[], int scores[], int maxSize)
{
	ifstream infile(filename);
	if(!infile)
	{
		cout<<"Error Loading File!!!";
		return 0;
	}
	string line;
	int index = 0;
    bool firstLine = true; 
    
    while(getline(infile, line) && index < maxSize)
    {
        if (firstLine) 
        {
            firstLine = false; 
            continue;
        }

        stringstream ss(line);
        string segment;
        
        if(getline(ss, segment, ',')) 
        {
            ids[index] = stoi(segment);            
            if(getline(ss, segment)) 
            {
                scores[index] = stoi(segment); 
                index++; 
            }
        }
    }
    infile.close();
    return index;
}