/*
 * func-name: sub_1006F9E0
 * func-address: 0x1006f9e0
 * callers: 0x1006ffd0, 0x100700c0, 0x100cd9c0
 * callees: 0x101a2500
 */

void __thiscall sub_1006F9E0(int this)
{
  int v2; // esi
  int i; // edi

  v2 = *(_DWORD *)(this + 4);
  if ( v2 )
  {
    for ( i = *(_DWORD *)(this + 8); v2 != i; v2 += 40 )
      std::wstring::~wstring((void *)(v2 + 12));
    operator delete(*(void **)(this + 4));
  }
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
