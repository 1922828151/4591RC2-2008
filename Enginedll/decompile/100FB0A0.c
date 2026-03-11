/*
 * func-name: sub_100FB0A0
 * func-address: 0x100fb0a0
 * callers: 0x100eaad0
 * callees: 0x10100380, 0x101a2500
 */

void __thiscall sub_100FB0A0(int this)
{
  void **v2; // eax
  int v3; // esi
  void *v4; // [esp-Ch] [ebp-30h]
  int v5[5]; // [esp+10h] [ebp-14h] BYREF

  v2 = *(void ***)(this + 40);
  v3 = this + 36;
  v4 = *v2;
  v5[4] = 0;
  sub_10100380((int)v5, this + 36, v4, this + 36, (int)v2);
  operator delete(*(void **)(v3 + 4));
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 8) = 0;
  if ( *(_DWORD *)(this + 24) )
    operator delete(*(void **)(this + 24));
  *(_DWORD *)(this + 24) = 0;
  *(_DWORD *)(this + 28) = 0;
  *(_DWORD *)(this + 32) = 0;
}
