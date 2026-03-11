/*
 * func-name: sub_1001CE10
 * func-address: 0x1001ce10
 * callers: 0x1001af80, 0x1001b4d0
 * callees: 0x100194b0, 0x1001d9c0, 0x1001daa0
 */

int __usercall sub_1001CE10@<eax>(int a1@<ecx>, int a2@<eax>)
{
  int v3; // esi
  int v4; // ebp
  int v6; // [esp+14h] [ebp-18h] BYREF
  int v7; // [esp+18h] [ebp-14h] BYREF
  void *v8; // [esp+1Ch] [ebp-10h]
  int v9; // [esp+20h] [ebp-Ch]
  int v10; // [esp+24h] [ebp-8h]

  sub_1001DAA0(&v7, a2);
  v3 = v10;
  v4 = v9;
  v6 = 0;
  sub_100194B0(&v6, v7, v8, v9, (_DWORD *)v10);
  sub_1001D9C0(a1, (int)&v7, v7, v8, v4, v3);
  return v6;
}
