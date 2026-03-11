/*
 * func-name: sub_1000C840
 * func-address: 0x1000c840
 * callers: none
 * callees: 0x1000ce00, 0x10014680, 0x10016380
 */

char __thiscall sub_1000C840(_DWORD *this, int a2)
{
  int v2; // edi
  _BYTE v5[4]; // [esp+8h] [ebp-4h] BYREF

  v2 = a2;
  if ( !(unsigned __int8)sub_10016380(67, 76, 72, 76, v5, &a2, a2) || !(unsigned __int8)sub_1000CE00(v2) )
    return 0;
  this[27] = **(_DWORD **)(this[20] + 4);
  this[28] = **(_DWORD **)(this[20] + 4);
  this[29] = **(_DWORD **)(this[20] + 4);
  this[30] = **(_DWORD **)(this[20] + 4);
  this[31] = **(_DWORD **)(this[20] + 4);
  this[32] = **(_DWORD **)(this[20] + 4);
  this[21] = this + 23;
  return sub_10014680(v2);
}
