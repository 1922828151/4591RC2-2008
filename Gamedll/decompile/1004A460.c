/*
 * func-name: sub_1004A460
 * func-address: 0x1004a460
 * callers: 0x10018fed
 * callees: 0x1000afe7, 0x10013be7
 */

char __thiscall sub_1004A460(_DWORD *this, unsigned int a2)
{
  int v4; // eax
  int v5; // [esp+0h] [ebp-8h]
  int v6; // [esp+4h] [ebp-4h]

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x4924924 )
    sub_10013BE7(v5, v6);
  v4 = sub_1000AFE7(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + 56 * a2;
  return 1;
}
