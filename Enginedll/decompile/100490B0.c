/*
 * func-name: sub_100490B0
 * func-address: 0x100490b0
 * callers: none
 * callees: 0x101a2500
 */

_DWORD *__thiscall sub_100490B0(_DWORD *this, char a2)
{
  *this = &DOMPrintErrorHandler::`vftable';
  *this = xercesc_2_5::DOMErrorHandler::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
