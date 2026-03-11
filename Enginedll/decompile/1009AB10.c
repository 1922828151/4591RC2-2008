/*
 * func-name: sub_1009AB10
 * func-address: 0x1009ab10
 * callers: 0x10096fe0, 0x1009ad20
 * callees: 0x101a2500
 */

void __thiscall sub_1009AB10(int this)
{
  char *v2; // esi
  char *i; // edi

  v2 = *(char **)(this + 4);
  if ( v2 )
  {
    for ( i = *(char **)(this + 8); v2 != i; v2 += 28 )
      std::wstring::~wstring(v2);
    operator delete(*(void **)(this + 4));
  }
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
