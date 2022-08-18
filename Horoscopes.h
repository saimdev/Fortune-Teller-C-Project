#include <iostream>
using namespace std;

string astro_sign;

string horo_name(int date, int month){

	if (month == 12){
        if (date < 22)
        astro_sign = "Sagittarius";
        else
        astro_sign ="Capricorn";
    }
         
    else if (month == 1){
        if (date < 20)
        astro_sign = "Capricorn";
        else
        astro_sign = "Aquarius";
    }
         
    else if (month == 2){
        if (date < 19)
        astro_sign = "Aquarius";
        else
        astro_sign = "Pisces";
    }
         
    else if(month == 3){
        if (date < 21)
        astro_sign = "Pisces";
        else
        astro_sign = "Aries";
    }
    else if (month == 4){
        if (date < 20)
        astro_sign = "Aries";
        else
        astro_sign = "Taurus";
    }
         
    else if (month == 5){
        if (date < 21)
        astro_sign = "Taurus";
        else
        astro_sign = "Gemini";
    }
         
    else if( month == 6){
        if (date < 21)
        astro_sign = "Gemini";
        else
        astro_sign = "Cancer";
    }
         
    else if (month == 7){
        if (date < 23)
        astro_sign = "Cancer";
        else
        astro_sign = "Leo";
    }
         
    else if( month == 8){
        if (date < 23)
        astro_sign = "Leo";
        else
        astro_sign = "Virgo";
    }
         
    else if (month == 9){
        if (date < 23)
        astro_sign = "Virgo";
        else
        astro_sign = "Libra";
    }
         
    else if (month == 10){
        if (date < 23)
        astro_sign = "Libra";
        else
        astro_sign = "Scorpio";
    }
         
    else if (month == 11){
        if (date < 22)
        astro_sign = "Scorpio";
        else
        astro_sign = "Sagittarius";
    }
    else{astro_sign = "'Invalid Month or Date!'";}
    return astro_sign;
}

