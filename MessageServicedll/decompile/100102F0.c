/*
 * func-name: sub_100102F0
 * func-address: 0x100102f0
 * callers: 0x100105a0
 * callees: 0x100294f2
 */

void __thiscall sub_100102F0(void **this)
{
  *this = &Outpop::Message::Post_Start_Channel::`vftable';
  if ( this[9] )
    operator delete(this[9]);
  this[9] = 0;
  this[10] = 0;
  this[11] = 0;
  *this = &Outpop::IONetwork::Asynch_Result::`vftable';
}
