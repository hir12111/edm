#define __onekeypad_cc

#include "onekeypad.h"

static void onekeypadPress (
  Widget w,
  XtPointer client,
  XtPointer call,
  int dataType )
{

onekeypadClass *kp = (onekeypadClass *) client;
int tmp;

  if ( w == kp->pbCancel ) {

    kp->popdown ();
    if ( kp->cancelFunc ) {
      (*kp->cancelFunc)( w, (XtPointer) kp->userPtr, client );
    }
    XtDestroyWidget ( kp->shell );
    kp->shell = NULL;

  }
  else if ( w == kp->pb0) {
          *(kp->intDest) = 0;
          kp->popdown ();
          XtDestroyWidget (kp->shell);
          kp->shell = NULL;
          (*kp->okFunc)( w, (XtPointer) kp->userPtr, client );
  }
  else if ( w == kp->pb1) {
          *(kp->intDest) = 1;
          kp->popdown ();
          XtDestroyWidget (kp->shell);
          kp->shell = NULL;
          (*kp->okFunc)( w, (XtPointer) kp->userPtr, client );
  }
  else if ( w == kp->pb2) {
          *(kp->intDest) = 2;
          kp->popdown ();
          XtDestroyWidget (kp->shell);
          kp->shell = NULL;
          (*kp->okFunc)( w, (XtPointer) kp->userPtr, client );
  }
  else if ( w == kp->pb3) {
          *(kp->intDest) = 3;
          kp->popdown ();
          XtDestroyWidget (kp->shell);
          kp->shell = NULL;
          (*kp->okFunc)( w, (XtPointer) kp->userPtr, client );
  }
  else if ( w == kp->pb4) {
          *(kp->intDest) = 4;
          kp->popdown ();
          XtDestroyWidget (kp->shell);
          kp->shell = NULL;
          (*kp->okFunc)( w, (XtPointer) kp->userPtr, client );
  }
  else if ( w == kp->pb5) {
          *(kp->intDest) = 5;
          kp->popdown ();
          XtDestroyWidget (kp->shell);
          kp->shell = NULL;
          (*kp->okFunc)( w, (XtPointer) kp->userPtr, client );
  }
  else if ( w == kp->pb6) {
          *(kp->intDest) = 6;
          kp->popdown ();
          XtDestroyWidget (kp->shell);
          kp->shell = NULL;
          (*kp->okFunc)( w, (XtPointer) kp->userPtr, client );
  }
  else if ( w == kp->pb7) {
          *(kp->intDest) = 7;
          kp->popdown ();
          XtDestroyWidget (kp->shell);
          kp->shell = NULL;
          (*kp->okFunc)( w, (XtPointer) kp->userPtr, client );
  }
  else if ( w == kp->pb8) {
          *(kp->intDest) = 8;
          kp->popdown ();
          XtDestroyWidget (kp->shell);
          kp->shell = NULL;
          (*kp->okFunc)( w, (XtPointer) kp->userPtr, client );
  }
  else if ( w == kp->pb9) {
          *(kp->intDest) = 9;
          kp->popdown ();
          XtDestroyWidget (kp->shell);
          kp->shell = NULL;
          (*kp->okFunc)( w, (XtPointer) kp->userPtr, client );
  }


/*  else if ( w == kp->pbOK ) {

    if ( strcmp ( &kp->buf[1], "." ) == 0 ) { // only single "." was entered

      kp->popdown ();
      if ( kp->cancelFunc ) {
        (*kp->cancelFunc)( w, (XtPointer) kp->userPtr, client );
      }
      XtDestroyWidget ( kp->shell );
      kp->shell = NULL;

      return;

    }

    if ( kp->state == onekeypadClass::ISNULL ) {

      kp->popdown ();
      if ( kp->cancelFunc ) {
        (*kp->cancelFunc)( w, (XtPointer) kp->userPtr, client );
      }
      XtDestroyWidget ( kp->shell );
      kp->shell = NULL;

      return;

    }

    switch ( dataType ) {

    case onekeypadClass::INT:

      if ( kp->hex ) {

        *(kp->intDest) = strtol ( &kp->buf[1], NULL, 16 );

      }
      else {

        if ( kp->positive ) {
          *(kp->intDest) = atol ( &kp->buf[1] );
        }
        else {
          *(kp->intDest) = atol ( kp->buf );
        }

      }

      break;

    case onekeypadClass::DOUBLE:

      if ( kp->hex ) {

        tmp = strtol ( &kp->buf[1], NULL, 16 );
        *(kp->doubleDest) = (double) tmp;

      }
      else {

        if ( kp->positive ) {
          *(kp->doubleDest) = atof ( &kp->buf[1] );
        }
        else {
          *(kp->doubleDest) = atof ( kp->buf );
        }

      }

      break;

    }

    kp->popdown ();
    if ( kp->okFunc ) {
      (*kp->okFunc)( w, (XtPointer) kp->userPtr, client );
    }
    XtDestroyWidget ( kp->shell );
    kp->shell = NULL;

  }

  else {

    switch ( kp->state ) {

    case onekeypadClass::ISNULL:

      if ( w == kp->pb1 ) {
        strcpy ( kp->buf, "-1" );
        kp->state = onekeypadClass::NODECPOINT;
        kp->count++;
      }
      else if ( w == kp->pb2 ) {
        strcpy ( kp->buf, "-2" );
        kp->state = onekeypadClass::NODECPOINT;
        kp->count++;
      }
      else if ( w == kp->pb3 ) {
        strcpy ( kp->buf, "-3" );
        kp->state = onekeypadClass::NODECPOINT;
        kp->count++;
      }
      else if ( w == kp->pb4 ) {
        strcpy ( kp->buf, "-4" );
        kp->state = onekeypadClass::NODECPOINT;
        kp->count++;
      }
      else if ( w == kp->pb5 ) {
        strcpy ( kp->buf, "-5" );
        kp->state = onekeypadClass::NODECPOINT;
        kp->count++;
      }
      else if ( w == kp->pb6 ) {
        strcpy ( kp->buf, "-6" );
        kp->state = onekeypadClass::NODECPOINT;
        kp->count++;
      }
      else if ( w == kp->pb7 ) {
        strcpy ( kp->buf, "-7" );
        kp->state = onekeypadClass::NODECPOINT;
        kp->count++;
      }
      else if ( w == kp->pb8 ) {
        strcpy ( kp->buf, "-8" );
        kp->state = onekeypadClass::NODECPOINT;
        kp->count++;
      }
      else if ( w == kp->pb9 ) {
        strcpy ( kp->buf, "-9" );
        kp->state = onekeypadClass::NODECPOINT;
        kp->count++;
      }
      else if ( w == kp->pba ) {
        strcpy ( kp->buf, "-A" );
        kp->state = onekeypadClass::NODECPOINT;
        kp->count++;
      }
      else if ( w == kp->pbb ) {
        strcpy ( kp->buf, "-B" );
        kp->state = onekeypadClass::NODECPOINT;
        kp->count++;
      }
      else if ( w == kp->pbc ) {
        strcpy ( kp->buf, "-C" );
        kp->state = onekeypadClass::NODECPOINT;
        kp->count++;
      }
      else if ( w == kp->pbd ) {
        strcpy ( kp->buf, "-D" );
        kp->state = onekeypadClass::NODECPOINT;
        kp->count++;
      }
      else if ( w == kp->pbe ) {
        strcpy ( kp->buf, "-E" );
        kp->state = onekeypadClass::NODECPOINT;
        kp->count++;
      }
      else if ( w == kp->pbf ) {
        strcpy ( kp->buf, "-F" );
        kp->state = onekeypadClass::NODECPOINT;
        kp->count++;
      }
      else if ( w == kp->pb0 ) {
        strcpy ( kp->buf, "-0" );
        kp->state = onekeypadClass::ZERO;
        kp->count = 0;
      }
      else if ( w == kp->pbPoint ) {
        strcpy ( kp->buf, "-." );
        kp->state = onekeypadClass::DECPOINT;
        kp->count++;
      }

      kp->positive = 1;

      break;

    case onekeypadClass::ZERO:

      if ( w == kp->pb1 ) {
        strcpy ( kp->buf, "-1" );
        kp->state = onekeypadClass::NODECPOINT;
        kp->count++;
      }
      else if ( w == kp->pb2 ) {
        strcpy ( kp->buf, "-2" );
        kp->state = onekeypadClass::NODECPOINT;
        kp->count++;
      }
      else if ( w == kp->pb3 ) {
        strcpy ( kp->buf, "-3" );
        kp->state = onekeypadClass::NODECPOINT;
        kp->count++;
      }
      else if ( w == kp->pb4 ) {
        strcpy ( kp->buf, "-4" );
        kp->state = onekeypadClass::NODECPOINT;
        kp->count++;
      }
      else if ( w == kp->pb5 ) {
        strcpy ( kp->buf, "-5" );
        kp->state = onekeypadClass::NODECPOINT;
        kp->count++;
      }
      else if ( w == kp->pb6 ) {
        strcpy ( kp->buf, "-6" );
        kp->state = onekeypadClass::NODECPOINT;
        kp->count++;
      }
      else if ( w == kp->pb7 ) {
        strcpy ( kp->buf, "-7" );
        kp->state = onekeypadClass::NODECPOINT;
        kp->count++;
      }
      else if ( w == kp->pb8 ) {
        strcpy ( kp->buf, "-8" );
        kp->state = onekeypadClass::NODECPOINT;
        kp->count++;
      }
      else if ( w == kp->pb9 ) {
        strcpy ( kp->buf, "-9" );
        kp->state = onekeypadClass::NODECPOINT;
        kp->count++;
      }
      else if ( w == kp->pba ) {
        strcpy ( kp->buf, "-A" );
        kp->state = onekeypadClass::NODECPOINT;
        kp->count++;
      }
      else if ( w == kp->pbb ) {
        strcpy ( kp->buf, "-B" );
        kp->state = onekeypadClass::NODECPOINT;
        kp->count++;
      }
      else if ( w == kp->pbc ) {
        strcpy ( kp->buf, "-C" );
        kp->state = onekeypadClass::NODECPOINT;
        kp->count++;
      }
      else if ( w == kp->pbd ) {
        strcpy ( kp->buf, "-D" );
        kp->state = onekeypadClass::NODECPOINT;
        kp->count++;
      }
      else if ( w == kp->pbe ) {
        strcpy ( kp->buf, "-E" );
        kp->state = onekeypadClass::NODECPOINT;
        kp->count++;
      }
      else if ( w == kp->pbf ) {
        strcpy ( kp->buf, "-F" );
        kp->state = onekeypadClass::NODECPOINT;
        kp->count++;
      }
      else if ( w == kp->pbPoint ) {
        strcpy ( kp->buf, "-." );
        kp->state = onekeypadClass::DECPOINT;
        kp->count++;
      }
      else if ( w == kp->pbBksp ) {
        kp->positive = 1;
        kp->state = onekeypadClass::ISNULL;
        kp->count = 0;
        strcpy ( kp->buf, "-" );
      }

      kp->positive = 1;

      break;

    case onekeypadClass::NODECPOINT:

      if ( w == kp->pb0 ) {
        Strncat ( &kp->buf[1], "0", kp->MAXCHARS - 1 );
        kp->buf[kp->MAXCHARS] = 0;
        kp->count++;
      }
      else if ( w == kp->pb1 ) {
        Strncat ( &kp->buf[1], "1", kp->MAXCHARS - 1 );
        kp->buf[kp->MAXCHARS] = 0;
        kp->count++;
      }
      else if ( w == kp->pb2 ) {
        Strncat ( &kp->buf[1], "2", kp->MAXCHARS - 1 );
        kp->buf[kp->MAXCHARS] = 0;
        kp->count++;
      }
      else if ( w == kp->pb3 ) {
        Strncat ( &kp->buf[1], "3", kp->MAXCHARS - 1 );
        kp->buf[kp->MAXCHARS] = 0;
        kp->count++;
      }
      else if ( w == kp->pb4 ) {
        Strncat ( &kp->buf[1], "4", kp->MAXCHARS - 1 );
        kp->buf[kp->MAXCHARS] = 0;
        kp->count++;
      }
      else if ( w == kp->pb5 ) {
        Strncat ( &kp->buf[1], "5", kp->MAXCHARS - 1 );
        kp->buf[kp->MAXCHARS] = 0;
        kp->count++;
      }
      else if ( w == kp->pb6 ) {
        Strncat ( &kp->buf[1], "6", kp->MAXCHARS - 1 );
        kp->buf[kp->MAXCHARS] = 0;
        kp->count++;
      }
      else if ( w == kp->pb7 ) {
        Strncat ( &kp->buf[1], "7", kp->MAXCHARS - 1 );
        kp->buf[kp->MAXCHARS] = 0;
        kp->count++;
      }
      else if ( w == kp->pb8 ) {
        Strncat ( &kp->buf[1], "8", kp->MAXCHARS - 1 );
        kp->buf[kp->MAXCHARS] = 0;
        kp->count++;
      }
      else if ( w == kp->pb9 ) {
        Strncat ( &kp->buf[1], "9", kp->MAXCHARS - 1 );
        kp->buf[kp->MAXCHARS] = 0;
        kp->count++;
      }
      else if ( w == kp->pba ) {
        Strncat ( &kp->buf[1], "A", kp->MAXCHARS - 1 );
        kp->buf[kp->MAXCHARS] = 0;
        kp->count++;
      }
      else if ( w == kp->pbb ) {
        Strncat ( &kp->buf[1], "B", kp->MAXCHARS - 1 );
        kp->buf[kp->MAXCHARS] = 0;
        kp->count++;
      }
      else if ( w == kp->pbc ) {
        Strncat ( &kp->buf[1], "C", kp->MAXCHARS - 1 );
        kp->buf[kp->MAXCHARS] = 0;
        kp->count++;
      }
      else if ( w == kp->pbd ) {
        Strncat ( &kp->buf[1], "D", kp->MAXCHARS - 1 );
        kp->buf[kp->MAXCHARS] = 0;
        kp->count++;
      }
      else if ( w == kp->pbe ) {
        Strncat ( &kp->buf[1], "E", kp->MAXCHARS - 1 );
        kp->buf[kp->MAXCHARS] = 0;
        kp->count++;
      }
      else if ( w == kp->pbf ) {
        Strncat ( &kp->buf[1], "F", kp->MAXCHARS - 1 );
        kp->buf[kp->MAXCHARS] = 0;
        kp->count++;
      }
      else if ( w == kp->pbPoint ) {
        Strncat ( &kp->buf[1], ".", kp->MAXCHARS - 1 );
        kp->buf[kp->MAXCHARS] = 0;
        kp->count++;
        kp->state = onekeypadClass::DECPOINT;
      }
      else if ( w == kp->pbSign ) {
        if ( kp->positive ) {
          kp->positive = 0;
        }
        else {
          kp->positive = 1;
        }
      }
      else if ( w == kp->pbBksp ) {
        if ( kp->count == 1 ) {
          kp->positive = 1;
          kp->state = onekeypadClass::ISNULL;
          kp->count = 0;
          strcpy ( kp->buf, "-" );
        }
        else {
          kp->buf[kp->count] = 0;
          kp->count--;
        }
      }

      break;

    case onekeypadClass::DECPOINT:

      if ( w == kp->pb0 ) {
        Strncat ( &kp->buf[1], "0", kp->MAXCHARS - 1 );
        kp->buf[kp->MAXCHARS] = 0;
        kp->count++;
      }
      else if ( w == kp->pb1 ) {
        Strncat ( &kp->buf[1], "1", kp->MAXCHARS - 1 );
        kp->buf[kp->MAXCHARS] = 0;
        kp->count++;
      }
      else if ( w == kp->pb2 ) {
        Strncat ( &kp->buf[1], "2", kp->MAXCHARS - 1 );
        kp->buf[kp->MAXCHARS] = 0;
        kp->count++;
      }
      else if ( w == kp->pb3 ) {
        Strncat ( &kp->buf[1], "3", kp->MAXCHARS - 1 );
        kp->buf[kp->MAXCHARS] = 0;
        kp->count++;
      }
      else if ( w == kp->pb4 ) {
        Strncat ( &kp->buf[1], "4", kp->MAXCHARS - 1 );
        kp->buf[kp->MAXCHARS] = 0;
        kp->count++;
      }
      else if ( w == kp->pb5 ) {
        Strncat ( &kp->buf[1], "5", kp->MAXCHARS - 1 );
        kp->buf[kp->MAXCHARS] = 0;
        kp->count++;
      }
      else if ( w == kp->pb6 ) {
        Strncat ( &kp->buf[1], "6", kp->MAXCHARS - 1 );
        kp->buf[kp->MAXCHARS] = 0;
        kp->count++;
      }
      else if ( w == kp->pb7 ) {
        Strncat ( &kp->buf[1], "7", kp->MAXCHARS - 1 );
        kp->buf[kp->MAXCHARS] = 0;
        kp->count++;
      }
      else if ( w == kp->pb8 ) {
        Strncat ( &kp->buf[1], "8", kp->MAXCHARS - 1 );
        kp->buf[kp->MAXCHARS] = 0;
        kp->count++;
      }
      else if ( w == kp->pb9 ) {
        Strncat ( &kp->buf[1], "9", kp->MAXCHARS - 1 );
        kp->buf[kp->MAXCHARS] = 0;
        kp->count++;
      }
      else if ( w == kp->pba ) {
        Strncat ( &kp->buf[1], "A", kp->MAXCHARS - 1 );
        kp->buf[kp->MAXCHARS] = 0;
        kp->count++;
      }
      else if ( w == kp->pbb ) {
        Strncat ( &kp->buf[1], "B", kp->MAXCHARS - 1 );
        kp->buf[kp->MAXCHARS] = 0;
        kp->count++;
      }
      else if ( w == kp->pbc ) {
        Strncat ( &kp->buf[1], "C", kp->MAXCHARS - 1 );
        kp->buf[kp->MAXCHARS] = 0;
        kp->count++;
      }
      else if ( w == kp->pbd ) {
        Strncat ( &kp->buf[1], "D", kp->MAXCHARS - 1 );
        kp->buf[kp->MAXCHARS] = 0;
        kp->count++;
      }
      else if ( w == kp->pbe ) {
        Strncat ( &kp->buf[1], "E", kp->MAXCHARS - 1 );
        kp->buf[kp->MAXCHARS] = 0;
        kp->count++;
      }
      else if ( w == kp->pbf ) {
        Strncat ( &kp->buf[1], "F", kp->MAXCHARS - 1 );
        kp->buf[kp->MAXCHARS] = 0;
        kp->count++;
      }
      else if ( w == kp->pbSign ) {
        if ( kp->positive ) {
          kp->positive = 0;
        }
        else {
          kp->positive = 1;
        }
      }
      else if ( w == kp->pbBksp ) {
        if ( kp->count == 1 ) {
          kp->positive = 1;
          kp->state = onekeypadClass::ISNULL;
          kp->count = 0;
          strcpy ( kp->buf, "-" );
        }
        else if ( kp->buf[kp->count] == '.' ) {
          kp->buf[kp->count] = 0;
          kp->state = onekeypadClass::NODECPOINT;
          kp->count--;
        }
        else {
          kp->buf[kp->count] = 0;
          kp->count--;
        }
      }

      break;

    }

    if ( kp->positive ) {
      XmTextFieldSetString ( kp->text, &kp->buf[1] );
    }
    else {
      XmTextFieldSetString ( kp->text, kp->buf );
    }

  }
*/
}

