/*
 * func-name: sub_10014D20
 * func-address: 0x10014d20
 * callers: 0x10014c80
 * callees: 0x10008480, 0x10014da0, 0x10018e10
 */

_DWORD *__usercall sub_10014D20@<eax>(int a1@<ebx>)
{
  void *v1; // eax
  void *v2; // eax
  void *v4; // [esp+8h] [ebp-10h] BYREF
  int v5; // [esp+14h] [ebp-4h]

  v1 = operator new(8u);
  v4 = v1;
  v5 = 0;
  if ( v1 )
    v2 = (void *)sub_10014DA0(v1);
  else
    v2 = 0;
  v5 = -1;
  v4 = v2;
  return sub_10008480((int)&v4, a1);
}
