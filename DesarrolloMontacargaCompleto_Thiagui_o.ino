int pulsador1= 13;
int estadopulsador1;
int estadopulsador2;
int estadopulsador3;       // pulsador piso 1
int pulsador2= 12;        // pulsador piso 2
int pulsador3= 11;        // pulsador piso 3
int sensor0= 10;
int estadosensor0;             // sensor planta baja
int sensor1= 9; 
int estadosensor1;               // sensor primer piso
int sensor2= 8;
int estadosensor2;             // sensor segundo piso
int sensor3= 7; 
int estadosensor3;            // sensor tercer piso
int integradoA= 6;        // entrada al integrado que controla el 7 seg
int integradoB= 5;        // entrada al integrado que controla el 7 seg
int rele1= 8;             // salida al motor, giro der
int rele2= 3;             // salida al motor, giro izq
 
void setup() {
//INPUTS
pinMode(pulsador1,INPUT);
pinMode(pulsador2,INPUT);
pinMode(pulsador3,INPUT);
pinMode(sensor0,INPUT);
pinMode(sensor1,INPUT);
pinMode(sensor2,INPUT);
pinMode(sensor3,INPUT);
//OUTPUTS
pinMode(rele1,OUTPUT);
pinMode(rele2,OUTPUT);
pinMode(integradoA,OUTPUT);
pinMode(integradoB,OUTPUT);

}

void loop() {
//piso 1 con 7 segmentos
estadopulsador1=digitalRead (pulsador1);
if (estadopulsador1==HIGH){
  digitalWrite(rele1,LOW);
  }
  else { 
     digitalWrite(rele1,HIGH);
     }
estadosensor1=digitalRead (sensor1);
  if (estadosensor1==HIGH){
  digitalWrite(rele1,LOW);
  }
  else {
    digitalWrite(rele1,HIGH);
  }
  delay(500);
  digitalWrite(rele2,HIGH);
  digitalWrite(integradoA,HIGH);
  digitalWrite(integradoB,LOW);
  }
  estadosensor0=digitalRead (sensor0);
if (estadosensor0==HIGH){
  digitalWrite(rele2,LOW);
}
else {
  digitalWrite(rele2,HIGH);
}
  digitalWrite(integradoA,LOW);
  digitalWrite(integradoB,LOW);}

//piso 2 con 7 segmentos
if (pulsador2,HIGH){
  digitalWrite(rele1,HIGH);}
if (sensor2,HIGH){
  digitalWrite(rele1,LOW); 
  delay(500);
  digitalWrite(rele2,HIGH);
  digitalWrite(integradoA,LOW);
  digitalWrite(integradoB,HIGH);}
if (sensor0,HIGH){
  digitalWrite(rele2,LOW);
  digitalWrite(integradoA,LOW);
  digitalWrite(integradoB,LOW);}

//piso 3 con 7 segmentos
if (pulsador3,HIGH){
  digitalWrite(rele1,HIGH);}
if (sensor3,HIGH){
  digitalWrite(rele1,LOW); 
  delay(500);
  digitalWrite(rele2,HIGH);
  digitalWrite(integradoA,HIGH);
  digitalWrite(integradoB,HIGH);}
if (sensor0,HIGH){
  digitalWrite(rele2,LOW);
  digitalWrite(integradoA,LOW);
 digitalWrite(integradoB,LOW);}
 */

}
