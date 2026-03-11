/*
 * func-name: ??0INET_Addr@IONetwork@Outpop@@QAE@XZ
 * func-address: 0x10002600
 * callers: 0x10004050, 0x10004500, 0x10004f50, 0x10008c40, 0x10016200, 0x10016bf0, 0x10017730, 0x10019db0, 0x1001dcb0, 0x1001dec0, 0x1001ee70, 0x1001fde0, 0x10020350, 0x100261f0, 0x1002ab40, 0x1002c520, 0x1002c5c0, 0x10036040, 0x10036650, 0x1003a350, 0x1003c2d0, 0x1003c370, 0x1003fdd0, 0x10040dc0, 0x1004a940, 0x1004e630, 0x1004e6d0
 * callees: none
 */

Outpop::IONetwork::INET_Addr *__thiscall Outpop::IONetwork::INET_Addr::INET_Addr(Outpop::IONetwork::INET_Addr *this)
{
  Outpop::IONetwork::INET_Addr *result; // eax

  result = this;
  *(_DWORD *)this = &Outpop::IONetwork::Addr::`vftable';
  *((_DWORD *)this + 2) = 16;
  *((_DWORD *)this + 1) = 2;
  *(_DWORD *)this = &Outpop::IONetwork::INET_Addr::`vftable';
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  if ( *((_DWORD *)this + 1) == 2 )
    *((_WORD *)this + 6) = 2;
  return result;
}
