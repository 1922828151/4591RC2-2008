/*
 * func-name: sub_10027830
 * func-address: 0x10027830
 * callers: 0x1001b880, 0x10026580, 0x10026cd0, 0x10026e00
 * callees: 0x100194b0, 0x1001daa0, 0x10027970
 */

int __usercall sub_10027830@<eax>(_DWORD *a1@<ecx>, _DWORD *a2@<eax>)
{
  int v3; // esi
  int v5; // [esp+Ch] [ebp-14h] BYREF
  int v6; // [esp+10h] [ebp-10h] BYREF
  void *v7; // [esp+14h] [ebp-Ch]
  int v8; // [esp+18h] [ebp-8h]
  int v9; // [esp+1Ch] [ebp-4h]

  sub_1001DAA0(a1, &v6, a2);
  v3 = v9;
  v5 = 0;
  sub_100194B0(&v5, v6, v7, v8, (_DWORD *)v9);
  sub_10027970((int)a1, (int)&v6, v6, v7, v8, v3);
  return v5;
}
