/*
 * func-name: sub_10010640
 * func-address: 0x10010640
 * callers: 0x10010720
 * callees: 0x100294f2
 */

void __thiscall sub_10010640(void **this)
{
  *this = &Outpop::Message::Post_Close_Channel::`vftable';
  if ( this[9] )
    operator delete(this[9]);
  this[9] = 0;
  this[10] = 0;
  this[11] = 0;
  *this = &Outpop::IONetwork::Asynch_Result::`vftable';
}
