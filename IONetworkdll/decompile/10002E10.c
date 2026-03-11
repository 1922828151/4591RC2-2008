/*
 * func-name: ??0INET_Addr@IONetwork@Outpop@@QAE@ABV012@@Z
 * func-address: 0x10002e10
 * callers: 0x10004150, 0x10004630, 0x10005380, 0x10008d20, 0x10008df0, 0x10008e90, 0x10008f10, 0x10016370, 0x10016710, 0x10016a10, 0x10016ca0, 0x10017730, 0x10019410, 0x1001aa50, 0x1001c940, 0x1001d570, 0x1001da60, 0x1001ee70, 0x1001f250, 0x1001f440, 0x100216e0, 0x10022310, 0x10025eb0, 0x10027c50, 0x1002c790, 0x10042700
 * callees: 0x1004f11e
 */

Outpop::IONetwork::INET_Addr *__thiscall Outpop::IONetwork::INET_Addr::INET_Addr(
        Outpop::IONetwork::INET_Addr *this,
        const struct Outpop::IONetwork::INET_Addr *a2)
{
  int v3; // eax
  int v4; // ecx
  _WORD *v5; // eax

  v3 = *((_DWORD *)a2 + 2);
  v4 = *((_DWORD *)a2 + 1);
  *(_DWORD *)this = &Outpop::IONetwork::Addr::`vftable';
  *((_DWORD *)this + 2) = v3;
  *((_DWORD *)this + 1) = v4;
  v5 = (_WORD *)((char *)this + 12);
  *(_DWORD *)this = &Outpop::IONetwork::INET_Addr::`vftable';
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  if ( *((_DWORD *)this + 1) == 2 )
    *v5 = 2;
  if ( *((_DWORD *)a2 + 1) == -1 )
  {
    *(_DWORD *)v5 = 0;
    *((_DWORD *)this + 4) = 0;
    *((_DWORD *)this + 5) = 0;
    *((_DWORD *)this + 6) = 0;
  }
  else
  {
    memcpy((char *)this + 12, (char *)a2 + 12, *((_DWORD *)a2 + 2));
    *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
    *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  }
  return this;
}
