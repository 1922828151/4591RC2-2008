/*
 * func-name: sub_10005850
 * func-address: 0x10005850
 * callers: 0x10006360
 * callees: none
 */

_WORD *__thiscall sub_10005850(int this, int a2)
{
  _WORD *result; // eax
  float v3; // [esp+4h] [ebp+4h]
  float v4; // [esp+4h] [ebp+4h]
  float v5; // [esp+4h] [ebp+4h]
  float v6; // [esp+4h] [ebp+4h]
  float v7; // [esp+4h] [ebp+4h]
  float v8; // [esp+4h] [ebp+4h]

  result = (_WORD *)a2;
  *(_DWORD *)a2 = -1;
  *(_DWORD *)(a2 + 4) = -1;
  *(float *)(a2 + 8) = *(float *)(this + 40);
  v3 = *(float *)(this + 44);
  result[6] = HIWORD(v3);
  v4 = *(float *)(this + 48);
  result[7] = HIWORD(v4);
  v5 = *(float *)(this + 52);
  result[8] = HIWORD(v5);
  v6 = *(float *)(this + 56);
  result[9] = HIWORD(v6);
  v7 = *(float *)(this + 60);
  result[10] = HIWORD(v7);
  v8 = *(float *)(this + 64);
  result[11] = HIWORD(v8);
  result[14] = *(_WORD *)(this + 24);
  return result;
}
