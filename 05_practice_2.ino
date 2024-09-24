// Pin 7에 LED 연결
const int ledPin = 7;

void setup() {
  // Pin 7을 출력 모드로 설정
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // 1초 동안 LED 켜기
  digitalWrite(ledPin, LOW);
  delay(1000);

  // 1초 동안 LED를 5번 깜빡이기
  for (int i = 0; i < 5; i++) {
    digitalWrite(ledPin, HIGH);   // LED 끄기
    delay(100);                  // 0.1초 대기
    digitalWrite(ledPin, LOW);  // LED 켜기
    delay(100);                  // 0.1초 대기
  }

  // LED 끄기
  digitalWrite(ledPin, HIGH);

  // 무한 루프에 진입하여 종료
  while (1) {
    // 무한루프 상태
  }
}
