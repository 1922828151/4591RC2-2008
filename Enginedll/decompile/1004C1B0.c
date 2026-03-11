/*
 * func-name: sub_1004C1B0
 * func-address: 0x1004c1b0
 * callers: none
 * callees: none
 */

xercesc_2_5::LocalFileFormatTarget *__thiscall sub_1004C1B0(xercesc_2_5::LocalFileFormatTarget *this, char a2)
{
  xercesc_2_5::LocalFileFormatTarget::~LocalFileFormatTarget(this);
  if ( (a2 & 1) != 0 )
    xercesc_2_5::XMemory::operator delete(this);
  return this;
}
