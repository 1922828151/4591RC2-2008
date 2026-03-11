/*
 * func-name: ?FindActor@World@@QAEPAVActor@@U_GUID@@@Z
 * func-address: 0x10137860
 * callers: 0x10043960, 0x10137bf0
 * callees: 0x100e2700
 */

struct Actor *__thiscall World::FindActor(World *this, struct _GUID a2)
{
  unsigned int i; // edi
  int v4; // ecx
  int v5; // ecx
  int v6; // eax

  for ( i = 0; ; ++i )
  {
    v4 = *((_DWORD *)this + 806);
    if ( !v4 || i >= (*((_DWORD *)this + 807) - v4) >> 2 )
      return 0;
    if ( sub_100E2700((_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 806) + 4 * i) + 256), &a2) )
    {
      v5 = *((_DWORD *)this + 806);
      if ( !v5 || i >= (*((_DWORD *)this + 807) - v5) >> 2 )
        invalid_parameter_noinfo();
      v6 = *((_DWORD *)this + 806);
      if ( *(_BYTE *)(*(_DWORD *)(v6 + 4 * i) + 442) )
        break;
    }
  }
  if ( !v6 || i >= (*((_DWORD *)this + 807) - v6) >> 2 )
    invalid_parameter_noinfo();
  return *(struct Actor **)(*((_DWORD *)this + 806) + 4 * i);
}
