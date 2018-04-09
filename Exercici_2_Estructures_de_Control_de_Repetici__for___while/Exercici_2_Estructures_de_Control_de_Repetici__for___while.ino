/*****************************************************************
**                                                              **
**                        Títol:                                **
**          Posar nom representatiu del programa                **
**                                                              **
** NOM:Martin Herranz Cruz                     Data:29/01/2018  **
*****************************************************************/
//****************************INCLUDE*****************************


//***************************VARIABLES****************************
int comptar = 11;
//*****************************SETUP******************************

void setup() {                 //Configura el final de salida
  Serial.begin(9600);
  Serial.print("ara comptare de 0 a ");
  Serial.println(comptar);
  for (int i=0; i <= comptar; i++)
  {
    Serial.print(i);
     if (i<comptar)
    Serial.print("-");
    
  }
if (comptar==11)
{
  Serial.print(" ");
  }
  }



//******************************LOOP******************************

void loop() {                 //Inicia el bucle del programa


}

//****************************FUNCIONS****************************
