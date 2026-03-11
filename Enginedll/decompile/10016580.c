/*
 * func-name: sub_10016580
 * func-address: 0x10016580
 * callers: none
 * callees: 0x101a2500
 */

_DWORD *__thiscall sub_10016580(_DWORD *this, char a2)
{
  *this = &DOMPrintFilter::`vftable';
  *this = xercesc_2_5::DOMWriterFilter::`vftable';
  *this = xercesc_2_5::DOMNodeFilter::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
