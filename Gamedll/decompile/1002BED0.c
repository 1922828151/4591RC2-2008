/*
 * func-name: sub_1002BED0
 * func-address: 0x1002bed0
 * callers: 0x10003fe9
 * callees: 0x102c9d50
 */

void __thiscall sub_1002BED0(int this)
{
  char *v2; // esi
  char *i; // edi

  v2 = *(char **)(this + 4);
  if ( v2 )
  {
    for ( i = *(char **)(this + 8); v2 != i; v2 += 28 )
      std::string::~string(v2);
    operator delete(*(void **)(this + 4));
  }
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
