/*
 * func-name: sub_100115F0
 * func-address: 0x100115f0
 * callers: 0x10012d90
 * callees: 0x100116b0, 0x100119f0
 */

int __cdecl sub_100115F0(int a1, int a2)
{
  int result; // eax
  void *v3; // edi
  int v4; // esi
  void *Block; // [esp+4h] [ebp-4h] BYREF

  result = sub_100119F0(&Block);
  if ( !result )
  {
    v3 = Block;
    v4 = sub_100116B0(a1, a2);
    free(v3);
    if ( v4 )
      return v4;
    else
      return 0;
  }
  return result;
}
