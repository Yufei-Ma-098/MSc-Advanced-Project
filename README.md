# README for "Tensions Within"

## Abstract
"Tensions Within" is an interactive art installation that offers a unique exploration into the psychological nuances of tension and tranquility. Drawing on theories of suspense, catharsis, and Carl Jung's concept of emotional projection, this project is designed to provide a contemplative space for participants to engage with both their internal and external boundaries.

## Introduction
"Tensions Within" aims to symbolize the delicate balance between human emotions and constraints. The installation features a balloon gently held within an iron wire mesh, representing the perpetual struggle between aspirations and limitations. It seeks to offer an environment where participants can introspect and interact with their emotional states.

## Installation Design and Components
- **Iron Wire Mesh**: Symbolic of life's restraints, offering a stark contrast to the balloon's representation of human hope and potential.
- **Balloon**: Emphasizes adaptability and aspirations, playing a central role in the installation's exploration of emotions.
- **Pneumatic Module**: Facilitates the inflation and deflation of the balloon, mirroring the ebbs and flows of emotional experiences.
- **Control System**: Incorporates an Arduino Uno board and tactile buttons, empowering participants to directly influence the balloon's state and engage in a journey of emotional decision-making.

## Technical Setup
### Air Pump and Valve Control:
- `#define airPumpCont 6`: Number of air pumps used in the installation.
- `int airPumpPin[airPumpCont] = {2, 4, 6, 8, 10, 12}`: Arduino pins for air pump control.
- `int airValvePin[airPumpCont] = {3, 5, 7, 9, 11, 13}`: Pins assigned for air valve control.
- `const int buttonPin = A0`: Button pin for toggling the inflation process.

### Code Functionality:
- **setup()**: Initial setup for the Arduino pins and the default state of the pumps and valves.
- **loop()**: Continuously monitors the button state to control the inflation and deflation of the balloon.

## Theoretical Foundations and Contextual Significance
In "Tensions Within," I've aimed to weave together various artistic theories to create a space for emotional reflection and cathartic experiences. The installation draws comparisons with immersive art experiences like those of Marina Abramović and ties into Kahneman and Tversky's Prospect Theory, offering a nuanced understanding of human emotional and decision-making processes.

## Interaction and Emotional Projection
This installation is designed to evoke a range of emotional responses, from anxiety to excitement, highlighting the complexity of human emotion. These varying interactions provide valuable insights into the dynamics of participatory art and its capacity to resonate deeply with participants.

## Conclusion
"Tensions Within" represents my attempt to blend traditional art concepts with new media, showcasing the potential of participatory art to deeply engage audiences. This project, while a personal exploration in my academic journey, seeks to open doors for further research and innovation in the field of interactive art.
