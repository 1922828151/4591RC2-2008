/*
 * func-name: ?set_addr@INET_Addr@IONetwork@Outpop@@UAEXPAXHH@Z
 * func-address: 0x10002d40
 * callers: none
 * callees: none
 */

_WORD *__thiscall Outpop::IONetwork::INET_Addr::set_addr(Outpop::IONetwork::INET_Addr *this, _WORD *a2, int a3, int a4)
{
  _WORD *result; // eax

  result = a2;
  if ( *a2 == 2 )
  {
    *((_DWORD *)this + 1) = 2;
    *((_WORD *)this + 7) = a2[1];
    result = (_WORD *)*((_DWORD *)a2 + 1);
    if ( !a4 )
    {
      *((_DWORD *)this + 1) = 2;
      *((_WORD *)this + 6) = 2;
      *((_DWORD *)this + 2) = 16;
      *((_DWORD *)this + 4) = result;
    }
  }
  return result;
}
