/*
 * func-name: sub_10012D90
 * func-address: 0x10012d90
 * callers: 0x10012870
 * callees: 0x100111a0, 0x100112b0, 0x100115f0, 0x10013a20, 0x100232f7
 */

int __fastcall sub_10012D90(char *a1, int a2)
{
  int result; // eax
  int v4; // esi
  void **v5; // [esp+4h] [ebp-410h] BYREF
  int v6; // [esp+8h] [ebp-40Ch] BYREF
  _BYTE v7[4]; // [esp+Ch] [ebp-408h] BYREF
  char v8[512]; // [esp+10h] [ebp-404h] BYREF
  char Destination[512]; // [esp+210h] [ebp-204h] BYREF

  result = sub_10013A20(a1, Destination, (int)v8, (int)&v6);
  if ( !result )
  {
    result = sub_100111A0(&v5, Destination, v8, v6);
    if ( !result )
    {
      v4 = sub_100115F0(a2, (int)v7);
      sub_100112B0(&v5);
      if ( v4 )
        return v4;
      else
        return 0;
    }
  }
  return result;
}
