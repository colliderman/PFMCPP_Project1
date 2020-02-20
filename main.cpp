#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

 write out 10 nouns.
 for each of the 10 nouns, write out 3 actions it might perform, in plain english.
 write out how you'd call that action in pseudo code, in the space between each block comment
 
 If the action requires multiple words, use camelCaseToNameIt
 don't forget the semi-colon after each statement
 
 When you finish, commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].

Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

/*
 example)
 Noun:       arm
 action 1:   the arm extends
 action 2:   the arm flexes
 action 3:   the arm rotates conter-clockwise
 */
arm.extend();
arm.flex();
arm.rotateCounterClockwise(); //demonstrates CamelCase

/*
1)
Noun:     dog
action 1: the dog eats
action 2: the dog sleeps
action 3: the dog chases a car
*/
dog.eat();
dog.sleep();
dog.chaseCar();

/*
2)
Noun:     menuButton
action 1: button is pressed
action 2: button is released
action 3: button is held
*/
menuButton.pressed();
menuButton.released();
menuButton.held();

/*
3)
Noun:     mop
action 1: the mop cleans
action 2: the mop is rung out
action 3: the mop is thrown out
*/
mop.clean();
mop.ringOut();
mop.throwOut();

/*
4)
Noun:     washing machine
action 1: washing machine cycle is set
action 2: washing machine is filling
action 3: washing machine cycle is done
*/
washingMachine.setCycle();
washingMachine.fillWithWater();
washingMachine.chimeDone();

/*
 5)
 Noun:     DAW Transport
 action 1: transport plays
 action 2: transport stops
 action 3: transport loops
 */
transport.play();
transport.stop();
transport.loop();

/*
 6)
 Noun:     Enemy
 action 1: enemy attacks
 action 2: enemy defends
 action 3: enemy loses health
 */
 enemy.attack();
 enemy.defend();
 enemy.decreaseHealth();

/*
 7)
 Noun:     fader
 action 1: fader gets reset to zero
 action 2: fader set to follow automation
 action 3: fader set to vegas mode
 */
fader.jumpToZero();
fader.followAutomation();
fader.vegasModeStart();

/*
 8)
 Noun:      car
 action 1:  drives forward
 action 2:  drives backwards
 action 3:  parks
 */
 car.driveForward();
 car.driveBackwards();
 car.park();

/*
 9)
 Noun:      led
 action 1:  led turns on
 action 2:  led blinks slowly
 action 3:  led blinks quickly
 */
led.on();
led.flashSlow();
led.flashFast();

/*
 10)
 Noun:      clock
 action 1:  sets the minutes
 action 2:  sets the hours
 action 3:  sets the alarm
 */
 clock.setMinutes();
 clock.setHours();
 clock.setAlarm();



#endif

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}


