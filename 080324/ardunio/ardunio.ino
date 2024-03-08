int buzzer=2;
int Do = 261;
int Re=294;
int Mi=329;
int Fa=349;
int Sol=392;
int La=440;
int Si=493;
int Do2=523;
int notalar []= {Do,Re,Mi,Sol,La,Si,Do2};

void setup(){
  pinMode(buzzer,OUTPUT);
}
void loop()
{
 int i;
 for(i=0;i< sizeof (notalar)/sizeof(int);i++)
{
  tone (buzzer,notalar[i]);
  delay(500);
  noTone(buzzer);
  delay(50);
}
 noTone(buzzer);
}
