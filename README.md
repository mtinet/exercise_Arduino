# exercise_Arduino

---
## Gemma
Arduino Gemma 보드 USB드라이버
- Arduino Gemma는 시리얼 통신이 불가능하므로 Serial Port를 통해 스케치 업로드가 되지 않는다.  
- 메뉴 중 tool-programmer-USBtinyISP가 첨부한 Gemma driver를 설치해야만 생기는 것은아니지만 Gemma보드를 USB로 연결 때 장치관리자의 기타장치에 올라오는 Trinket을 정상적으로 사용하기 위해서는 Gemma폴더 안에 있는 Adafruit Industry의 Trinket드라이버를 설치해야만 한다.  
- 프로그램 업로드는 드라이버의 설치가 끝난 후 포트를 따로 선택할 필요없이 tool-board-Arduino Gemma, tool-programmer-USBtinyISP를 선택한 다음 Gemma보드의 리셋 버튼을 눌러 BuiltIn LED가 펄스점멸할때 Arduino IDE의 업로드 버튼을 눌르면 된다.  
- Gemma보드의 내장LED는 1번핀과 연결되어 있다.  
- Gemma보드는 다음과 같은 핀아웃을 포함하고 있다.  
0 - 디지털입출력, 아날로그출력  
1 - 디지털입출력, 아날로그출력  
2 - 디지털입출력, 아날로그입력  
![](https://github.com/mtinet/exercise_Arduino/blob/master/gemma/gemma.png?raw=true)
 
- Arduino Gemma를 테스트 해보기 위한 예제는 다음과 같다.  
[Blink_Gemma.ino](https://github.com/mtinet/exercise_Arduino/blob/master/gemma/Blink_Gemma.ino)

```cpp
int led = 1;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);
  delay(10);              
  digitalWrite(led, LOW); 
  delay(500);             
}
```

- 자세한 내용은 [https://learn.adafruit.com/introducing-gemma/](https://learn.adafruit.com/introducing-gemma/) 에서 확인이 가능하다.

---
## Arduino Examples
- voltOutput.pde - 아두이노보드의 11번 핀을 이용해 0~5볼트까지 올리면서 출력하는 예제  
