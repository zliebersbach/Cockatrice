#ifndef CARDLIST_H
#define CARDLIST_H

#include <QList>

class CardItem;

class CardList : public QList<CardItem *>
{
protected:
    bool contentsKnown;

public:
    enum SortFlags
    {
        SortByName = 1,
        SortByType = 2
    };
    CardList(bool _contentsKnown);
    CardItem *findCard(const int cardId) const;
    bool getContentsKnown() const
    {
        return contentsKnown;
    }
    void sort(int flags = SortByName);
};

#endif
