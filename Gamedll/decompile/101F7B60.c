/*
 * func-name: ?IsInGroup@Group@GameClient@@QBE_NK@Z_0
 * func-address: 0x101f7b60
 * callers: 0x1000564b
 * callees: none
 */

char __thiscall GameClient::Group::IsInGroup(GameClient::Group *this, unsigned int a2)
{
  unsigned int v2; // edi
  int i; // ebx
  int v5; // eax
  int v6; // eax

  v2 = 0;
  for ( i = 0; ; i += 84 )
  {
    v5 = *((_DWORD *)this + 4);
    if ( !v5 || v2 >= (*((_DWORD *)this + 5) - v5) / 84 )
      break;
    v6 = *((_DWORD *)this + 4);
    if ( !v6 || v2 >= (*((_DWORD *)this + 5) - v6) / 84 )
      _invalid_parameter_noinfo();
    if ( *(_DWORD *)(i + *((_DWORD *)this + 4)) == a2 )
      return 1;
    ++v2;
  }
  return 0;
}
