void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);

}

int light_percent = 80;
int alltime = 10;

int passed_time = 0;

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);

  delay( (alltime * light_percent )/ 100);

  digitalWrite(13, LOW);
  
  delay( (alltime * (100 - light_percent) ) / 100);

  passed_time++;
  if( passed_time % 1000 ){
    light_percent += 10;
    if(light_percent > 100) light_percent = 80;
  }
}
