void setup() {
  for ( int i = 0; i < 20; i++)
  {
    pinMode(i, OUTPUT);
  }
}

void loop() {

  //1
  for ( int i = 0; i < 20; i++)
  {
    digitalWrite(i, HIGH);
    delay(100);
    digitalWrite(i, LOW);
  }

  //2
  for ( int j = 0; j < 10; j++) {
    for ( int i = 0; i < 10; i++)
    {
      digitalWrite(i * 2, HIGH);
      digitalWrite(i * 2 + 1, LOW);
    }
    delay(100);
    for ( int i = 0; i < 10; i++)
    {
      digitalWrite(i * 2 + 1, HIGH);
      digitalWrite(i * 2, LOW);
    }
    delay(100);
  }
  for ( int i = 0; i < 10; i++)
  {
    digitalWrite(i * 2 + 1, LOW);
  }

  //3
  for ( int t = 0; t < 1000; t++)
  {
    for ( int i = 0; i < 20; i++)
    {
      digitalWrite(i, HIGH);
    }
    delayMicroseconds(t);
    for ( int i = 0; i < 20; i++)
    {
      digitalWrite(i, LOW);
    }
    delayMicroseconds(1000 - t);
  }
  for ( int t = 0; t < 1000; t++)
  {
    for ( int i = 0; i < 20; i++)
    {
      digitalWrite(i, HIGH);
    }
    delayMicroseconds(1000 - t);
    for ( int i = 0; i < 20; i++)
    {
      digitalWrite(i, LOW);
    }
    delayMicroseconds(t);
  }

  for ( int i = 0; i < 10; i++)
  {
    digitalWrite(i * 2 + 1, LOW);
  }
  delay(500);

}
