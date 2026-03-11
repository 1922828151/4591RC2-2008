/*
 * func-name: sub_1002A4C0
 * func-address: 0x1002a4c0
 * callers: 0x10029c80, 0x10036940
 * callees: 0x1001a8b0, 0x1002bac0, 0x1002c660
 */

int __usercall sub_1002A4C0@<eax>(_DWORD *a1@<eax>, _DWORD *a2@<ecx>)
{
  int v3; // esi
  int v4; // ebp
  int v6; // [esp+18h] [ebp-14h] BYREF
  int v7; // [esp+1Ch] [ebp-10h]
  int v8; // [esp+20h] [ebp-Ch]
  int v9; // [esp+24h] [ebp-8h]

  sub_1001A8B0(a2, &v6, a1);
  v3 = v9;
  v4 = v8;
  sub_1002C660(v6, v7, v8, v9);
  sub_1002BAC0(a2, &v6, v6, v7, v4, v3);
  return 0;
}
