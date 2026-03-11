/*
 * func-name: ?reset@INET_Addr@IONetwork@Outpop@@AAEXXZ
 * func-address: 0x10002310
 * callers: none
 * callees: none
 */

int __thiscall Outpop::IONetwork::INET_Addr::reset(Outpop::IONetwork::INET_Addr *this)
{
  int result; // eax

  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  result = 2;
  if ( *((_DWORD *)this + 1) == 2 )
    *((_WORD *)this + 6) = 2;
  return result;
}
