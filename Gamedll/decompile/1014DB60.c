/*
 * func-name: sub_1014DB60
 * func-address: 0x1014db60
 * callers: 0x10010f8c
 * callees: 0x10015e06, 0x102c9d98
 */

int sub_1014DB60()
{
  int result; // eax
  int v1; // [esp+0h] [ebp-14h]
  void *v2; // [esp+4h] [ebp-10h]

  result = dword_103B604C;
  if ( !dword_103B604C )
  {
    v2 = operator new(0x34u);
    if ( v2 )
    {
      result = sub_10015E06(v1, (int)v2);
      dword_103B604C = result;
    }
    else
    {
      result = 0;
      dword_103B604C = 0;
    }
  }
  return result;
}
