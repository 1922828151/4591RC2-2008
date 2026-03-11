/*
 * func-name: sub_10049080
 * func-address: 0x10049080
 * callers: none
 * callees: 0x101a2500
 */

_DWORD *__thiscall sub_10049080(_DWORD *this, char a2)
{
  *this = &DOMTreeErrorReporter::`vftable';
  *this = xercesc_2_5::ErrorHandler::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
