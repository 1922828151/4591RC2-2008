/*
 * func-name: ?run@Peer@P2P@Outpop@@QAEXXZ
 * func-address: 0x10003ce0
 * callers: none
 * callees: 0x100073a0, 0x10010fd0
 */

void __thiscall Outpop::P2P::Peer::run(Outpop::P2P::Peer *this)
{
  int v2; // [esp+0h] [ebp-8h]
  int v3; // [esp+4h] [ebp-4h]

  *((_BYTE *)this + 156) = 1;
  while ( sub_100073A0(v2, v3) != -1 && *((_BYTE *)this + 156) )
    ;
  if ( *((_DWORD *)this + 7) )
    sub_10010FD0(*((_DWORD *)this + 7));
}
