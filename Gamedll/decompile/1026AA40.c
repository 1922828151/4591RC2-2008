/*
 * func-name: ??1CDropBagUI@@UAE@XZ_0
 * func-address: 0x1026aa40
 * callers: 0x10014493
 * callees: 0x1001a546, 0x102c9d50
 */

void __thiscall CDropBagUI::~CDropBagUI(void **this)
{
  *this = &CDropBagUI::`vftable';
  if ( this[1010] )
    operator delete(this[1010]);
  this[1010] = 0;
  this[1011] = 0;
  this[1012] = 0;
  sub_1001A546();
  operator delete(this[1007]);
  this[1007] = 0;
  if ( this[1002] )
    operator delete(this[1002]);
  this[1002] = 0;
  this[1003] = 0;
  this[1004] = 0;
  if ( this[998] )
    operator delete(this[998]);
  this[998] = 0;
  this[999] = 0;
  this[1000] = 0;
  if ( this[984] )
    operator delete(this[984]);
  this[984] = 0;
  this[985] = 0;
  this[986] = 0;
  if ( this[980] )
    operator delete(this[980]);
  this[980] = 0;
  this[981] = 0;
  this[982] = 0;
  if ( this[976] )
    operator delete(this[976]);
  this[976] = 0;
  this[977] = 0;
  this[978] = 0;
  if ( this[972] )
    operator delete(this[972]);
  this[972] = 0;
  this[973] = 0;
  this[974] = 0;
  CTYDialog::~CTYDialog((CTYDialog *)this);
}
