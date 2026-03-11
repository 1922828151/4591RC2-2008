/*
 * func-name: sub_10034630
 * func-address: 0x10034630
 * callers: 0x10034c30
 * callees: 0x101a2500
 */

void __thiscall sub_10034630(int this)
{
  int i; // ebx
  _DWORD *v3; // eax
  _DWORD *v4; // esi

  for ( i = 0; i < *(_DWORD *)(this + 12); ++i )
  {
    v3 = *(_DWORD **)(*(_DWORD *)(this + 8) + 4 * i);
    if ( v3 )
    {
      do
      {
        v4 = (_DWORD *)v3[1];
        operator delete(v3);
        v3 = v4;
      }
      while ( v4 );
    }
  }
  if ( *(_DWORD *)(this + 8) )
  {
    free(*(void **)(this + 8));
    *(_DWORD *)(this + 8) = 0;
  }
  *(_DWORD *)(this + 12) = 0;
  *(_DWORD *)(this + 16) = 0;
}