static void intOnekeypadPress (
  Widget w,
  XtPointer client,
  XtPointer call )
{

  onekeypadPress ( w, client, call, onekeypadClass::INT );

}

static void doubleOnekeypadPress (
  Widget w,
  XtPointer client,
  XtPointer call )
{

  onekeypadPress ( w, client, call, onekeypadClass::DOUBLE );

}

onekeypadClass::onekeypadClass () {

  entryTag = NULL;
  actionTag = NULL;
  shell = NULL;
  poppedUp = 0;
  hex = 0;
  MAXCHARS = 14;

  pb0 = NULL;
  pb1 = NULL;
  pb2 = NULL;
  pb3 = NULL;
  pb4 = NULL;
  pb5 = NULL;
  pb6 = NULL;
  pb7 = NULL;
  pb8 = NULL;
  pb9 = NULL;
  pbPoint = NULL;
  pbSign = NULL;
  pbOK = NULL;
  pbApply = NULL;
  pbCancel = NULL;
  pbBksp = NULL;
  pba = NULL;
  pbb = NULL;
  pbc = NULL;
  pbd = NULL;
  pbe = NULL;
  pbf = NULL;

}

onekeypadClass::~onekeypadClass ( void ) {

  if ( shell ) {
    if ( isPoppedUp () ) popdown ();
    XtDestroyWidget ( shell );
  }

}

