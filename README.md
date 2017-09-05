# exercise_Arduino

---
### gemma
Arduino gemma 보드 USB드라이버
- Arduino gemma는 시리얼 통신이 불가능하므로 Serial Port를 통해 스케치 업로드가 되지 않는다.  
- 메뉴 중 tool-programmer-USBtinyISP가 첨부한 gemma driver를 설치해야만 생기는 것은아니지만 gemma보드를 USB로 연결 때 장치관리자의 기타장치에 올라오는 Trinket을 사용하기 위해서는 gemma폴더 안에 있는 Adafruit Industry의 Trinket드라이버를 설치해야 한다.  
- 프로그램 업로드는 드라이버의 설치가 끝난 후 tool-programmer-USBtinyISP를 선택한 다음 gemma보드의 리셋 버튼을 눌러 BuiltIn LED가 펄스점멸할때 Arduino IDE의 업로드 버튼을 눌르면 된다.  
- gemma보드의 내장LED는 1번핀과 연결되어 있다.  
- gemma보드는 다음과 같은 핀아웃을 포함하고 있다.  
0 - 디지털입출력, 아날로그출력  
1 - 디지털입출력, 아날로그출력  
2 - 디지털입출력, 아날로그입력  
![](https://github.com/mtinet/exercise_Arduino/blob/master/gemma/gemma.png?raw=true)
 
- 자세한 내용은 [https://learn.adafruit.com/introducing-gemma/](https://learn.adafruit.com/introducing-gemma/) 에서 확인이 가능하다.



---
- voltOutput.pde - 아두이노보드의 11번 핀을 이용해 0~5볼트까지 올리면서 출력하는 예제  
