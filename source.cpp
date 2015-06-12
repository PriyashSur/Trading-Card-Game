class iCard
{
public:
	iCard(){}
	virtual string getName() = 0;
};


class Druid :public iCard
{
public:
	Druid(){};
	string getName()
	{
		return getCardName();
	}
private:
	string getCardName(){ return "Druid Lord"; }
};



struct cardData
{
	string name;
	string classType;
	string hp;
	bool isNeutralCard = false;
	bool isWeaponCard = false;
	bool isHeroCard = false;
	string powerType;
	int mana_cost;
	int damage;
};

class cardXML
{
	vector<cardData*>cards;
public:
	cardXML()
	{

	}
	vector<cardData*>getCard(){ return cards; }
};




class CardPool
{
	vector<iCard*>cards;
	vector<cardData*>card;
	cardXML* cx;
public:
	CardPool()
	{
		cx = new cardXML();
		card = cx->getCard();
	}
	void Add(cardData* cd)
	{
		if (cd->name == "druid"&&!cd->isNeutralCard)
		{
			cards.push_back(new Druid());
		}
		else if (cd->name == "witch")
		{
			
		}
	}
};