void onekeypadClass::popup ( void ) {

  XtPopup ( shell, XtGrabNone );
  poppedUp = 1;

}

void onekeypadClass::popdown ( void ) {

  XtPopdown ( shell );
  poppedUp = 0;

}

int onekeypadClass::isPoppedUp ( void ) {

  return poppedUp;

}

int onekeypadClass::create (
  Widget top,
  int _x,
  int _y,
  char *label,
  //fontInfoClass *fi,
  //const char *entryFontTag,
  //const char *actionFontTag,
  int dataType,
  void *destination,
  void *_userPtr,
  XtCallbackProc _okFunc,
  XtCallbackProc _cancelFunc ) {

  XmString str;
  XtCallbackProc func = 0;

  x = _x;
  y = _y;
  userPtr = _userPtr,
  okFunc = _okFunc;
  cancelFunc = _cancelFunc;
  display = XtDisplay ( top );
  poppedUp = 0;

    switch ( dataType ) {

    case onekeypadClass::INT:
      intDest = (int *) destination;
      func = (XtCallbackProc)intOnekeypadPress;
      break;

    case onekeypadClass::DOUBLE:
      doubleDest = (double *) destination;
      func = (XtCallbackProc)doubleOnekeypadPress;
      break;

    }

#if 0
  if ( fi ) {

    if ( entryFontTag ) {
      entryTag = new char[strlen (entryFontTag) + 1];
      strcpy ( entryTag, entryFontTag );
      fi->getTextFontList ( entryTag, &entryFontList );
    }

    if ( actionFontTag ) {
      actionTag = new char[strlen (actionFontTag) + 1];
      strcpy ( actionTag, actionFontTag );
      fi->getTextFontList ( actionTag, &actionFontList );
    }

  }
#endif

  if ( shell ) {
    XtDestroyWidget ( shell );
  }

  shell = XtVaCreatePopupShell ( "onekeypad", xmDialogShellWidgetClass,
   top,
   XmNmappedWhenManaged, False,
   XmNmwmDecorations, 0,
   XmNx, x,
   XmNy, y,
   NULL );

  rowcol = XtVaCreateWidget ( "rowcol", xmRowColumnWidgetClass, shell,
   XmNorientation, XmVERTICAL,
   XmNnumColumns, 1,
   NULL );

  topForm = XtVaCreateWidget ( "topform", xmFormWidgetClass, rowcol, NULL );

  kprowcol = XtVaCreateWidget ( "kprowcol", xmRowColumnWidgetClass, rowcol,
   XmNorientation, XmHORIZONTAL,
   XmNnumColumns, 4,
   XmNpacking, XmPACK_COLUMN,
   NULL );

  bottomForm = XtVaCreateWidget ( "botform", xmFormWidgetClass, rowcol, NULL );

  text = XtVaCreateManagedWidget ( "text", xmTextFieldWidgetClass, topForm,
   XmNcolumns, (short) MAXCHARS,
   XmNmaxLength, (short) MAXCHARS,
   XmNleftAttachment, XmATTACH_FORM,
   XmNrightAttachment, XmATTACH_FORM,
   XmNeditable, 0,
   XmNcursorPositionVisible, 0,
   NULL );

  positive = 1;
  count = 0;

  state = ISNULL;
  strcpy ( this->buf, "-" );
  XmTextFieldSetString ( text, "" );

  if ( hex ) {

    MAXCHARS = 9;

// ---------------------------------------

    if ( entryTag )
      str = XmStringCreate ( " C", entryTag );
    else
      str = XmStringCreateLocalized ( " C" );

    pbc = XtVaCreateManagedWidget (
     "pb", xmPushButtonWidgetClass,
     kprowcol,
     XmNlabelString, str,
     NULL );

    XmStringFree ( str );

    XtAddCallback ( pbc, XmNactivateCallback, (XtCallbackProc) func, this );

// ---------------------------------------

    if ( entryTag )
      str = XmStringCreate ( " D", entryTag );
    else
      str = XmStringCreateLocalized ( " D" );

    pbd = XtVaCreateManagedWidget (
     "pb", xmPushButtonWidgetClass,
     kprowcol,
     XmNlabelString, str,
     NULL );

    XmStringFree ( str );

    XtAddCallback ( pbd, XmNactivateCallback, (XtCallbackProc) func, this );

// ---------------------------------------

    if ( entryTag )
      str = XmStringCreate ( " E", entryTag );
    else
      str = XmStringCreateLocalized ( " E" );

    pbe = XtVaCreateManagedWidget (
     "pb", xmPushButtonWidgetClass,
     kprowcol,
     XmNlabelString, str,
     NULL );

    XmStringFree ( str );

    XtAddCallback ( pbe, XmNactivateCallback, (XtCallbackProc) func, this );

// ---------------------------------------

    if ( entryTag )
      str = XmStringCreate ( " F ", entryTag );
    else
      str = XmStringCreateLocalized ( " F " );

    pbf = XtVaCreateManagedWidget (
     "pb", xmPushButtonWidgetClass,
     kprowcol,
     XmNlabelString, str,
     NULL );

    XmStringFree ( str );

    XtAddCallback ( pbf, XmNactivateCallback, (XtCallbackProc) func, this );

// ---------------------------------------

    if ( entryTag )
      str = XmStringCreate ( " 8", entryTag );
    else
      str = XmStringCreateLocalized ( " 8" );

    pb8 = XtVaCreateManagedWidget (
     "pb", xmPushButtonWidgetClass,
     kprowcol,
     XmNlabelString, str,
     NULL );

    XmStringFree ( str );

    XtAddCallback ( pb8, XmNactivateCallback, (XtCallbackProc) func, this );

// ---------------------------------------

    if ( entryTag )
      str = XmStringCreate ( " 9", entryTag );
    else
      str = XmStringCreateLocalized ( " 9" );

    pb9 = XtVaCreateManagedWidget (
     "pb", xmPushButtonWidgetClass,
     kprowcol,
     XmNlabelString, str,
     NULL );

    XmStringFree ( str );

    XtAddCallback ( pb9, XmNactivateCallback, (XtCallbackProc) func, this );

// ---------------------------------------

    if ( entryTag )
      str = XmStringCreate ( " A", entryTag );
    else
      str = XmStringCreateLocalized ( " A" );

    pba = XtVaCreateManagedWidget (
     "pb", xmPushButtonWidgetClass,
     kprowcol,
     XmNlabelString, str,
     NULL );

    XmStringFree ( str );

    XtAddCallback ( pba, XmNactivateCallback, (XtCallbackProc) func, this );

// ---------------------------------------

    if ( entryTag )
      str = XmStringCreate ( " B", entryTag );
    else
      str = XmStringCreateLocalized ( " B" );

    pbb = XtVaCreateManagedWidget (
     "pb", xmPushButtonWidgetClass,
     kprowcol,
     XmNlabelString, str,
     NULL );

    XmStringFree ( str );

    XtAddCallback ( pbb, XmNactivateCallback, (XtCallbackProc) func, this );

// ---------------------------------------

    if ( entryTag )
      str = XmStringCreate ( " 4", entryTag );
    else
      str = XmStringCreateLocalized ( " 4" );

    pb4 = XtVaCreateManagedWidget (
     "pb", xmPushButtonWidgetClass,
     kprowcol,
     XmNlabelString, str,
     NULL );

    XmStringFree ( str );

    XtAddCallback ( pb4, XmNactivateCallback, (XtCallbackProc) func, this );

// ---------------------------------------

    if ( entryTag )
      str = XmStringCreate ( " 5", entryTag );
    else
      str = XmStringCreateLocalized ( " 5" );

    pb5 = XtVaCreateManagedWidget (
     "pb", xmPushButtonWidgetClass,
     kprowcol,
     XmNlabelString, str,
     NULL );

    XmStringFree ( str );

    XtAddCallback ( pb5, XmNactivateCallback, (XtCallbackProc) func, this );

// ---------------------------------------

    if ( entryTag )
      str = XmStringCreate ( " 6", entryTag );
    else
      str = XmStringCreateLocalized ( " 6" );

    pb6 = XtVaCreateManagedWidget (
     "pb", xmPushButtonWidgetClass,
     kprowcol,
     XmNlabelString, str,
     NULL );

    XmStringFree ( str );

    XtAddCallback ( pb6, XmNactivateCallback, (XtCallbackProc) func, this );

// ---------------------------------------

    if ( entryTag )
      str = XmStringCreate ( " 7", entryTag );
    else
      str = XmStringCreateLocalized ( " 7" );

    pb7 = XtVaCreateManagedWidget (
     "pb", xmPushButtonWidgetClass,
     kprowcol,
     XmNlabelString, str,
     NULL );

    XmStringFree ( str );

    XtAddCallback ( pb7, XmNactivateCallback, (XtCallbackProc) func, this );

// ---------------------------------------

    if ( entryTag )
      str = XmStringCreate ( " 0", entryTag );
    else
      str = XmStringCreateLocalized ( " 0" );

    pb0 = XtVaCreateManagedWidget (
     "pb", xmPushButtonWidgetClass,
     kprowcol,
     XmNlabelString, str,
     NULL );

    XmStringFree ( str );

    XtAddCallback ( pb0, XmNactivateCallback, (XtCallbackProc) func, this );

// ---------------------------------------

    if ( entryTag )
      str = XmStringCreate ( " 1", entryTag );
    else
      str = XmStringCreateLocalized ( " 1" );

    pb1 = XtVaCreateManagedWidget (
     "pb", xmPushButtonWidgetClass,
     kprowcol,
     XmNlabelString, str,
     NULL );

    XmStringFree ( str );

    XtAddCallback ( pb1, XmNactivateCallback, (XtCallbackProc) func, this );

// ---------------------------------------

    if ( entryTag )
      str = XmStringCreate ( " 2", entryTag );
    else
      str = XmStringCreateLocalized ( " 2" );

    pb2 = XtVaCreateManagedWidget (
     "pb", xmPushButtonWidgetClass,
     kprowcol,
     XmNlabelString, str,
     NULL );

    XmStringFree ( str );

    XtAddCallback ( pb2, XmNactivateCallback, (XtCallbackProc) func, this );

// ---------------------------------------

    if ( entryTag )
      str = XmStringCreate ( " 3", entryTag );
    else
      str = XmStringCreateLocalized ( " 3" );

    pb3 = XtVaCreateManagedWidget (
     "pb", xmPushButtonWidgetClass,
     kprowcol,
     XmNlabelString, str,
     NULL );

    XmStringFree ( str );

    XtAddCallback ( pb3, XmNactivateCallback, (XtCallbackProc) func, this );

// ---------------------------------------

  }
  else {

    MAXCHARS = 14;

// ---------------------------------------

    if ( entryTag )
      str = XmStringCreate ( " 1", entryTag );
    else
      str = XmStringCreateLocalized ( " 1" );

    pb1 = XtVaCreateManagedWidget (
     "pb", xmPushButtonWidgetClass,
     kprowcol,
     XmNlabelString, str,
     NULL );

    XmStringFree ( str );

    XtAddCallback ( pb1, XmNactivateCallback, (XtCallbackProc) func, this );

// ---------------------------------------

    if ( entryTag )
      str = XmStringCreate ( " 2", entryTag );
    else
      str = XmStringCreateLocalized ( " 2" );

    pb2 = XtVaCreateManagedWidget (
     "pb", xmPushButtonWidgetClass,
     kprowcol,
     XmNlabelString, str,
     NULL );

    XmStringFree ( str );

    XtAddCallback ( pb2, XmNactivateCallback, (XtCallbackProc) func, this );

// ---------------------------------------

    if ( entryTag )
      str = XmStringCreate ( " 3", entryTag );
    else
      str = XmStringCreateLocalized ( " 3" );

    pb3 = XtVaCreateManagedWidget (
     "pb", xmPushButtonWidgetClass,
     kprowcol,
     XmNlabelString, str,
     NULL );

    XmStringFree ( str );

    XtAddCallback ( pb3, XmNactivateCallback, (XtCallbackProc) func, this );

// ---------------------------------------

    if ( entryTag )
      str = XmStringCreate ( " 4", entryTag );
    else
      str = XmStringCreateLocalized ( " 4" );

    pb4 = XtVaCreateManagedWidget (
     "pb", xmPushButtonWidgetClass,
     kprowcol,
     XmNlabelString, str,
     NULL );

    XmStringFree ( str );

    XtAddCallback ( pb4, XmNactivateCallback, (XtCallbackProc) func, this );

// ---------------------------------------

    if ( entryTag )
      str = XmStringCreate ( " 5", entryTag );
    else
      str = XmStringCreateLocalized ( " 5" );

    pb5 = XtVaCreateManagedWidget (
     "pb", xmPushButtonWidgetClass,
     kprowcol,
     XmNlabelString, str,
     NULL );

    XmStringFree ( str );

    XtAddCallback ( pb5, XmNactivateCallback, (XtCallbackProc) func, this );

// ---------------------------------------

    if ( entryTag )
      str = XmStringCreate ( " 6", entryTag );
    else
      str = XmStringCreateLocalized ( " 6" );

    pb6 = XtVaCreateManagedWidget (
     "pb", xmPushButtonWidgetClass,
     kprowcol,
     XmNlabelString, str,
     NULL );

    XmStringFree ( str );

    XtAddCallback ( pb6, XmNactivateCallback, (XtCallbackProc) func, this );

// ---------------------------------------

    if ( entryTag )
      str = XmStringCreate ( " 7", entryTag );
    else
      str = XmStringCreateLocalized ( " 7" );

    pb7 = XtVaCreateManagedWidget (
     "pb", xmPushButtonWidgetClass,
     kprowcol,
     XmNlabelString, str,
     NULL );

    XmStringFree ( str );

    XtAddCallback ( pb7, XmNactivateCallback, (XtCallbackProc) func, this );

// ---------------------------------------

    if ( entryTag )
      str = XmStringCreate ( " 8", entryTag );
    else
      str = XmStringCreateLocalized ( " 8" );

    pb8 = XtVaCreateManagedWidget (
     "pb", xmPushButtonWidgetClass,
     kprowcol,
     XmNlabelString, str,
     NULL );

    XmStringFree ( str );

    XtAddCallback ( pb8, XmNactivateCallback, (XtCallbackProc) func, this );

// ---------------------------------------

    if ( entryTag )
      str = XmStringCreate ( " 9", entryTag );
    else
      str = XmStringCreateLocalized ( " 9" );

    pb9 = XtVaCreateManagedWidget (
     "pb", xmPushButtonWidgetClass,
     kprowcol,
     XmNlabelString, str,
     NULL );

    XmStringFree ( str );

    XtAddCallback ( pb9, XmNactivateCallback, (XtCallbackProc) func, this );

// ---------------------------------------

    if ( entryTag )
      str = XmStringCreate ( " 0 ", entryTag );
    else
      str = XmStringCreateLocalized ( " 0 " );

    pb0 = XtVaCreateManagedWidget (
     "pb", xmPushButtonWidgetClass,
   bottomForm,
   XmNlabelString, str,
   XmNbottomAttachment, XmATTACH_FORM,
   XmNleftAttachment, XmATTACH_FORM,
     NULL );

    XmStringFree ( str );

    XtAddCallback ( pb0, XmNactivateCallback, (XtCallbackProc) func, this );

// ---------------------------------------
  if ( entryTag )
    str = XmStringCreate ( " x ", entryTag );
  else
    str = XmStringCreateLocalized ( " x " );

  pbCancel = XtVaCreateManagedWidget (
   "pbcancel", xmPushButtonWidgetClass,
   bottomForm,
   XmNlabelString, str,
   XmNbottomAttachment, XmATTACH_FORM,
   XmNrightAttachment, XmATTACH_WIDGET,
   NULL );

  XmStringFree ( str );

  XtAddCallback ( pbCancel, XmNactivateCallback, (XtCallbackProc) func, this );

// ---------------------------------------
/*
    if ( entryTag )
      str = XmStringCreate ( " .", entryTag );
    else
      str = XmStringCreateLocalized ( " ." );

    pbPoint = XtVaCreateManagedWidget (
     "pb", xmPushButtonWidgetClass,
     kprowcol,
     XmNlabelString, str,
     NULL );

    XmStringFree ( str );

    XtAddCallback ( pbPoint, XmNactivateCallback, (XtCallbackProc) func, this );
*/
// ---------------------------------------
/*
    if ( entryTag )
      str = XmStringCreate ( "+/-", entryTag );
    else
      str = XmStringCreateLocalized ( "+/-" );

    pbSign = XtVaCreateManagedWidget (
     "pb", xmPushButtonWidgetClass,
     kprowcol,
     XmNlabelString, str,
     NULL );

    XmStringFree ( str );

    XtAddCallback ( pbSign, XmNactivateCallback, (XtCallbackProc) func, this );
*/
// ---------------------------------------

  } // end if ( hex ...

// ---------------------------------------
/*
  if ( entryTag )
    str = XmStringCreate ( "Cancel", entryTag );
  else
    str = XmStringCreateLocalized ( "Cancel" );

  pbCancel = XtVaCreateManagedWidget (
   "pbcancel", xmPushButtonWidgetClass,
   bottomForm,
   XmNlabelString, str,
   XmNbottomAttachment, XmATTACH_FORM,
   XmNleftAttachment, XmATTACH_FORM,
   NULL );

  XmStringFree ( str );

  XtAddCallback ( pbCancel, XmNactivateCallback, (XtCallbackProc) func, this );

// ---------------------------------------

  if ( entryTag )
    str = XmStringCreate ( "OK", entryTag );
  else
    str = XmStringCreateLocalized ( "OK" );

  pbOK = XtVaCreateManagedWidget (
   "pbok", xmPushButtonWidgetClass,
   bottomForm,
   XmNlabelString, str,
   XmNbottomAttachment, XmATTACH_FORM,
   XmNrightAttachment, XmATTACH_FORM,
   NULL );

  XmStringFree ( str );

  XtAddCallback ( pbOK, XmNactivateCallback, (XtCallbackProc) func, this );

// ---------------------------------------

  if ( entryTag )
    str = XmStringCreate ( "BS", entryTag );
  else
    str = XmStringCreateLocalized ( "BS" );

  pbBksp = XtVaCreateManagedWidget (
   "pbbksp", xmPushButtonWidgetClass,
   bottomForm,
   XmNlabelString, str,
   XmNbottomAttachment, XmATTACH_FORM,
   XmNrightAttachment, XmATTACH_WIDGET,
   XmNrightWidget, pbOK,
   XmNleftAttachment, XmATTACH_WIDGET,
   XmNleftWidget, pbCancel,
   NULL );

  XmStringFree ( str );

  XtAddCallback ( pbBksp, XmNactivateCallback, (XtCallbackProc) func, this );
*/
// ---------------------------------------

//  XtManageChild ( topForm );
  XtManageChild ( kprowcol );
  XtManageChild ( bottomForm );
  XtManageChild ( rowcol );
  XtRealizeWidget ( shell );
  popup ();

  return 1;

}

