/*****************************************************************
**                                                              **
**                        Títol:                                **
**          Posar nom representatiu del programa                **
**                                                              **
** NOM:Martin Herranz Cruz                     Data:05/02/2018  **
*****************************************************************/
//****************************INCLUDE*****************************


//***************************VARIABLES****************************
int comptar = 11;
int i = 0;
//*****************************SETUP******************************
void setup()               // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.print("Ara comptare de 0 a ");
  Serial.println(comptar);  
  while(i <= comptar)
  {
   
    Serial.print(i);
     if (i<comptar)
    Serial.print("-");
    i++;
  } 
}
//******************************LOOP******************************


void loop()   // we need this to be here even though its empty
{
}

//****************************FUNCIONS****************************
