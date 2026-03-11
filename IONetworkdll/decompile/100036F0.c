/*
 * func-name: ?set_address@INET_Addr@IONetwork@Outpop@@QAEHPBDHHH@Z
 * func-address: 0x100036f0
 * callers: none
 * callees: 0x1004f11e
 */

int __thiscall Outpop::IONetwork::INET_Addr::set_address(
        Outpop::IONetwork::INET_Addr *this,
        const char *a2,
        unsigned int Src,
        int a4,
        int a5)
{
  size_t v5; // esi
  unsigned int v7; // eax

  v5 = Src;
  if ( a4 )
  {
    if ( Src != 4 )
      return -1;
  }
  else if ( Src != 4 )
  {
    return -1;
  }
  v7 = *(_DWORD *)a2;
  Src = *(_DWORD *)a2;
  if ( a4 )
    Src = (((v7 << 16) | v7 & 0xFF00) << 8) | ((HIWORD(v7) | v7 & 0xFF0000) >> 8);
  if ( *((_DWORD *)this + 1) == 2 && !a5 )
  {
    *((_DWORD *)this + 1) = 2;
    *((_WORD *)this + 6) = 2;
    *((_DWORD *)this + 2) = 16;
    memcpy((char *)this + 16, &Src, v5);
  }
  return 0;
}
