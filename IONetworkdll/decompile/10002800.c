/*
 * func-name: ?set@INET_Addr@IONetwork@Outpop@@QAEHGIHH@Z
 * func-address: 0x10002800
 * callers: 0x10002880
 * callees: none
 */

int __thiscall Outpop::IONetwork::INET_Addr::set(
        Outpop::IONetwork::INET_Addr *this,
        u_short hostshort,
        unsigned int a3,
        int a4,
        int a5)
{
  unsigned int v5; // eax

  v5 = a3;
  if ( a4 )
    v5 = (((a3 << 16) | a3 & 0xFF00) << 8) | ((HIWORD(a3) | a3 & 0xFF0000) >> 8);
  if ( *((_DWORD *)this + 1) == 2 && !a5 )
  {
    *((_DWORD *)this + 1) = 2;
    *((_WORD *)this + 6) = 2;
    *((_DWORD *)this + 2) = 16;
    *((_DWORD *)this + 4) = v5;
  }
  if ( a4 )
    *((_WORD *)this + 7) = htons(hostshort);
  else
    *((_WORD *)this + 7) = hostshort;
  return 0;
}
