# include <iostream >
using namespace std ;

int main ( int argc , char ** argv )
{
// definition the length of the array
const int MAX_LEN = 5;

// definition of the array
int numbers [ MAX_LEN ] = {1 ,2 ,3 ,4 ,5};

// calculation of the average

float average = 0;
for (int i = 0; i < MAX_LEN ; i++)
{
average += numbers [i]/( float ) MAX_LEN ;
}

// print the average
cout << "The average is : " << average ;

return 0;
}