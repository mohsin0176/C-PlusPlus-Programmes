#include<iostream>
#include<conio.h>
enum Suit {clubs,diamonds,hearts,spades};
const int jack=11;
const int queen=12;
const int king=13;
const int ace=14;
struct card
{
    int number;
    Suit suit;
};
int main()
{
    card temp,chosen,prize;
    int position;
    card card1={7,clubs};
    cout<<"card 1 is the 7 of clubs";
    card card2={jack,hearts};
    cout<<"card 2 is the jack of hearts";
    card card3={ace,spades};
    cout<<"card 3 is the ace of spades";
    prize=card3;
    cout<<"I am swapping Card 1 and Card 3";
    temp=card3;
    card3=card1;
    card1=temp;
    cout<<"I am swapping Card 2 and Card 3";
    temp=card3;
    card3=card2;
    card2=temp;
    cout<<"I am swapping Card 1 and Card 2";
    temp=card2;
    card2=card1;
    card1=temp;
    cout<<"Now,where(1,2 or 3) is the ace of spades ? :::";
    cin>>position;
    switch(position)
    {
    case 1:
        chosen=card1;
        break;
    case 2:
        chosen=card2;
        break;
    case 3:
        chosen=card3;
        break;

    }

    if(chosen.number==prize.number&&chosen.suit==prize.suit)
    {
        cout<<"You Win";
    }
    else

    {
        cout<<"You Loose";
    }
  return 0;
}
