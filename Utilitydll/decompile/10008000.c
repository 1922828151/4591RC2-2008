/*
 * func-name: sub_10008000
 * func-address: 0x10008000
 * callers: 0x10002410
 * callees: 0x10008480, 0x100084b0, 0x10018e10
 */

int __cdecl sub_10008000()
{
  void *v0; // eax
  void *v1; // eax
  void *v3; // [esp+8h] [ebp-10h] BYREF
  int v4; // [esp+14h] [ebp-4h]

  v0 = operator new(8u);
  v3 = v0;
  v4 = 0;
  if ( v0 )
    v1 = (void *)sub_100084B0(v0);
  else
    v1 = 0;
  v4 = -1;
  v3 = v1;
  return sub_10008480(&v3);
}
