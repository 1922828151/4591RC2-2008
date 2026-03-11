/*
 * func-name: ?RemoveSeat@Establishment@GameClient@@QAE_NH@Z_0
 * func-address: 0x101a45a0
 * callers: 0x10014d0d
 * callees: none
 */

char __thiscall GameClient::Establishment::RemoveSeat(GameClient::Establishment *this, unsigned int a2)
{
  unsigned int v3; // ecx
  unsigned int v5; // edi
  unsigned int v6; // edi
  int v7; // eax

  v3 = *((_DWORD *)this + 49);
  if ( !v3 || a2 >= (int)(*((_DWORD *)this + 50) - v3) >> 2 )
    return 0;
  v5 = v3;
  if ( v3 > *((_DWORD *)this + 50) )
    _invalid_parameter_noinfo();
  v6 = v5 + 4 * a2;
  if ( v6 > *((_DWORD *)this + 50) || v6 < *((_DWORD *)this + 49) )
    _invalid_parameter_noinfo();
  v7 = (int)(*((_DWORD *)this + 50) - (v6 + 4)) >> 2;
  if ( v7 > 0 )
    memmove_s((void *const)v6, 4 * v7, (const void *const)(v6 + 4), 4 * v7);
  *((_DWORD *)this + 50) -= 4;
  return 1;
}
