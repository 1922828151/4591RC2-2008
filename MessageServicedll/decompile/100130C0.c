/*
 * func-name: sub_100130C0
 * func-address: 0x100130c0
 * callers: 0x100131a0
 * callees: 0x100294f2
 */

void __thiscall sub_100130C0(void **this)
{
  *this = &Outpop::Message::Post_Close_Connector::`vftable';
  if ( this[9] )
    operator delete(this[9]);
  this[9] = 0;
  this[10] = 0;
  this[11] = 0;
  *this = &Outpop::IONetwork::Asynch_Result::`vftable';
}
