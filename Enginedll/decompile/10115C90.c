/*
 * func-name: sub_10115C90
 * func-address: 0x10115c90
 * callers: 0x1010e120, 0x101160e0, 0x101161a0, 0x10116270, 0x101162a0, 0x10116320, 0x101163a0
 * callees: 0x1010fce0, 0x10115520, 0x101a2500
 */

int __thiscall sub_10115C90(int this)
{
  int v2; // eax
  int v3; // esi
  int *v4; // eax

  v2 = *(_DWORD *)(this + 48);
  v3 = this + 44;
  if ( v2 )
  {
    sub_1010FCE0(v2, *(_DWORD *)(this + 52));
    operator delete(*(void **)(v3 + 4));
  }
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 8) = 0;
  *(_DWORD *)(v3 + 12) = 0;
  v4 = *(int **)(this + 32);
  if ( v4 )
  {
    sub_10115520(v4, *(int **)(this + 36));
    operator delete(*(void **)(this + 32));
  }
  *(_DWORD *)(this + 32) = 0;
  *(_DWORD *)(this + 36) = 0;
  *(_DWORD *)(this + 40) = 0;
  return std::string::~string(this);
}
