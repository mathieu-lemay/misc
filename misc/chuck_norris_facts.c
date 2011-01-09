#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const char *facts[] = {
    "If you have five dollars and Chuck Norris has five dollars, Chuck Norris has more money than you.",
    "There is no 'ctrl' button on Chuck Norris's computer. Chuck Norris is always in control.",
    "Apple pays Chuck Norris 99 cents every time he listens to a song.",
    "Chuck Norris can sneeze with his eyes open.",
    "Chuck Norris can eat just one Lay's potato chip.",
    "Chuck Norris is suing Myspace for taking the name of what he calls everything around you.",
    "Chuck Norris destroyed the periodic table, because he only recognizes the element of surprise.",
    "Chuck Norris can kill two stones with one bird.",
    "When the Boogeyman goes to sleep every night, he checks his closet for Chuck Norris.",
    "Chuck Norris doesn't read books. He stares them down until he gets the information he wants.",
    "There is no theory of evolution. Just a list of creatures Chuck Norris has allowed to live.",
    "Outer space exists because it's afraid to be on the same planet with Chuck Norris.",
    "Chuck Norris does not sleep. He waits.",
    "Chuck Norris is currently suing NBC, claiming Law and Order are trademarked names for his left and right legs.",
    "Chuck Norris is the reason why Waldo is hiding.",
    "Chuck Norris counted to infinity - twice.",
    "There is no chin behind Chuck Norris' beard. There is only another fist.",
    "When Chuck Norris does a pushup, he isn't lifting himself up, he's pushing the Earth down.",
    "Chuck Norris is so fast, he can run around the world and punch himself in the back of the head.",
    "Chuck Norris' hand is the only hand that can beat a Royal Flush.",
    "Chuck Norris can lead a horse to water AND make it drink.",
    "Chuck Norris doesn't wear a watch, HE decides what time it is.",
    "Chuck Norris can slam a revolving door.",
    "Chuck Norris does not get frostbite. Chuck Norris bites frost",
    "Remember the Soviet Union? They decided to quit after watching a DeltaForce marathon on Satellite TV.",
    "Contrary to popular belief, America is not a democracy, it is a Chucktatorship.",
    "Guns don't kill people. Chuck Norris kills People.",
    "There is no theory of evolution. Just a list of animals Chuck Norris allows to live.",
    "Chuck Norris does not sleep. He waits.",
    "The chief export of Chuck Norris is Pain.",
    "There is no chin under Chuck Norris' Beard. There is only another fist.",
    "Chuck Norris has two speeds. Walk, and Kill.",
    "The leading causes of death in the United States are: 1. Heart Disease 2. Chuck Norris 3. Cancer.",
    "Chuck Norris drives an ice cream truck covered in human skulls.",
    "Chuck Norris is my Homeboy.",
    "Chuck Norris doesn't go hunting.... CHUCK NORRIS GOES KILLING.",
    "Chuck Norris uses pepper spray to spice up his steaks.",
    "Chuck Norris once roundhouse kicked someone so hard that his foot broke the speed of light, went back in time, and killed Amelia Earhart while she was flying over the Pacific Ocean.",
    "Crop circles are Chuck Norris' way of telling the world that sometimes corn needs to lie down.",
    "Chuck Norris is ten feet tall, weighs two-tons, breathes fire, and could eat a hammer and take a shotgun blast standing.",
    "The Great Wall of China was originally created to keep Chuck Norris out. It failed miserably.",
    "Contrary to popular belief, Chuck Norris, not the box jellyfish of northern Australia, is the most venomous creature on earth. Within 3 minutes of being bitten, a human being experiences the following symptoms: fever, blurred vision, beard rash, tightness of the jeans, and the feeling of being repeatedly kicked through a car windshield.",
    "Most people have 23 pairs of chromosomes. Chuck Norris has 72... and they're all poisonous.",
    "If you ask Chuck Norris what time it is, he always says, \"Two seconds 'til.\" After you ask, \"Two seconds 'til what?\" he roundhouse kicks you in the face.",
    "Chuck Norris drives an ice cream truck covered in human skulls.",
    "When Chuck Norris sends in his taxes, he sends blank forms and includes only a picture of himself, crouched and ready to attack. Chuck Norris has not had to pay taxes, ever.",
    "The quickest way to a man's heart is with Chuck Norris' fist.",
    "Chuck Norris invented Kentucky Fried Chicken's famous secret recipe, with eleven herbs and spices. But nobody ever mentions the twelfth ingredient: Fear.",
    "CNN was originally created as the \"Chuck Norris Network\" to update Americans with on-the-spot ass kicking in real-time.",
    "Chuck Norris can win a game of Connect Four in only three moves.",
    "There is no theory of evolution, just a list of creatures Chuck Norris allows to live.",
    "Chuck Norris once ate three 72 oz. steaks in one hour. He spent the first 45 minutes having sex with his waitress.",
    "What was going through the minds of all of Chuck Norris' victims before they died? His shoe.",
    "Chuck Norris is the only man to ever defeat a brick wall in a game of tennis.",
    "Police label anyone attacking Chuck Norris as a Code 45-11.... a suicide.",
    "Chuck Norris doesn't churn butter. He roundhouse kicks the cows and the butter comes straight out.",
    "Chuck Norris doesn't wash his clothes, he disembowels them.",
    "A Handicapped parking sign does not signify that this spot is for handicapped people. It is actually in fact a warning, that the spot belongs to Chuck Norris and that you will be handicapped if you park there.",
    "Someone once videotaped Chuck Norris getting pissed off. It was called Walker: Texas Chain Saw Massacre.",
    "If you spell Chuck Norris in Scrabble, you win. Forever.",
    "Chuck Norris originally appeared in the \"Street Fighter II\" video game, but was removed by Beta Testers because every button caused him to do a roundhouse kick. When asked bout this \"glitch,\" Norris replied, \"That's no glitch.\"",
    "Fool me once, shame on you. Fool Chuck Norris once and he will roundhouse you in the face.",
    "The opening scene of the movie \"Saving Private Ryan\" is loosely based on games of dodgeball Chuck Norris played in second grade.",
    "Chuck Norris once shot down a German fighter plane with his finger, by yelling, \"Bang!\"",
    "Chuck Norris once bet NASA he could survive re-entry without a spacesuit. On July 19th, 1999, a naked Chuck Norris re-entered the earth's atmosphere, streaking over 14 states and reaching a temperature of 3000 degrees. An embarrassed NASA publically claimed it was a meteor, and still owes him a beer.",
    "Chuck Norris has two speeds: Walk and Kill.",
    "Someone once tried to tell Chuck Norris that roundhouse kicks aren't the best way to kick someone. This has been recorded by historians as the worst mistake anyone has ever made.",
    "Contrary to popular belief, America is not a democracy, it is a Chucktatorship.",
    "Teenage Mutant Ninja Turtles is based on a true story: Chuck Norris once swallowed a turtle whole, and when he crapped it out, the turtle was six feet tall and had learned karate.",
    "Chuck Norris is not hung like a horse... horses are hung like Chuck Norris.",
    "Faster than a speeding bullet ... more powerful than a locomotive ... able to leap tall buildings in a single bound... yes, these are some of Chuck Norris's warm-up exercises.",
    "Chuck Norris is the only human being to display the Heisenberg uncertainty principle -- you can never know both exactly where and how quickly he will roundhouse-kick you in the face.",
    "In the Bible, Jesus turned water into wine. But then Chuck Norris turned that wine into beer.",
    "Chuck Norris can hit you so hard that he can actually alter your DNA. Decades from now your descendants will occasionally clutch their heads and yell \"What The Hell was That?\"",
    "Time waits for no man. Unless that man is Chuck Norris.",
    "Chuck Norris discovered a new theory of relativity involving multiple universes in which Chuck Norris is even more badass than in this one. When it was discovered by Albert Einstein and made public, Chuck Norris roundhouse-kicked him in the face. We know Albert Einstein today as Stephen Hawking.",
    "Chuck Norris doesn't shower, he only takes blood baths.",
    "The Chuck Norris military unit was not used in the game Civilization 4, because a single Chuck Norris could defeat the entire combined nations of the world in one turn.",
    "In an average living room there are 1,242 objects Chuck Norris could use to kill you, including the room itself.",
    "According to the Encyclopedia Brittanica, the Native American \"Trail of Tears\" has been redefined as anywhere that Chuck Norris walks.",
    "Chuck Norris does not teabag the ladies. He potato-sacks them.",
    "Pluto is actually an orbiting group of British soldiers from the American Revolution who entered space after the Chuck gave them a roundhouse kick to the face.",
    "When Chuck Norris goes to donate blood, he declines the syringe, and instead requests a hand gun and a bucket.",
    "There are no steroids in baseball. Just players Chuck Norris has breathed on.",
    "Chuck Norris once challenged Lance Armstrong in a \"Who has more testicles?\" contest. Chuck Norris won by 5.",
    "Chuck Norris was the fourth wise man, who gave baby Jesus the gift of beard, which he carried with him until he died. The other three wise men were enraged by the preference that Jesus showed to Chuck's gift, and arranged to have him written out of the bible. All three died soon after of mysterious roundhouse-kick related injuries.",
    "Chuck Norris sheds his skin twice a year.",
    "When Chuck Norris calls 1-900 numbers, he doesn't get charged. He holds up the phone and money falls out.",
    "Chuck Norris once ate a whole cake before his friends could tell him there was a stripper in it.",
    "Some people like to eat frogs' legs. Chuck Norris likes to eat lizard legs. Hence, snakes.",
    "There are no races, only countries of people Chuck Norris has beaten to different shades of black and blue.",
    "When Chuck Norris was denied an Egg McMuffin at McDonald's because it was 10:35, he roundhouse kicked the store so hard it became a Wendy's.",
    "Chuck Norris can't finish a \"color by numbers\" because his markers are filled with the blood of his victims. Unfortunately, all blood is dark red.",
    "A Chuck Norris-delivered Roundhouse Kick is the preferred method of execution in 16 states.",
    "When Chuck Norris falls in water, Chuck Norris doesn't get wet. Water gets Chuck Norris.",
    "Scientists have estimated that the energy given off during the Big Bang is roughly equal to 1CNRhK (Chuck Norris Roundhouse Kick)",
    "Chuck Norris' house has no doors, only walls that he walks through.",
    "How much wood would a woodchuck chuck if a woodchuck could Chuck Norris? ...All of it.",
    "Chuck Norris doesn't actually write books, the words assemble themselves out of fear.",
    "In honor of Chuck Norris, all McDonald's in Texas have an even larger size than the super-size. When ordering, just ask to be Chucksized.",
    "Chuck Norris CAN believe it's not butter.",
    "If tapped, a Chuck Norris roundhouse kick could power the country of Australia for 44 minutes.",
    "Chuck Norris can divide by zero.",
    "The grass is always greener on the other side, unless Chuck Norris has been there. In that case the grass is most likely soaked in blood and tears.",
    "A picture is worth a thousand words. A Chuck Norris is worth 1 billion words.",
    "Newton's Third Law is wrong: Although it states that for each action, there is an equal and opposite reaction, there is no force equal in reaction to a Chuck Norris roundhouse kick.",
    "Chuck Norris invented his own type of karate. It's called Chuck-Will-Kill.",
    "When an episode of Walker Texas Ranger was aired in France, the French surrendered to Chuck Norris just to be on the safe side.",
    "While urinating, Chuck Norris is easily capable of welding titanium.",
    "Chuck Norris once sued the Houghton-Mifflin textbook company when it became apparent that their account of the war of 1812 was plagiarized from his autobiography.",
    "When Chuck Norris talks, everybody listens. And dies.",
    "When Steven Seagal kills a ninja, he only takes its hide. When Chuck Norris kills a ninja, he uses every part.",
    "Contrary to popular belief, there is indeed enough Chuck Norris to go around.",
    "Chuck Norris doesn't shave; he kicks himself in the face. The only thing that can cut Chuck Norris is Chuck Norris.",
    "For some, the left testicle is larger than the right one. For Chuck Norris, each testicle is larger than the other one.",
    "Chuck Norris always knows the EXACT location of Carmen SanDiego.",
    "When taking the SAT, write \"Chuck Norris\" for every answer. You will score over 8000.",
    "Chuck Norris invented black. In fact, he invented the entire spectrum of visible light. Except pink. Tom Cruise invented pink.",
    "When you're Chuck Norris, anything + anything is equal to 1. One roundhouse kick to the face.",
    "Chuck Norris has the greatest Poker-Face of all time. He won the 1983 World Series of Poker, despite holding only a Joker, a Get out of Jail Free Monopoloy card, a 2 of clubs, 7 of spades and a green #4 card from the game UNO.",
    "On his birthday, Chuck Norris randomly selects one lucky child to be thrown into the sun.",
    "Nobody doesn't like Sara Lee. Except Chuck Norris.",
    "Chuck Norris doesn't throw up if he drinks too much. Chuck Norris throws down!",
    "In the beginning there was nothing...then Chuck Norris Roundhouse kicked that nothing in the face and said \"Get a job\". That is the story of the universe.",
    "Chuck Norris has 12 moons. One of those moons is the Earth.",
    "Chuck Norris grinds his coffee with his teeth and boils the water with his own rage.",
    "Archeologists unearthed an old english dictionary dating back to the year 1236. It defined \"victim\" as \"one who has encountered Chuck Norris\"",
    "Chuck Norris ordered a Big Mac at Burger King, and got one.",
    "Chuck Norris and Mr. T walked into a bar. The bar was instantly destroyed, as that level of awesome cannot be contained in one building.",
    "If you Google search \"Chuck Norris getting his ass kicked\" you will generate zero results. It just doesn't happen.",
    "Chuck Norris can drink an entire gallon of milk in thirty-seven seconds.",
    "Little known medical fact: Chuck Norris invented the Caesarean section when he roundhouse-kicked his way out of his monther's womb.",
    "Chuck Norris doesn't bowl strikes, he just knocks down one pin and the other nine faint.",
    "The show Survivor had the original premise of putting people on an island with Chuck Norris. There were no survivors, and nobody is brave enough to go to the island to retrieve the footage.",
    "It takes Chuck Norris 20 minutes to watch 60 Minutes.",
    "You know how they say if you die in your dream then you will die in real life? In actuality, if you dream of death then Chuck Norris will find you and kill you.",
    "Chuck Norris has a deep and abiding respect for human life... unless it gets in his way.",
    "The Bermuda Triangle used to be the Bermuda Square, until Chuck Norris Roundhouse kicked one of the corners off.",
    "There are no weapons of mass destruction in Iraq, Chuck Norris lives in Oklahoma.",
    "Chuck Norris doesn't believe in Germany.",
    "When Chuck Norris is in a crowded area, he doesn't walk around people. He walks through them.",
    "Chuck Norris once ate an entire bottle of sleeping pills. They made him blink.",
    "James Cameron wanted Chuck Norris to play the Terminator. However, upon reflection, he realized that would have turned his movie into a documentary, so he went with Arnold Schwarzenegger.",
    "Chuck Norris can touch MC Hammer.",
    "Thousands of years ago Chuck Norris came across a bear. It was so terrified that it fled north into the arctic. It was also so terrified that all of its decendents now have white hair.",
    "Chuck Norris played Russian Roulette with a fully loaded gun and won.",
    "It takes 14 puppeteers to make Chuck Norris smile, but only 2 to make him destroy an orphanage.",
    "Chuck Norris is responsible for China's over-population. He hosted a Karate tournament in Beijing and all women within 1,000 miles became pregnant instantly.",
    "Some people wear Superman pajamas. Superman wears Chuck Norris pajamas.",
    "Chuck Norris once worked as a weatherman for the San Diego evening news. Every night he would make the same forecast: Partly cloudy with a 75% chance of Pain.",
    "Simply by pulling on both ends, Chuck Norris can stretch diamonds back into coal.",
    "When Chuck Norris does a pushup, he isn't lifting himself up, he's pushing the Earth down.",
    "Chuck Norris invented the bolt-action rifle, liquor, sexual intercourse, and football-- in that order.",
    "A high tide means Chuck Norris is flying over your coast. The tide is caused by God pissing his pants.",
    "Chuck Norris keeps his friends close and his enemies closer. Close enough to drop them with one round house kick to the face.",
    "There is in fact an \"I\" in Norris, but there is no \"team\"... not even close.",
    "Scotty in Star Trek often says \"Ye cannae change the laws of physics.\" This is untrue. Chuck Norris can change the laws of physics. With his fists.",
    "Chuck Norris doesn't stub his toes. He accidentally destroys chairs, bedframes, and sidewalks.",
    "Using his trademark roundhouse kick, Chuck Norris once made a fieldgoal in RJ Stadium in Tampa Bay from the 50 yard line of Qualcomm stadium in San Diego.",
    "Chuck Norris roundhouse kicks don't really kill people. They wipe out their entire existence from the space-time continuum.",
    "Chuck Norris does not own a stove, oven, or microwave, because revenge is a dish best served cold.",
    "Tom Clancy has to pay royalties to Chuck Norris because \"The Sum of All Fears\" is the name of Chuck Norris' autobiography.",
    "Chuck Norris is expected to win gold in every swimming competition at the 2008 Beijing Olympics, even though Chuck Norris does not swim. This is because when Chuck Norris enters the water, the water gets out of his way and Chuck Norris simply walks across the pool floor.",
    "The original draft of The Lord of the Rings featured Chuck Norris instead of Frodo Baggins. It was only 5 pages long, as Chuck roundhouse-kicked Sauron's ass halfway through the first chapter.",
    "Hellen Keller's favorite color is Chuck Norris.",
    "Chuck Norris eats beef jerky and craps gunpowder. Then, he uses that gunpowder to make a bullet, which he uses to kill a cow and make more beef jerky. Some people refer to this as the \"Circle of Life.\"",
    "If, by some incredible space-time paradox, Chuck Norris would ever fight himself, he'd win. Period.",
    "The crossing lights in Chuck Norris's home town say \"Die slowly\" and \"die quickly\". They each have a picture of Chuck Norris punching or kicking a pedestrian.",
    "Science Fact: Roundhouse kicks are comprised primarily of an element called Chucktanium.",
    "The Sherman tank was originaly called the Norris tank until Chuck Norris decided it wasn't tough enough to be associated with him. The Army, for fear of Chuck Norris, renamed the tank and promised to develop a weapon more fitting of his name. To date, no weapon created has been badass enough to be named after Chuck Norris.",
    "Chuck Norris proved that we are alone in the universe. We weren't before his first space expedition.",
    "Superman once watched an episode of Walker, Texas Ranger. He then cried himself to sleep.",
    "Chuck Norris doesn't step on toes. Chuck Norris steps on necks.",
    "The movie \"Delta Force\" was extremely hard to make because Chuck had to downplay his abilities. The first few cuts were completely unbelievable.",
    "Movie trivia: The movie \"Invasion U.S.A.\" is, in fact, a documentary.",
    "Chuck Norris does not \"style\" his hair. It lays perfectly in place out of sheer terror.",
    "There is no such thing as global warming. Chuck Norris was cold, so he turned the sun up.",
    "A study showed the leading causes of death in the United States are: 1. Heart disease, 2. Chuck Norris, 3. Cancer",
    "It's widely believed that Jesus was Chuck Norris' stunt double for crucifixion due to the fact that it is impossible for nails to pierce Chuck Norris' skin.",
    "Chuck Norris did in fact, build Rome in a day.",
    "Along with his black belt, Chuck Norris often chooses to wear brown shoes. No one has DARED call him on it. Ever.",
    "Anytime someone is elected president in the United States, they must ask permission from Chuck Norris to live in the White House. The reason for this is because Chuck Norris had won every Federal, State, and Local election since 1777. He just allows others to run the country in his place.",
    "Once you go Norris, you are physically unable to go back.",
    "Ninjas want to grow up to be just like Chuck Norris. But usually they grow up just to be killed by Chuck Norris.",
    "Chuck Norris once sued Burger King after they refused to put razor wire in his Whopper Jr, insisting that that actually is \"his\" way.",
    "The last thing you hear before Chuck Norris gives you a roundhouse kick? No one knows because dead men tell no tales.",
    "Chuck Norris doesn't play god. Playing is for children.",
    "Chuck Norris is the only person in the world that can actually email a roundhouse kick.",
    "Chuck Norris won super bowls VII and VIII singlehandedly before unexpectedly retiring to pursue a career in ass-kicking.",
    "Wo hu cang long. The translation from Mandarin Chinese reads: \"Crouching Chuck, Hidden Norris\"",
    "Chuck Norris can set ants on fire with a magnifying glass. At night.",
    "Some kids play Kick the can. Chuck Norris played Kick the keg.",
    "'Icy-Hot' is too weak for Chuck Norris. After a workout, Chuck Norris rubs his muscles down with liquid-hot MAGMA.",
    "Chuck Norris cannot love, he can only not kill.",
    "When Chuck Norris was a baby, he didn't suck his mother's breast. His mother served him whiskey, straight out of the bottle.",
    "According to Einstein's theory of relativity, Chuck Norris can actually roundhouse kick you yesterday.",
    "Chuck Norris once pulled out a single hair from his beard and skewered three men through the heart with it.",
    "In an act of great philanthropy, Chuck made a generous donation to the American Cancer Society. He donated 6,000 dead bodies for scientific research.",
    "Chuck Norris' favourite cut of meat is the roundhouse.",
    "When J. Robert Oppenheimer said \"I am become death, the Destroyer of Worlds\", He was not referring to the atomic bomb. He was referring to the Chuck Norris halloween costume he was wearing.",
    "Chuck Norris recently had the idea to sell his urine as a canned beverage. We know this beverage as Red Bull.",
    "When Chuck Norris says \"More cowbell\", he MEANS it.",
    "Nagasaki never had a bomb dropped on it. Chuck Norris jumped out of a plane and punched the ground.",
    "It is scientifically impossible for Chuck Norris to have had a mortal father. The most popular theory is that he went back in time and fathered himself.",
    "It is believed dinosaurs are extinct due to a giant meteor. That's true if you want to call Chuck Norris a giant meteor.",
    "Q: How many Chuck Norris' does it take to change a light bulb? A: None, Chuck Norris prefers to kill in the dark.",
    "Since 1940, the year Chuck Norris was born, roundhouse-kick related deaths have increased 13,000 percent.",
    "Chuck Norris is the reason why Waldo is hiding.",
    "Chuck Norris once kicked a horse in the chin. Its decendants are known today as Giraffes.",
    "Human cloning is outlawed because if Chuck Norris were cloned, then it would be possible for a Chuck Norris roundhouse kick to meet another chuck Norris roundhouse kick. Physicists theorize that this contact would end the universe.",
    "Chuck Norris once went skydiving, but promised never to do it again. One Grand Canyon is enough.",
    "Chuck Norris puts his pants on one leg at a time, just like the rest of us. The only difference is, then he kills people.",
    "They once tried to carve Chuck Norris' face into Mount Rushmore, but the granite wasn't hard enough for his beard"
};

void print_fact(const char *fact, int nb) {
    printf("**********************\n");
    printf("* Chuck Norris Facts *\n");
    printf("**********************\n\n");

    printf("Fact #%i\n", nb + 1);
    printf("%s\n", fact);
}

int main(int argc, char **argv) {
    int lines, nb;
    const char *fact;

    srand(time(NULL));

    lines = sizeof facts / sizeof(char *);

   /* Get a random fact */
    nb = rand() % lines;
    fact = facts[nb];
    print_fact(fact, nb);

    return 0;
}
