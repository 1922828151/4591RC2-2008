/*
 * func-name: sub_1006FD90
 * func-address: 0x1006fd90
 * callers: 0x1006fe50, 0x10070f10, 0x10075d40, 0x10075de0, 0x100d5160, 0x100d5290
 * callees: 0x101a2500
 */

void __thiscall sub_1006FD90(int this)
{
  int v2; // esi
  int i; // edi

  v2 = *(_DWORD *)(this + 4);
  if ( v2 )
  {
    for ( i = *(_DWORD *)(this + 8); v2 != i; v2 += 44 )
      std::wstring::~wstring((void *)(v2 + 12));
    operator delete(*(void **)(this + 4));
  }
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