int onekeypadClass::create (
  Widget top,
  int _x,
  int _y,
  char *label,
  //fontInfoClass *fi,
  //const char *entryFontTag,
  //const char *actionFontTag,
  int *destination,
  void *_userPtr,
  XtCallbackProc _okFunc,
  XtCallbackProc _cancelFunc ) {

int stat;

  hex = 0;

  stat = create ( top, _x, _y, label, onekeypadClass::INT,
   (void *) destination, _userPtr, _okFunc, _cancelFunc );
  return stat;

}

int onekeypadClass::create (
  Widget top,
  int _x,
  int _y,
  char *label,
  //fontInfoClass *fi,
  //const char *entryFontTag,
  //const char *actionFontTag,
  double *destination,
  void *_userPtr,
  XtCallbackProc _okFunc,
  XtCallbackProc _cancelFunc ) {

int stat;

  hex = 0;

  stat = create ( top, _x, _y, label, onekeypadClass::DOUBLE,
   (void *) destination, _userPtr, _okFunc, _cancelFunc );
  return stat;

}

int onekeypadClass::createHex (
  Widget top,
  int _x,
  int _y,
  char *label,
  //fontInfoClass *fi,
  //const char *entryFontTag,
  //const char *actionFontTag,
  int *destination,
  void *_userPtr,
  XtCallbackProc _okFunc,
  XtCallbackProc _cancelFunc ) {

int stat;

  hex = 1;

  stat = create ( top, _x, _y, label, onekeypadClass::INT,
   (void *) destination, _userPtr, _okFunc, _cancelFunc );
  return stat;

}

