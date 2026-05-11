# ResQBeat---HeartRate-Detection-System
ResQBeat is a device that continuously monitors heart rate, classifies it as normal, mild, or critical, and provides instant LED feedback. In critical situations, it automatically alerts doctors or emergency contacts via the cloud, offering an affordable, always-on heart safety solution even if the patient is alone. 

Every year, thousands of people suffer heart emergencies alone, often without timely help. Expensive monitors exist, but not everyone can access them. What if we had an affordable system that could watch over your heart, alerting you and doctors instantly in case of danger?
I wanted to build a real-time, affordable heart monitoring system that can detect emergencies instantly and alert doctors or contacts automatically. This idea became ResQBeat.

 Technologies:
ESP32, Firebase, IoT 
Setting Up the Brain – ESP32

The first step was choosing the heart of the system. 
I used an ESP32-C6 board, which is powerful enough to read sensor data, run simple AI logic, and connect to the cloud. I connected it to my computer and tested it by making a small LED blink—just to make sure it was alive and working.
 
 Bringing the Heart to Life – Sensor & Data
 
Next, I connected a MAX30102 heart rate sensor to the ESP32. 
It reads BPM (beats per minute) from a finger. For my first demo, I wrote a small program to simulate heart rates from normal to critical—this way I could test the whole system even without a real patient.

Teaching the Brain – AI Logic

To make the system smart, I needed it to understand if the heart rate was normal, slightly high, or dangerous.

I collected sample BPM readings and labeled them: Normal (60–100), Mild Risk (101–120), Critical (>120).

I trained a simple Decision Tree model in Python.

Then, I converted the model into if-else rules on the ESP32, so it could decide the LED color instantly based on BPM.

Now, the ESP32 wasn’t just reading data—it could think and react.

 Connecting to the World – Firebase
 
I wanted the system to alert doctors even if the patient was alone. So, I set up a Firebase Realtime Database. The ESP32 sent BPM readings over Wi-Fi, updating the cloud in real-time.

I added Firebase Cloud Functions:

If BPM was critical → send SMS/email to the doctor or emergency contact

If BPM was mild → only the LED warning lights up

Suddenly, my system could watch over a patient remotely, just like a mini hospital assistant.
 
 Giving Instant Feedback – LED Alerts
While cloud alerts were important, the patient needed instant visual feedback.
🟢 Green LED = Safe
🟡 Yellow LED = Mild Risk
🔴 Red LED = Critical

Watching the LEDs change color as the heart rate moved from normal → mild → critical was very satisfying—it was like the heart was speaking.

 Making it Visible – Dashboard
I built a simple web dashboard using HTML/CSS/JS connected to Firebase. On the dashboard, I could see:
Patient’s name
Current BPM
Last alert
It updated in real-time, showing exactly what was happening with the patient’s heart. My system was now fully observable, anywhere in the world.

 Testing the System
Finally, I tested ResQBeat by simulating heart rate changes:
BPM gradually increased from normal → mild → critical
LEDs changed color correctly
Firebase updated live
Alerts triggered for critical BPM
 
Conclusion
Building ResQBeat was more than coding or connecting sensors—it was creating a system that could save lives. Step by step, I brought together hardware, AI, cloud, and visualization to make an affordable, real-time heart monitoring system that works even when no one is around.





