// Overlord.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

void greeting();
string GetTextFromUser(string x);
int GetNumbersFromUser(string x);


int main()
{
	string in;
	int in2;

	greeting();
	cout << "\n\nThe year is 1944. D-Day is tomorrow. You are currently 40,000ft above a small french town,\nwhich happens to be under nazi control. With the 29th Infantry Regiment, you are tasked with taking \nout the radio tower built at the church within the town.\nGood Luck and Godspeed, Lieutenant\n";
	cout << "\n\nYour Ears are ringing, your head feels like you hit a brick wall at full speed head on.\nYou look around and see dozens of crashed planes setting the forest on fire. You see no other survivors. \nIn the distance, you hear someone approaching and what sounds like german.\n";
	cout << "Do you fight or do you hide?\n>>";
	cin >> in;

	in = GetTextFromUser(in);
	if (in == "FIGHT") {
		cout << "\nYou let out a mighty battle cry and charge head on into the fray. You end up running into a squad of ten Nazi soldiers. But hey, at least you went out swingin.";
		cout << "\nGAME OVER\n\n";
	}
	else if (in == "HIDE") {
		cout << "\nYou quickly dive into some nearby brush and go dead quiet. 15 pairs of german boots walk right around you, poking at bodies to make sure there dead. \nBut you notice something odd, a group of 3 Nazis seem to be gathering bodies and loading them onto a truck. Maybe gathering their wounded?";
		cout << "\nAfter those Nazi scum move past your position you move to the top of a nearby hill to get a better layout of the town. It is as follows:\nTo the North, the church. Looming from the steeple is a large radio tower.\nTo the South, a large gate guarded by 4 heavily armed guards and 2 Trucks.\nTo th East, all you see is dense forest pressed against the town's wall.\nTo the West, there is a small river that runs near the wall of the town. Its looks as if there might be some run off from an old sewer system.";
		cout << "\n\nWhich side of the town would you like to inspect?\n>>";
		cin >> in;

		in = GetTextFromUser(in);
		if (in == "NORTH")
		{
			cout << "As you come up on the North side of the town, you realize you can climb over the wall using your rope.\nYou toss it on over, make sure you have a good grip and \nstart climbing. Once on top though, you begin to lose balance, and fall backwards into the town. Congratulations, you just fell right into the middle of a Nazi patrol, have fun being a test subject!";
			cout << "\nGAME OVER";
		}
		else if (in == "SOUTH")
		{
			cout << "While trying to get a closer look to see if you can sneak past the guards, you feel the muzzle of a barrel on the back of your head. Looks like one of them took a bathroom break and, as usual, your timing is impecible.";
			cout << "\nGAME OVER";
		}
		else if (in == "EAST")
		{
			cout << "You move to the East side of the town. It is almost unnaturally dark here, and you get the feeling that something is watching you.\nOut of nowhere, you are surrounded by a group of stitched together dog carcasses. There mouths are drooling and there eyes are blood red. You didn't last long.";
			cout << "\nGAME OVER";
		}
		else if (in == "WEST")
		{
			cout << "\n\nYou sneak your way to the West side of the town wall. The wall towers above you, but at the base you see an old rusted sewer gate. It smells awful but looks like a good way to sneak into town undetected.";
			cout << "\nSneak through the sewers? (Yes or No)\n>>";
			cin >> in;

			in = GetTextFromUser(in);
			if (in == "NO") {
				cout << "You here a rustling behind you in the bushes. Suddenly, there's 10 barrels pointed \nat you coming from all directions. A man in uniform with many medals approaches \nsaying, 'Denken Sie daran, sich mit Ihrem Mitreisenden in den Abwasserkanälen anzuschließen, hm? \nJust as he is about to call open fire, you dive head first into the sewer gate and run as deep into maze";
			}
			else if (in == "YES") {
				cout << "You pull off the grate and crawl into the sewer, making sure to put the grate back on to avoid suspicion";
				cout << "With only your torch and your compass, you navigate to where the area below the \nchurch should be, but as you approach you hear what can only be described as inhuman moans of pain. \nYou find a grate that offers a view into the church basement. You look through and see that the graves \ninside this churches basement have been turned into what look like prison cells. You also see two men in lab coats, \ndiscussing in german and taking notes as they observe \nwhatever is in the cage in front of them. They walk back down a hallway after a short time";
				cout << "\nDo you push on and fufill your mission, despite the creepiness of this whole thing, OR do you wuss out and run back out of the sewer? (PushOn OR WussOut)\n>>";
				cin >> in;

				in = GetTextFromUser(in);
				if (in == "PUSHON") {
					cout << "you crawl out the sewer onto a shockingly clean floor, almost like a labratory.\n As you sneak your way across the room, you hear a loud grunt from the cage to your right. With a quick glance, \nyou see what looks like a burned animal crouched over... is that a human corpse it's eating?! With the sudden urge to \nvomit consuming you, you run to the end of the room and turn the corner, letting out what \nlittle breakfast you had left in you.";
					cout << "\nAfter you finish emptying your stomach, you hear the familiar sound of radio chatter coming from down the hall.\n You push onward, and find a small two man radio room. Why would the Nazis take a whole church just \nfor a small radio station? This makes no sense.";
					cout << "\nSuddenly, you hear boots approaching from deeper in the cavern. You quickly duck behind a corner and wait for them to pass.\nIt is a group of 4 Nazi Soldiers wheeling a cart of chopped up corpses. This is just getting stranger by the minute.";
					cout << "\nDo you push onward or do you place your cahrges around the radio room and run like hell? (PushOnward OR PlaceCharges)\n>>";
					cin >> in;

					in = GetTextFromUser(in);
					if (in == "PLACECHARGES") {
						cout << "You quietly adn quickly palce your charges around the outside of the radio room. \nYou set the timer for 5 minutes and begin dashing back to the sewer grate. Once outside again, you get back to the \ntop of the hill and watch as the church tower and every Nazi under it get buried \nwith whatever lay beneath that church.";
						cout << "\nTHE END... ? Thanks for playing!";
					}
					else if (in == "PUSHONWARD") {
						cout << "You move further into the maze that is this underground base. As you move deeper \nyou find a lab built around an ancient well filled with bubbling black liquid. You look around and see dozens \nof corpses strapped to table or hanging in large canvas sacks. \nAnd what's that?! It looks like some of them.. are alive!!! Feeling a wave of nausea hit you again, you stumble into a back room filled with \ntv screens, control panels, and one very big red button protected by a 0-9 key pad. Above the button it says 'Selbstzerstörung' in big letters.";
						cout << "\nOn the ground you find a piece of scrap paper with the words 'eins drei drei sieben'.";
						cout << "\nAn alarm starts to blare, your only hope of getting out of here is pushing that button. But what could this passcode possibly be?!";
						cout << "\n\nBeging guessing the passcode, one digit at a time (Use the actual numbers, not the word)\n>>";
						cin >> in;

						in2 = GetNumbersFromUser(in);
						if (in2 = 1) {
							cout << "Phew! One green light down, 3 to go!\n>>";
							cin >> in;
							in2 = GetNumbersFromUser(in);

							if (in2 = 3) {
								cout << "Just 2 more!\n>>";
								cin >> in;
								in2 = GetNumbersFromUser(in);

								if (in2 = 3) {
									cout << "Yes! just one more!\n>>";
									cin >> in;
									in2 = GetNumbersFromUser(in);

									if (in2 = 7) {
										cout << "HUZZAH! The case around the button opens up, you slam that baby down, and you run like \nhell the way you came out. In the chaos, no one seems to notice you. You escape undetected and \nnearly unscathed. \n\nCongrats! Thanks for Playing!";
									}
								}
							}
						}
						else if (in2 != 1){
							cout << "You are caught red handed trying to destroy the Reich's glorius conquest and are turned into an unwilling participant on it quest for 'greatness'.";
							cout << "\nGAME OVER";
						}
					}
				}
				else if (in == "WUSSOUT") {
					cout << "\nYou run, scared out of your mind, back to the sewer grate you came from only to \nfind that it is stuck! You punch, kick, body slam the thing until your bruised on almost every \ninch of your body. You begin losing your mind with the moans echoing throughout the sewers, and just as you drift off in \ninsane bliss, a dark figure rushes you from the dark. You never saw what it was but your head \nsnapped back with a \nloud crack. You have died.";
					cout << "\nGAME OVER\n\n";
				}

			}
		}
	}



	return 0;
}

