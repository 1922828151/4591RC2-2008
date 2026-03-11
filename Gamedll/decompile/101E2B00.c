/*
 * func-name: sub_101E2B00
 * func-address: 0x101e2b00
 * callers: 0x1000fe34
 * callees: 0x10007522, 0x102c9d98
 */

bool sub_101E2B00()
{
  int v0; // eax
  int v2; // [esp+0h] [ebp-14h]
  void *v3; // [esp+4h] [ebp-10h]

  v3 = operator new(0x144u);
  if ( v3 )
    v0 = sub_10007522(v2, (int)v3);
  else
    v0 = 0;
  dword_103B6670 = v0;
  return v0 != 0;
}
