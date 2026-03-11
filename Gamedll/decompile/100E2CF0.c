/*
 * func-name: sub_100E2CF0
 * func-address: 0x100e2cf0
 * callers: 0x1000e647
 * callees: 0x10008972, 0x10009318, 0x102c9d50
 */

void __thiscall sub_100E2CF0(void *this)
{
  int *v2; // eax
  int v3; // [esp-Ch] [ebp-34h]
  void *v4; // [esp-Ch] [ebp-34h]
  void **v5; // [esp-4h] [ebp-2Ch]
  int v6[2]; // [esp+14h] [ebp-14h] BYREF
  int v7; // [esp+24h] [ebp-4h]

  *(_DWORD *)this = &CInputHandler::`vftable';
  v2 = (int *)*((_DWORD *)this + 5);
  v3 = *v2;
  v7 = 0;
  sub_10009318((int)v6, (int)this + 16, v3, (int)this + 16, (int)v2);
  operator delete(*((void **)this + 5));
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  v5 = (void **)*((_DWORD *)this + 2);
  v4 = *v5;
  v7 = -1;
  sub_10008972((int)v6, (int)this + 4, v4, (int)this + 4, (int)v5);
  operator delete(*((void **)this + 2));
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
}
