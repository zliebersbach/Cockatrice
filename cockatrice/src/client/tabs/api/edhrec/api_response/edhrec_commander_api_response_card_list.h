#ifndef CARD_LIST_H
#define CARD_LIST_H

#include "edhrec_commander_api_response_card_details.h"

#include <QJsonArray>
#include <QJsonObject>
#include <QList>
#include <QString>

class EdhrecCommanderApiResponseCardList
{
public:
    QString header;
    QList<EdhrecCommanderApiResponseCardDetails> cardViews;

    // Default constructor
    EdhrecCommanderApiResponseCardList();

    // Method to populate the object from a JSON object
    void fromJson(const QJsonObject &json);

    // Debug method to print out the data
    void debugPrint() const;
};

#endif // CARD_LIST_H
