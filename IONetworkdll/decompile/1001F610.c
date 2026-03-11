/*
 * func-name: sub_1001F610
 * func-address: 0x1001f610
 * callers: 0x10020310
 * callees: 0x100162c0
 */

void __thiscall sub_1001F610(_DWORD *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx

  *this = &Outpop::IONetwork::Wait_Stream_Channel<Outpop::IONetwork::Stream_Connector,Outpop::IONetwork::Connect_Bluider_Process>::`vftable';
  v2 = (void (__thiscall ***)(_DWORD, int))this[21];
  if ( v2 )
    (**v2)(v2, 1);
  if ( this[20] != -1 )
    closesocket(this[20]);
  sub_100162C0(this);
}