string GetTextFromUser(string x) {
	for (int i = 0; i < x.length(); ++i) {
		x[i] = toupper(x[i]);
	}
	return x;
}

int GetNumbersFromUser(string x) {
	int num_input = std::stoi(x);
	return num_input;
}

void greeting() {
	cout << "Welcome, Brave Soldier, to \n\n";
	cout << "\n     OOOOOOOOO     VVVVVVVV           VVVVVVVVEEEEEEEEEEEEEEEEEEEEEERRRRRRRRRRRRRRRRR   LLLLLLLLLLL                  OOOOOOOOO     RRRRRRRRRRRRRRRRR   DDDDDDDDDDDDD        \n   OO:::::::::OO   V::::::V           V::::::VE::::::::::::::::::::ER::::::::::::::::R  L:::::::::L                OO:::::::::OO   R::::::::::::::::R  D::::::::::::DDD     \n OO:::::::::::::OO V::::::V           V::::::VE::::::::::::::::::::ER::::::RRRRRR:::::R L:::::::::L              OO:::::::::::::OO R::::::RRRRRR:::::R D:::::::::::::::DD   \nO:::::::OOO:::::::OV::::::V           V::::::VEE::::::EEEEEEEEE::::ERR:::::R     R:::::RLL:::::::LL             O:::::::OOO:::::::ORR:::::R     R:::::RDDD:::::DDDDD:::::D  \nO::::::O   O::::::O V:::::V           V:::::V   E:::::E       EEEEEE  R::::R     R:::::R  L:::::L               O::::::O   O::::::O  R::::R     R:::::R  D:::::D    D:::::D \nO:::::O     O:::::O  V:::::V         V:::::V    E:::::E               R::::R     R:::::R  L:::::L               O:::::O     O:::::O  R::::R     R:::::R  D:::::D     D:::::D\nO:::::O     O:::::O   V:::::V       V:::::V     E::::::EEEEEEEEEE     R::::RRRRRR:::::R   L:::::L               O:::::O     O:::::O  R::::RRRRRR:::::R   D:::::D     D:::::D\nO:::::O     O:::::O    V:::::V     V:::::V      E:::::::::::::::E     R:::::::::::::RR    L:::::L               O:::::O     O:::::O  R:::::::::::::RR    D:::::D     D:::::D\nO:::::O     O:::::O     V:::::V   V:::::V       E:::::::::::::::E     R::::RRRRRR:::::R   L:::::L               O:::::O     O:::::O  R::::RRRRRR:::::R   D:::::D     D:::::D\nO:::::O     O:::::O      V:::::V V:::::V        E::::::EEEEEEEEEE     R::::R     R:::::R  L:::::L               O:::::O     O:::::O  R::::R     R:::::R  D:::::D     D:::::D\nO:::::O     O:::::O       V:::::V:::::V         E:::::E               R::::R     R:::::R  L:::::L               O:::::O     O:::::O  R::::R     R:::::R  D:::::D     D:::::D\nO::::::O   O::::::O        V:::::::::V          E:::::E       EEEEEE  R::::R     R:::::R  L:::::L         LLLLLLO::::::O   O::::::O  R::::R     R:::::R  D:::::D    D:::::D \nO:::::::OOO:::::::O         V:::::::V         EE::::::EEEEEEEE:::::ERR:::::R     R:::::RLL:::::::LLLLLLLLL:::::LO:::::::OOO:::::::ORR:::::R     R:::::RDDD:::::DDDDD:::::D  \n OO:::::::::::::OO           V:::::V          E::::::::::::::::::::ER::::::R     R:::::RL::::::::::::::::::::::L OO:::::::::::::OO R::::::R     R:::::RD:::::::::::::::DD   \n   OO:::::::::OO              V:::V           E::::::::::::::::::::ER::::::R     R:::::RL::::::::::::::::::::::L   OO:::::::::OO   R::::::R     R:::::RD::::::::::::DDD     \n     OOOOOOOOO                 VVV            EEEEEEEEEEEEEEEEEEEEEERRRRRRRR     RRRRRRRLLLLLLLLLLLLLLLLLLLLLLLL     OOOOOOOOO     RRRRRRRR     RRRRRRRDDDDDDDDDDDDD        ";
}