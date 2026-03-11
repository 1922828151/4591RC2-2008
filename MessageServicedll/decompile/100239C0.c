/*
 * func-name: sub_100239C0
 * func-address: 0x100239c0
 * callers: 0x10023ab0
 * callees: 0x1000b280, 0x100294f2
 */

void __thiscall sub_100239C0(_DWORD *this)
{
  int v2; // eax

  *this = &Outpop::Message::Post_Asynch_Request::`vftable';
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
