# include <iostream >
using namespace std ;

int main ( int argc , char ** argv )
{
// Konstante fuer die Groesse
const int MAX_LEN = 5;

// Definition eines Arrays der Groesse 5
int numbers [ MAX_LEN ] = {1 ,2 ,3 ,4 ,5};

// Berechnung des Durchschnitts
float average = 0;
for (int i = 0; i < MAX_LEN ; i++)
{
average += numbers [i]/( float ) MAX_LEN ;
}

// Ausgabe des Durchschnitts
cout << "Der Durchschnitt ist : " << average ;

return 0;
}