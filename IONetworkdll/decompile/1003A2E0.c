/*
 * func-name: sub_1003A2E0
 * func-address: 0x1003a2e0
 * callers: 0x10017730, 0x10018710, 0x10018f50, 0x10026cd0, 0x10029ed0, 0x1002a120, 0x10036a40, 0x10036b30, 0x100372d0
 * callees: 0x1001a8b0, 0x1002bac0, 0x1002c660
 */

int __usercall sub_1003A2E0@<eax>(_DWORD *a1@<eax>, _DWORD *a2@<ecx>)
{
  _DWORD *v3; // esi
  int v5; // [esp+Ch] [ebp-14h] BYREF
  int v6; // [esp+10h] [ebp-10h] BYREF
  _DWORD *v7; // [esp+14h] [ebp-Ch]
  int v8; // [esp+18h] [ebp-8h]
  _DWORD *v9; // [esp+1Ch] [ebp-4h]

  sub_1001A8B0(a2, &v6, a1);
  v3 = v9;
  v5 = 0;
  sub_1002C660(&v5, v6, v7, v8, v9);
  sub_1002BAC0((int)a2, &v6, v6, v7, v8, v3);
  return v5;
}
