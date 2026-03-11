/*
 * func-name: sub_100140F0
 * func-address: 0x100140f0
 * callers: none
 * callees: 0x10011260, 0x10014c10, 0x10014f50, 0x10015020, 0x100150a0, 0x10035300
 */

char __thiscall sub_100140F0(unsigned int **this, int a2)
{
  size_t v4; // esi
  const void *v5; // eax
  _BYTE v6[28]; // [esp+4h] [ebp-1Ch] BYREF

  if ( !this[46] )
    return 0;
  sub_10014F50(0x1000u, 0);
  sub_10011260(this[46], 0, v6);
  v4 = *(_DWORD *)a2;
  if ( v4 == sub_10014C10(v6) )
  {
    v5 = (const void *)sub_100150A0(0);
    memcpy_0(*(void **)(a2 + 4), v5, v4);
    sub_10015020(v6);
    return 1;
  }
  else
  {
    sub_10015020(v6);
    return 0;
  }
}
