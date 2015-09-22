cd \
cd glomosim\glomosim\bin
Glomosim config.in
copy *.* C:\glomosim\glomosim\java_gui
cd..
cd java_gui
javac *.java
java GlomoMain