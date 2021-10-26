#include <CapacitiveSensor.h>
 
#define speaker_pin 13
#define common_pin 2 
#define sensitivity 75
#define duration 600
#define value_offset 10000

#define freq_C  523
#define freq_Cs 554
#define freq_D  587
#define freq_Ds 622
#define freq_E  659
#define freq_F  698
#define freq_Fs 740
#define freq_G  784
#define freq_Gs 831
#define freq_A  880
#define freq_As 932
#define freq_B  988

CapacitiveSensor key_C = CapacitiveSensor(common_pin,3);        
CapacitiveSensor key_Cs = CapacitiveSensor(common_pin,4);         
CapacitiveSensor key_D = CapacitiveSensor(common_pin,5);     
CapacitiveSensor key_Ds = CapacitiveSensor(common_pin,6);     
CapacitiveSensor key_E = CapacitiveSensor(common_pin,7);      
CapacitiveSensor key_F = CapacitiveSensor(common_pin,8);         
CapacitiveSensor key_Fs = CapacitiveSensor(common_pin,9);  
CapacitiveSensor key_G = CapacitiveSensor(common_pin,10);    
CapacitiveSensor key_Gs = CapacitiveSensor(common_pin,11);         
CapacitiveSensor key_A = CapacitiveSensor(common_pin,14);  
CapacitiveSensor key_As = CapacitiveSensor(common_pin,15);        
CapacitiveSensor key_B = CapacitiveSensor(common_pin,16);    

void setup(){
  key_C.set_CS_AutocaL_Millis(0xFFFFFFFF); 
  Serial.begin(9600);
}

void loop(){
  long valueC = key_C.capacitiveSensor(sensitivity);
  long valueCs = key_Cs.capacitiveSensor(sensitivity);
  long valueD = key_D.capacitiveSensor(sensitivity);
  long valueDs = key_Ds.capacitiveSensor(sensitivity);
  long valueE = key_E.capacitiveSensor(sensitivity);
  long valueF = key_F.capacitiveSensor(sensitivity);
  long valueFs = key_Fs.capacitiveSensor(sensitivity);
  long valueG = key_G.capacitiveSensor(sensitivity);
  long valueGs = key_Gs.capacitiveSensor(sensitivity);
  long valueA = key_A.capacitiveSensor(sensitivity);
  long valueAs = key_As.capacitiveSensor(sensitivity);
  long valueB = key_B.capacitiveSensor(sensitivity);
  
//  long start = millis();
//  Serial.print(millis() - start);
//  Serial.print("\t");
//  Serial.print(valueC);
//  Serial.print("\t");
//  Serial.print(valueCs);
//  Serial.print("\t");
//  Serial.print(valueD);
//  Serial.print("\t");
//  Serial.print(valueDs);
//  Serial.print("\t");
//  Serial.print(valueE);
//  Serial.print("\t");
//  Serial.print(valueF);
//  Serial.print("\t");
//  Serial.print(valueFs);
//  Serial.print("\t");
//  Serial.print(valueG);
//  Serial.print("\t");
//  Serial.print(valueGs);
//  Serial.print("\t");
//  Serial.print(valueA);
//  Serial.print("\t");
//  Serial.print(valueAs);
//  Serial.print("\t");
//  Serial.print(valueB);
//  Serial.print("\n\n");
  
  if(valueC > value_offset){
    tone(speaker_pin,freq_C,duration);
  }
  if(valueCs > value_offset){
    tone(speaker_pin,freq_Cs,duration);
  }
  if(valueD > value_offset){
    tone(speaker_pin,freq_D,duration);
  }
  if(valueDs > value_offset){
    tone(speaker_pin,freq_Ds,duration);
  }
  if(valueE > value_offset){
    tone(speaker_pin,freq_E,duration);
  }
  if(valueF > value_offset){
    tone(speaker_pin,freq_F,duration);
  }
  if(valueFs > value_offset){
    tone(speaker_pin,freq_Fs,duration);
  }
  if(valueG > value_offset){
    tone(speaker_pin,freq_G,duration);
  }
  if(valueGs > value_offset){
    tone(speaker_pin,freq_Gs,duration);
  }
  if(valueA > value_offset){
    tone(speaker_pin,freq_A,duration);
  }
  if(valueAs > value_offset){
    tone(speaker_pin,freq_As,duration);
  }
  if(valueB > value_offset){
    tone(speaker_pin,freq_B,duration);
  }
  else{
    //no need for anything  
  }

  delay(0);
}
