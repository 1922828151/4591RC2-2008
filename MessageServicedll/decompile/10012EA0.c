/*
 * func-name: sub_10012EA0
 * func-address: 0x10012ea0
 * callers: 0x10013020
 * callees: 0x1000b210, 0x100294f2
 */

void __thiscall sub_10012EA0(void *this)
{
  int v2; // eax

  *(_DWORD *)this = &Outpop::Message::Post_Connector::`vftable';
  v2 = *((_DWORD *)this + 13);
  if ( v2 )
  {
    sub_1000B210(*((_DWORD *)this + 14), v2);
    operator delete(*((void **)this + 13));
  }
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  if ( *((_DWORD *)this + 9) )
    operator delete(*((void **)this + 9));
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *(_DWORD *)this = &Outpop::IONetwork::Asynch_Result::`vftable';
}
