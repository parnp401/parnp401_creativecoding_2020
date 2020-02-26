# parnp401_creativecoding_2020: Sound & Polygons

Based on the smileys of the previous assignment, I am now adding polygons and sounds. You can watch the final version on Youtube.

## Smiley
The sad face from the previous assignment appears together with a polygone star that goes from one side to the other. The clown honk sound makes it look as if the smiley had a crazy idea or is suprised about something.

![Picture](Polygonface.png)

void ofApp::draw(){
    ofBackground(179, 225, 245);

    ofSetColor(239,208,82);
    ofFill();
    ofDrawCircle(500,400,300);

    ofSetColor(0,0,0);
    ofFill();
    ofDrawCircle(400,300,20);

    ofSetColor(0,0,0);
    ofFill();
    ofDrawCircle(600,300,20);

    ofSetColor(0,0,0);
    ofFill();
    ofDrawCurve(500,400,400,600,600,600,1500,1500);
       
    
}

## Sound ##

I found the sound in the official Youtube Library and it's called: Clown Horn. It's royalty free for Youtube videos.
