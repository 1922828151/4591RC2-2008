/*
 * func-name: ?write_7bit_value@Utility@Outpop@@YAXIAAVStream_Base@12@@Z
 * func-address: 0x1000f950
 * callers: none
 * callees: 0x1000fa00
 */

void __cdecl Outpop::Utility::write_7bit_value(Outpop::Utility *this)
{
  unsigned int i; // ebx

  for ( i = (unsigned int)this; i >= 0x80; i >>= 7 )
  {
    LOBYTE(this) = i | 0x80;
    sub_1000FA00(&this);
  }
  LOBYTE(this) = i;
  sub_1000FA00(&this);
}
