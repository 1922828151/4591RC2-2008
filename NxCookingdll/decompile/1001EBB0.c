/*
 * func-name: sub_1001EBB0
 * func-address: 0x1001ebb0
 * callers: 0x1001ec70, 0x1001efc0
 * callees: 0x1000f870, 0x10014950, 0x100149b0, 0x10014b50, 0x1001e7c0
 */

void __thiscall sub_1001EBB0(_DWORD *this, int a2, int a3)
{
  int v4; // [esp+4h] [ebp-18h] BYREF
  int v5; // [esp+8h] [ebp-14h] BYREF
  int v6; // [esp+Ch] [ebp-10h]
  int v7; // [esp+10h] [ebp-Ch]
  int v8; // [esp+18h] [ebp-4h]

  sub_10014950((float *)&v5);
  v8 = 0;
  if ( v6 == v5 )
    sub_100149B0(&v5, 1);
  *(_DWORD *)(v7 + 4 * v6++) = a2;
  if ( v6 == v5 )
    sub_100149B0(&v5, 1);
  *(_DWORD *)(v7 + 4 * v6++) = -1;
  while ( v6 )
  {
    sub_1000F870(&v5, &v4);
    sub_1000F870(&v5, &a2);
    sub_1001E7C0(this, &v5, v4, a2);
  }
  sub_10014B50((float *)&v5);
}
