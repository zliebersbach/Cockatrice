#ifndef DLG_STARTGAME_H
#define DLG_STARTGAME_H

#include <QDialog>

class RemoteDeckList_TreeWidget;
class QModelIndex;
class AbstractClient;
class QPushButton;
class QDialogButtonBox;

class DlgLoadRemoteDeck : public QDialog
{
    Q_OBJECT
private:
    AbstractClient *client;
    RemoteDeckList_TreeWidget *dirView;
    QDialogButtonBox *buttonBox;
private slots:
    void currentItemChanged(const QModelIndex &current, const QModelIndex &previous);

public:
    explicit DlgLoadRemoteDeck(AbstractClient *_client, QWidget *parent = nullptr);
    int getDeckId() const;
};

#endif
