//LDR to MIDI CC
//Based on "little-scale´s" great code!!!! 
//http://little-scale.blogspot.de/2011/09/midi-with-teensy-light-controlled-pitch.html
// code modifieyd by 2kohm stromakustik.de

int jldr;
int nldr;
void setup() {
pinMode(5, INPUT);
}
void loop() {
jldr = analogRead(5);
if(jldr != nldr) {
usbMIDI.sendControlChange(2,jldr/8,11);
nldr = jldr;
delay(1);
}
}
