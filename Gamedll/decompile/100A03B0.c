/*
 * func-name: sub_100A03B0
 * func-address: 0x100a03b0
 * callers: 0x10018539
 * callees: 0x10003b2a, 0x1000c536, 0x102c9d50
 */

void __thiscall sub_100A03B0(void *this)
{
  int *v2; // eax
  int v3; // [esp-Ch] [ebp-34h]
  int v4; // [esp-Ch] [ebp-34h]
  int *v5; // [esp-4h] [ebp-2Ch]
  _BYTE v6[8]; // [esp+14h] [ebp-14h] BYREF
  int v7; // [esp+24h] [ebp-4h]

  *(_DWORD *)this = &FXWrapperManager::`vftable';
  v2 = (int *)*((_DWORD *)this + 6);
  v3 = *v2;
  v7 = 0;
  sub_10003B2A((int)v6, (int)this + 20, v3, (int)this + 20, (int)v2);
  operator delete(*((void **)this + 6));
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  v5 = (int *)*((_DWORD *)this + 3);
  v4 = *v5;
  v7 = -1;
  sub_1000C536((int)v6, (int)this + 8, v4, (int)this + 8, (int)v5);
  operator delete(*((void **)this + 3));
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
}
