///////////////////////////////////////////////////////////////////////////////
//$<AM-V1.0>
//
//$Type
//       DEF
//
//$Projet
//       Marmottes
//
//$Application
//       Marmottes
//
//$Nom
//>       FamilleAlignementPlus.h
//
//$Resume
//       fichier d'en-t�te de la classe FamilleAlignementPlus
//
//$Description
//       Module de d�claration de la classe
//
//$Contenu
//>       class FamilleAlignementPlus
//
//$Historique
//       $Log: FamilleAlignementPlus.h,v $
//       Revision 1.3  2000/03/30 17:01:21  luc
//       ajout du copyright CNES
//
//       Revision 1.2  1999/11/02 07:19:20  luc
//       correction de la macro de protection contre les inclusions multiples
//
//       Revision 1.1  1999/07/29 12:11:38  filaire
//       Creation de la classe
//       Solutions qui traitent les singularites
//
//
//$Version
//       $Id: FamilleAlignementPlus.h,v 1.3 2000/03/30 17:01:21 luc Exp $
//
//$Auteur
//       G. Filaire CNES
//       Copyright (C) 2000 CNES
//
//$<>
///////////////////////////////////////////////////////////////////////////////

#ifndef __marmottes_FamilleAlignementPlus_h
#define __marmottes_FamilleAlignementPlus_h

#include "cantor/DeclDBLVD1.h"
#include "marmottes/FamilleAbstraite.h"

///////////////////////////////////////////////////////////////////////////////
//$<AM-V1.0>
//
//$Nom
//>       class FamilleAlignementPlus
//$Resume
//       mod�le g�om�trique d'attitude � un vecteur fig�
//
//$Description
//       Cette classe implante un mod�le d'attitude � un degr� de
//       libert� tel que le secteur rencontre la valeur theta = 0
//
//$Usage
//>     construction : 
//          sans argument, � partir des caract�ristiques compl�tes du mod�le,
//          par copie
//>     utilisation  : 
//>       FamilleAlignementPlus& operator = ()
//          affectation 
//>       virtual FamilleAbstraite * copie  ()
//          retourne une copie de la famille allou�e en m�moire
//>       RotVD1 inertielCanonique          () 
//          retourne la rotation qui passe du rep�re inertiel au rep�re canonique
//          pour une famille et une valeur du degr� de libert� donn�es
//$<>
///////////////////////////////////////////////////////////////////////////////

class FamilleAlignementPlus : public FamilleAbstraite
{ 
  public :

  // constructeurs
  FamilleAlignementPlus ();
  FamilleAlignementPlus (const Intervalle& plages,
                         const VecVD1& u1, const VecVD1& u2,
                         double signe,
                         double sinMu1, double cosMu1,
                         double sinMu2, double cosMu2);
  FamilleAlignementPlus (const FamilleAlignementPlus& f);

  // op�rateur d'affectation
  FamilleAlignementPlus& operator = (const FamilleAlignementPlus& f);

  // op�rateur de copie
  virtual FamilleAbstraite * copie() const ;

  // destructeur
  virtual ~FamilleAlignementPlus() {}

  // m�thode qui retourne la rotation de passage du rep�re inertiel au rep�re canonique
  virtual RotVD1 inertielCanonique (const ValeurDerivee1& t) const;

  private :

  VecVD1 u1_;
  VecVD1 u2_;
  double signe_;
  double sinMu_1_;
  double cosMu_1_;
  double sinMu_2_;
  double cosMu_2_;
  double deuxSinCos_;
  double deuxSinSin_;  
  double coeff_;

};

#endif
