/*
 * func-name: sub_1001AA00
 * func-address: 0x1001aa00
 * callers: 0x1001ab70
 * callees: 0x1000b280, 0x100294f2
 */

void __thiscall sub_1001AA00(_DWORD *this)
{
  int v2; // eax

  *this = &Outpop::Message::Post_Asynch_Group_Request::`vftable';
  v2 = this[9];
  if ( v2 )
  {
    sub_1000B280(v2, this[10]);
    operator delete((void *)this[9]);
  }
  this[9] = 0;
  this[10] = 0;
  this[11] = 0;
  *this = &Outpop::IONetwork::Asynch_Result::`vftable';
}