void lucky_num(string astro_sign){
	cout<<"LUCKY NUMBERS"<<endl;
	if (astro_sign=="Aries"){cout<<"6, 9, 24, 33, 63, 72, 54"<<endl;}
	else if (astro_sign=="Taurus"){cout<<"5, 6, 23, 32, 33, 41, 24"<<endl;}
	else if (astro_sign=="Gemini"){cout<<"5, 6, 23, 32, 33, 41, 24"<<endl;}
	else if (astro_sign=="Cancer"){cout<<"2, 9, 11, 27, 72, 36, 45"<<endl;}
	else if (astro_sign=="Leo"){cout<<"1, 5, 9, 10, 36, 32, 72"<<endl;}
	else if (astro_sign=="Virgo"){cout<<"5, 6, 23, 32, 33, 41, 24"<<endl;}
	else if (astro_sign=="Libra"){cout<<"6, 5, 9, 10, 36, 32, 72"<<endl;}
	else if (astro_sign=="Scorpio"){cout<<"1, 4, 2, 7, 10, 11, 12"<<endl;}
	else if (astro_sign=="Sagittarius"){cout<<"6, 5, 8, 3, 12, 33, 44"<<endl;}
	else if (astro_sign=="Capricorn"){cout<<"6, 5, 8, 23, 35, 42, 44"<<endl;}
	else if (astro_sign=="Aquarius"){cout<<"3, 9, 7, 12, 16, 18, 63"<<endl;}
	else if (astro_sign=="Pisces"){cout<<"3, 34, 7, 42, 12, 52, 21"<<endl;}
	cout<<"\t\t\t  ----------------------------------------------------------------"<<endl;
}
void about_yourself(string astro_sign){
	cout<<"ABOUT YOURSELF"<<endl;
	if (astro_sign=="Aries"){cout<<"2021 is major for your love life Aries, \n\
but only if you drop the drama. As the world starts to heal from the pains \n\
of 2020, you need to let go of any habits that may have developed while \n\
isolating that no longer serve you. This year brings opportunities for magnificent \n\
love, as long as you don't ruin it with an infamous Aries temper tantrum."<<endl<<endl;
cout<<">- The more room you make for your healthiest relationships, \n\
the easier it is to let old ones go."<<endl<<endl;
cout<<">- Love may just fall into place. Don't confuse what \n\
comes easily for being boring."<<endl<<endl;
cout<<">- Themes that arise for you during this time \n\
signal what needs attention all year."<<endl<<endl;
cout<<">- Your focus will be reevaluating how you make a living."<<endl<<endl;}

	else if (astro_sign=="Taurus"){cout<<"Last year left you with plenty of time to think, Taurus, and 2021 wants you to act \n\
on your desires because you are worth it. This will likely manifest most \n\
obviously in your professional life, so don't be surprised if you leave one \n\
job for something bigger and better that fills your soul. Practice self-care \n\
and don't for a second forget your worth, or else you could risk missing \n\
out on an opportunity made for you."<<endl<<endl;
cout<<">- Lover planet Venus enters your sign on Wednesday, April 14, \n\
turning the love gods in your favor just before your birthday."<<endl<<endl;
cout<<">- You must put hard work and action into your professional \n\
ambitions or else they will float away."<<endl<<endl;
cout<<">- No matter how satisfying it feels to have someone come \n\
back to you, never forget that it ended for a reason."<<endl<<endl;}

	else if (astro_sign=="Gemini"){cout<<"After the economic chaos of 2020, this year offers you opportunities to \n\
rebuild and grow professionally, but it won't be easy for you or anyone \n\
else, Gemini. The hard work and effort you put in last year will start to \n\
pay off, but you'll need to keep up some of the momentum. An eclipse in \n\
your sign brings a burst of unexpected news, further encouraging your personal \n\
growth that the new year brings."<<endl<<endl;
cout<<">- Thank goodness you like the spotlight, because it's going to shine on you."<<endl<<endl;	
cout<<">- All the attention you get this year will bring you many admirers."<<endl<<endl;}

	else if (astro_sign=="Cancer"){cout<<"2020 kept you so busy that you started crab-walking in circles, Cancer. \n\
You're an expert when it comes to taking care of other people, but 2021 asks \n\
you to let other people take care of you. This may be hard to do, as it can be \n\
difficult to admit when you're vulnerable, but I pinkie promise that it's for \n\
your own health and happiness."<<endl<<endl;
cout<<">- Because you are ruled by the moon, you will always be a \n\
bit more nostalgic than most."<<endl<<endl;
cout<<">- Try to allow yourself to fully blossom this year, unrestrained \n\
by the demands of everyone around you."<<endl<<endl;}

	else if (astro_sign=="Leo"){cout<<"You are ruled by the sun, Leo, so you were actually born to be in the spotlight. \n\
Social distancing was hard for everyone, but it's possible it affected your \n\
sign the most, leaving you to get creative. As the world starts to heal in 2021, \n\
you'll feel like a lion trapped in a cage bursting to get out. When you do, \n\
you'll want to say yes to every date and every opportunity, but beware of \n\
short-term thinking, Leo. Your 2021 mission is to practice patience and be discerning."<<endl<<endl;
cout<<">- The meeting of Saturn and Uranus sheds light on the things in \n\
your life that may be limiting your self-growth."<<endl<<endl;
cout<<">- You must move away from seeking instant gratification."<<endl<<endl;
cout<<">- Use this time to seriously take stock of what relationships \n\
lift you up and who holds you down."<<endl<<endl;}

	else if (astro_sign=="Virgo"){cout<<"As the healer of the zodiac, 2020 kept you busy, Virgo. When you weren't out there \n\
giving out masks and delivering meals you became an emotional net for \n\
friends and family, and it's likely you over-extended yourself. This year, \n\
it may be helpful to work through the trauma you've experienced, either \n\
by getting a therapist, meditating, or simply making more time for long walks. \n\
Doing things that make you feel calm and balanced may just help you erect \n\
boundaries to bring in healthier relationships."<<endl<<endl;
cout<<">- Your love life will benefit from having more free time and energy."<<endl<<endl;
cout<<">- So far your theme in 2021 is to set up boundaries and stop \n\
biting off more than you can chew. "<<endl<<endl;}

	else if (astro_sign=="Libra"){cout<<"As the sign of partnerships and balance, 2020 did a number on you. Not only was \n\
the world total chaos, but you had to primarily switch to flirting via sext, \n\
which while fun, is not the same as batting your eyelashes in real life. \n\
However, you still managed to get your fair share of attention. This year offers \n\
a chance at healthy, stable, and long-term love, you just need to \n\
keep your eyes and heart open."<<endl<<endl;
cout<<">- As the sign of relationships, yours are crucial to your \n\
mental and emotional well-being."<<endl<<endl;
cout<<">- Put those boundaries you developed earlier in the year \n\
into play during the final Mercury retrograde of the year."<<endl<<endl;}

	else if (astro_sign=="Scorpio"){cout<<"The pains of 2020 may have brought out your dark side, Scorpio. That doesn't \n\
make you a supervillain but it does mean that you may have raised \n\
your stinger a few times to pick fights with those closest to you. \n\
But that's okay; if the last year has taught us anything, it's that \n\
life can be hard, and we all deserve a little more grace. Now that you \n\
know how you react in some situations, do what you can to stop giving \n\
in to any overly aggressive tendencies. Your friendships will \n\
benefit from keeping a cooler head."<<endl<<endl;
cout<<">- Rather than looking out for signs that someone isn't \n\
into you, start looking out for signs that they are."<<endl<<endl;
cout<<">- Put that stinger away and learn to tell the \n\
difference between a real and imagined threat."<<endl<<endl;
cout<<">- When you feel good about yourself, you're less \n\
likely to fall back into unhealthy behaviors."<<endl<<endl;}

	else if (astro_sign=="Sagittarius"){cout<<"Last year was rough on everyone, Sagittarius, but you felt it super hard. \n\
As a fire sign who loves to be the life of the party, when parties \n\
were canceled, you may have wondered what the point of it all was — and \n\
given into doom-scrolling as a substitute. This year, you'll find purpose again. \n\
2021 asks you to prioritize your health, both mental and emotional. You'll feel \n\
much better when you start listening and tending to your needs."<<endl<<endl;
cout<<">- These dates may signify an addition to your family, be it a new \n\
friend, relationship, or even a baby."<<endl<<endl;
cout<<">- This year is all about focusing on you so you can be the best \n\
version of yourself for your community and family."<<endl<<endl;
cout<<">- This retrograde could mark a cosmic clean-up if \n\
you have some things to answer for."<<endl<<endl;}

	else if (astro_sign=="Capricorn"){cout<<"Hello, dear Capricorn. Pay attention, because you're going to like what you read. \n\
After the hellscape that was 2020, this year puts your career and money \n\
center stage. In particular, you will benefit from leaning into what you love \n\
and whatever it is that brings you the most satisfaction. While we all must \n\
take what we can get in this economy, this year asks you to \n\
take risks and reap the financial rewards."<<endl<<endl;
cout<<">- Find a balance between surviving and thriving, as the alignment \n\
of the stars may be encouraging, but astrology can't write you a check."<<endl<<endl;
cout<<">- Eclipses are indeed messy, Capricorn, but sometimes in a fun way. "<<endl<<endl;}

	else if (astro_sign=="Aquarius"){cout<<"You care about your community, Aquarius, and the events of 2020 gave you plenty of \n\
chances to keep busy by lending a hand. Whether you became your family's \n\
point person and organizer of Zoom holidays or dove into activism, you \n\
likely stayed so busy tending to others that you forgot about your own needs. \n\
Now, 2021 shines a spotlight on you, precious water \n\
bearer, and it's time to step into it."<<endl<<endl;
cout<<">- Practice clearly stating your needs and using \n\
your backbone so that you don't back down."<<endl<<endl;
cout<<">- It can be harder to accept love than criticism, Aquarius, \n\
but remind yourself that you deserve it."<<endl<<endl;}

	else if (astro_sign=="Pisces"){cout<<"Your psychic and empathic abilities are what make you so magical, Pisces, but the weight \n\
of the world in 2020 became too much for you. As a result, you probably \n\
used stay-at-home orders to retreat a little bit too much. This year asks \n\
you to come out of your fishbowl and grace us with your humor and pretty face. \n\
Expect major changes in your friend group that overlap with your love life. \n\
Are you secretly in love with your best friend?"<<endl<<endl;
cout<<">- It's time that you do what you can to adjust to our \n\
new reality and come out of your fishbowl. "<<endl<<endl;
cout<<">- As long as you're still using your head a bit, \n\
don't be afraid to follow your heart."<<endl<<endl;}

cout<<"\t\t\t  ----------------------------------------------------------------"<<endl;
}


