/*
 * func-name: sub_100195E0
 * func-address: 0x100195e0
 * callers: 0x1001a870
 * callees: 0x100162c0
 */

void __thiscall sub_100195E0(_DWORD *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx

  *this = &Outpop::IONetwork::Wait_Stream_Channel<Outpop::IONetwork::Stream_Acceptor,Outpop::IONetwork::Accept_Bluider_Process>::`vftable';
  v2 = (void (__thiscall ***)(_DWORD, int))this[21];
  if ( v2 )
    (**v2)(v2, 1);
  if ( this[20] != -1 )
    closesocket(this[20]);
  sub_100162C0(this);
}
