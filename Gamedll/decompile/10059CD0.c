/*
 * func-name: sub_10059CD0
 * func-address: 0x10059cd0
 * callers: 0x10017198
 * callees: 0x102c9d50
 */

void __thiscall sub_10059CD0(int this)
{
  int v2; // esi
  int i; // edi

  v2 = *(_DWORD *)(this + 4);
  if ( v2 )
  {
    for ( i = *(_DWORD *)(this + 8); v2 != i; v2 += 36 )
      std::string::~string((void *)(v2 + 4));
    operator delete(*(void **)(this + 4));
  }
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
