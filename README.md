# exercise_Arduino

---
### gemma
Arduino gemma 보드 USB드라이버
- Arduino gemma는 시리얼 통신이 불가능하므로 Serial Port를 통해 스케치 업로드가 되지 않는다.  
- USBtinyISP가 첨부한 gemma driver를 설치해야만 생기는 것은아니지만 gemma보드를 USB로 연결하면 장치관리자의 기타장치에 올라오는 Trinket을 사용하기 위해서는 함께 첨부된 gemma폴더 안에 있는 드라이버를 설치해야 인식이 된다.
- 따라서 프로그램 업로드는 tool-programmer-USBtinyISP를 선택한 후 gemma보드의 리셋 버튼을 눌러 BuiltIn LED가 점멸할때 Arduino IDE의 업로드 버튼을 눌러서 진행한다.  
 

---
- voltOutput.pde - 아두이노보드의 11번 핀을 이용해 0~5볼트까지 올리면서 출력하는 예제  
