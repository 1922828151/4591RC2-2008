/*
 * func-name: sub_10049980
 * func-address: 0x10049980
 * callers: 0x100175f8
 * callees: 0x102c9d50
 */

void __thiscall sub_10049980(int this)
{
  int v2; // eax
  int v3; // eax
  int v4; // edi
  int v5; // eax
  bool v6; // zf
  void **v7; // eax

  while ( *(_DWORD *)(this + 16) )
  {
    v2 = *(_DWORD *)(this + 16);
    if ( v2 )
    {
      v3 = v2 - 1;
      *(_DWORD *)(this + 16) = v3;
      if ( !v3 )
        *(_DWORD *)(this + 12) = 0;
    }
  }
  v4 = *(_DWORD *)(this + 8);
  while ( v4 )
  {
    v5 = *(_DWORD *)(this + 4);
    --v4;
    v6 = *(_DWORD *)(v5 + 4 * v4) == 0;
    v7 = (void **)(v5 + 4 * v4);
    if ( !v6 )
      operator delete(*v7);
  }
  if ( *(_DWORD *)(this + 4) )
    operator delete(*(void **)(this + 4));
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
}
