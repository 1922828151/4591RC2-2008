/*
 * func-name: sub_1004C140
 * func-address: 0x1004c140
 * callers: 0x1004c160, 0x1004c170, 0x1004c180
 * callees: none
 */

xercesc_2_5::XercesDOMParser *__thiscall sub_1004C140(xercesc_2_5::XercesDOMParser *this, char a2)
{
  xercesc_2_5::XercesDOMParser::~XercesDOMParser(this);
  if ( (a2 & 1) != 0 )
    xercesc_2_5::XMemory::operator delete(this);
  return this;
}
