#include <iostream>

using namespace std;

void getGrades(double g[], const int SIZE)
{
    cout << "Please enter 5 grades:" << endl;
    for(int i = 0; i < SIZE; i++)
    {
        cin >> g[i];
    }
}

double getAverage(double g[], const int SIZE)
{
    double average;
    double total = 0;
    for(int i = 0; i < SIZE; i++)
    {
        total += g[i];
    }
    average = total / SIZE;
    return average;
}


// TODO: Complete function definitions

void countLetterGrades(double g[], const int SIZE, int &numberOfAs,
int &numberOfBs, int &numberOfCs, int &numberOfDs, int &numberOfFs)
{
 
  for(int i = 0; i < SIZE; i++){
    if(g[i] >= 90){
      numberOfAs++;

        
    }
    else if(g[i] >= 80 && g[i] < 90){
      numberOfBs++;

        
    }
    else if(g[i] >= 70 && g[i] < 80){
      numberOfCs++;

        
    }
    else if(g[i] >= 60 && g[i] < 70){
      numberOfDs++;

        
    }
    else if(g[i] < 60){
      numberOfFs++;

        
    }else{
      cout << "Invalid number" << endl;
    }
  }
}


void printData(double average, int numberOfAs, int numberOfBs, int numberOfCs, int numberOfDs, int numberOfFs){
  cout << "Average: " << average << endl;
  cout << "# of A's: " << numberOfAs << endl;
  cout << "# of B's: " << numberOfBs << endl;
  cout << "# of C's: " << numberOfCs << endl;
  cout << "# of D's: " << numberOfDs << endl;
  cout << "# of F's: " << numberOfFs << endl;
}

int main()
{
    const int SIZE = 5;
    double grades[SIZE],
           average;
    int numberOfAs = 0,
        numberOfBs = 0,
        numberOfCs = 0,
        numberOfDs = 0,
        numberOfFs = 0;

    //TODO: Add function calls

  getGrades(grades, SIZE);
  
  average = getAverage(grades, SIZE);

  countLetterGrades(grades, SIZE, numberOfAs,
numberOfBs, numberOfCs, numberOfDs, numberOfFs);
  
  printData(average, numberOfAs, numberOfBs, numberOfCs, numberOfDs, numberOfFs);
  
    return 0;
}
