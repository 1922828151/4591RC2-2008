/*
 * func-name: sub_10117BB0
 * func-address: 0x10117bb0
 * callers: 0x10002ccf
 * callees: 0x10002afe, 0x100066ea
 */

char __thiscall sub_10117BB0(_DWORD *this, unsigned int a2)
{
  int v4; // eax
  int v5; // [esp+0h] [ebp-8h]
  int v6; // [esp+4h] [ebp-4h]

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x460460 )
    sub_100066EA(v5, v6);
  v4 = sub_10002AFE(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + 936 * a2;
  return 1;
}
