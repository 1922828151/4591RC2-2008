/*
 * func-name: sub_1001A7E0
 * func-address: 0x1001a7e0
 * callers: 0x1001a960
 * callees: 0x1001e540, 0x100294f2
 */

void __thiscall sub_1001A7E0(void *this)
{
  int v2; // eax

  *(_DWORD *)this = &Outpop::Message::Post_Asynch_Group_Send::`vftable';
  v2 = *((_DWORD *)this + 9);
  if ( v2 )
  {
    sub_1001E540(v2, this);
    operator delete(*((void **)this + 9));
  }
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *(_DWORD *)this = &Outpop::IONetwork::Asynch_Result::`vftable';
}
