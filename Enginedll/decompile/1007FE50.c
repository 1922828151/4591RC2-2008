/*
 * func-name: sub_1007FE50
 * func-address: 0x1007fe50
 * callers: 0x1000f2e0, 0x10091b60
 * callees: 0x101a253a
 */

void __thiscall sub_1007FE50(_DWORD *this)
{
  int v1; // esi

  v1 = this[4];
  if ( v1 )
  {
    if ( (*(_DWORD *)(v1 + 4))-- == 1 )
    {
      if ( *(_DWORD *)v1 )
      {
        operator delete[](*(void **)v1);
        *(_DWORD *)v1 = 0;
      }
    }
  }
}
