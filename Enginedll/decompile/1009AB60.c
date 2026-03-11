/*
 * func-name: sub_1009AB60
 * func-address: 0x1009ab60
 * callers: 0x1002c530, 0x1002c610, 0x1002e490, 0x101b8ce0
 * callees: 0x101a2500
 */

void __thiscall sub_1009AB60(int this)
{
  int v2; // esi
  int i; // edi

  v2 = *(_DWORD *)(this + 4);
  if ( v2 )
  {
    for ( i = *(_DWORD *)(this + 8); v2 != i; v2 += 32 )
      std::string::~string(v2 + 4);
    operator delete(*(void **)(this + 4));
  }
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