int onekeypadClass::createHex (
  Widget top,
  int _x,
  int _y,
  char *label,
  //fontInfoClass *fi,
  //const char *entryFontTag,
  //const char *actionFontTag,
  double *destination,
  void *_userPtr,
  XtCallbackProc _okFunc,
  XtCallbackProc _cancelFunc ) {

int stat;

  hex = 1;

  stat = create ( top, _x, _y, label, onekeypadClass::DOUBLE,
   (void *) destination, _userPtr, _okFunc, _cancelFunc );
  return stat;

}

#if 0

main () {

XtAppContext app;
Display *display;
Widget appTop, mainWin;
onekeypadClass kp, kp1;
int dest, old;
double dest1, old1;
XEvent Xev;
int result, isXEvent, argc;

  argc = 0;
  appTop = XtVaAppInitialize ( &app, "edm", NULL, 0, &argc,
   NULL, NULL, XmNiconic, False, NULL );

  mainWin = XtVaCreateManagedWidget ( "", xmMainWindowWidgetClass,
   appTop,
   XmNwidth, 500,
   XmNheight, 500,
   XmNscrollBarDisplayPolicy, XmAS_NEEDED,
   XmNscrollingPolicy, XmAUTOMATIC,
   NULL );

  XtRealizeWidget ( appTop );

  display = XtDisplay ( appTop );

  old = -1;
  dest = 0;

  kp.create ( appTop, 100, 100, "label", &dest );

  old1 = -1;
  dest1 = 0;

  kp1.create ( appTop, 300, 200, "label", &dest1 );

  while ( 1 ) {

  do {
    result = XtAppPending ( app );
    if ( result ) {
      isXEvent = XtAppPeekEvent ( app, &Xev );
      if ( isXEvent ) {
        if ( Xev.type != Expose ) {
          XtAppProcessEvent ( app, result );
        }
        else {
          XtAppProcessEvent ( app, result );
        }
      }
      else { // process all timer or alternate events
        XtAppProcessEvent ( app, result );
      }
    }
  } while ( result );

  if ( dest != old ) {
    printf ( "dest = %-d\n", dest );
    old = dest;
  }

  if ( dest1 != old1 ) {
    printf ( "dest1 = %-g\n", dest1 );
    old1 = dest1;
  }

  }

}
#endif
