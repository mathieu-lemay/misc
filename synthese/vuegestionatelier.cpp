#include <QtGui>

#include "modelegestionatelier.h"
#include "tablegestionatelier.h"
#include "vuegestionatelier.h"

VueGestionAtelier::VueGestionAtelier(QWidget *parent) : QWidget(parent) {
    init();
}

VueGestionAtelier::~VueGestionAtelier() {
    delete _btnNouveau;
    delete _btnModifier;
    delete _btnSupprimer;
    delete _btnInscription;
    delete _btnX;
    delete _lblNbAteliers;
    delete _txtNbAteliers;
    
    delete _modele;
    delete _table;
    
    delete _layBoutons;
    delete _layNbAteliers;
    delete _layCentral;
}

void VueGestionAtelier::init() {
    _table = new TableGestionAtelier();
    _modele = new ModeleGestionAtelier();
    _table->setModel(_modele);
    _table->resizeColumnsToContents();
    
    _btnNouveau = new QPushButton(tr("&Nouveau"));
    _btnModifier = new QPushButton(tr("&Modifier"));
    _btnSupprimer = new QPushButton(tr("&Supprimer"));
    _btnInscription = new QPushButton(tr("&Inscription"));
    _btnX = new QPushButton(tr("&X"));
    _btnX->setMaximumWidth(25);
    
    _lblNbAteliers = new QLabel(tr("Nombre total d'ateliers"));
    _txtNbAteliers = new QLineEdit();
    _txtNbAteliers->setMaximumWidth(40);
    _txtNbAteliers->setAlignment(Qt::AlignRight | Qt::AlignVCenter);
    _txtNbAteliers->setText(QString::number(_modele->rowCount()));
    
    _layBoutons = new QHBoxLayout();
    _layBoutons->addWidget(_btnNouveau);
    _layBoutons->addWidget(_btnModifier);
    _layBoutons->addWidget(_btnSupprimer);
    _layBoutons->addWidget(_btnInscription);
    _layBoutons->addStretch(this->width());
    _layBoutons->addWidget(_btnX);
    
    _layNbAteliers = new QHBoxLayout();
    _layNbAteliers->addStretch(this->width());
    _layNbAteliers->addWidget(_lblNbAteliers);
    _layNbAteliers->addWidget(_txtNbAteliers);
    
    _layCentral = new QVBoxLayout();
    _layCentral->addLayout(_layBoutons);
    _layCentral->addWidget(_table);
    _layCentral->addLayout(_layNbAteliers);
    
    this->setLayout(_layCentral);
    
    connect(_modele, SIGNAL(rowsInserted(const QModelIndex &, int, int)), this, SLOT(updateNbAteliers(const QModelIndex &, int, int)));
    connect(_modele, SIGNAL(rowsRemoved(const QModelIndex &, int, int)), this, SLOT(updateNbAteliers(const QModelIndex &, int, int)));
}

void VueGestionAtelier::updateNbAteliers(const QModelIndex & parent, int start, int end) {
    //TODO: Verifier si l'update se fait bien
    _txtNbAteliers->setText(QString::number(_modele->rowCount()));
}