void love_compat(string astro_sign){
	cout<<"LOVE COMPATIBILITY"<<endl;
	if (astro_sign=="Aries"){cout<<"Year 2021 would be quite a good year for the love prospects of Aries guys. \n\
The planets are well placed that a marriage or a serious love relationship is \n\
in the offing. The partner under question would be a person of better standing \n\
and status than you. You stand to gain a lot through this relationship."<<endl<<endl;}

	else if (astro_sign=="Taurus"){cout<<"The love life of Taurus guys would be very important for the year 2021. \n\
This is because you would be forced to take some important decisions in this year. \n\
Whether to stay in an incompatible relation or move ahead and call for a split."<<endl<<endl;}

	else if (astro_sign=="Gemini"){cout<<"Year 2021 promises a great year for compatible love relationships for Gemini \n\
natives. There would be much fun and joy, your wishes in relationship would \n\
be granted. There would be no dearth for excitement and surprises."<<endl<<endl;}

	else if (astro_sign=="Cancer"){cout<<"The changes you have been anticipating in your love life would occur this year. \n\
And the outer planets would be witness to the same in your love front."<<endl<<endl;}

	else if (astro_sign=="Leo"){cout<<"For Leos, the year 2021 would be a testing time as the past two years as Saturn is \n\
loitering in your house of love. However this testing can be taken as a \n\
blessing in disguise as you can be able to ward off or \n\
prune any incompatible relationship."<<endl<<endl;}	
	
	else if (astro_sign=="Virgo"){cout<<"A Virgo wants love that come with quantity and quality. \n\
There would be no dearth for love and romance through 2021 for Virgo guys."<<endl<<endl;}

	else if (astro_sign=="Libra"){cout<<"When a Libra loves someone, they give their heart and soul to it."<<endl<<endl;}
	
	else if (astro_sign=="Scorpio"){cout<<"Scorpio takes on love is all-or-nothing. The7th house of \n\
Taurus for Scorpio natives does not have any major planetary positions \n\
for the year 2021. Hence love and marriage would \n\
not be of that much of a priority for you now."<<endl<<endl;}

	else if (astro_sign=="Sagittarius"){cout<<"Sagittarius have a dirty mind but a beautiful heart."<<endl<<endl;}	
	
	else if (astro_sign=="Capricorn"){cout<<"When a Capricorn falls in love, it's for life. This year would \n\
see Capricorn folks loaded with much romance and passion. You would be \n\
able to attract multiple partners this year. You get noticed a lot."<<endl<<endl;}

	else if (astro_sign=="Aquarius"){cout<<"For the year 2021, there seems to be no major planetary placements in the \n\
7th house for Aquarius natives. Hence there would be no major breakthroughs in love \n\
and marriage for you, however your social life and \n\
friendships would be quite satisfactory."<<endl<<endl;}

	else if (astro_sign=="Pisces"){cout<<"Pisces are angels in love, mess with them and you will see a devil."<<endl<<endl;}
	cout<<"\t\t\t  ----------------------------------------------------------------"<<endl;
	}
