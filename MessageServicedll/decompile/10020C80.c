/*
 * func-name: sub_10020C80
 * func-address: 0x10020c80
 * callers: 0x10020e50
 * callees: 0x1001e540, 0x100294f2
 */

void __thiscall sub_10020C80(_DWORD *this)
{
  int v2; // eax

  *this = &Outpop::Message::Post_Asynch_Message::`vftable';
  v2 = this[9];
  if ( v2 )
  {
    sub_1001E540(this[10], v2);
    operator delete((void *)this[9]);
  }
  this[9] = 0;
  this[10] = 0;
  this[11] = 0;
  *this = &Outpop::IONetwork::Asynch_Result::`vftable';
}
