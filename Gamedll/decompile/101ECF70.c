/*
 * func-name: sub_101ECF70
 * func-address: 0x101ecf70
 * callers: 0x10012b7a
 * callees: 0x102c9d50
 */

void __thiscall sub_101ECF70(int this)
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
