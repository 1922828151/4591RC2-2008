/*
 * func-name: sub_1004C190
 * func-address: 0x1004c190
 * callers: none
 * callees: none
 */

xercesc_2_5::MemBufInputSource *__thiscall sub_1004C190(xercesc_2_5::MemBufInputSource *this, char a2)
{
  xercesc_2_5::MemBufInputSource::~MemBufInputSource(this);
  if ( (a2 & 1) != 0 )
    xercesc_2_5::XMemory::operator delete(this);
  return this;
}
