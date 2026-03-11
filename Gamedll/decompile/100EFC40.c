/*
 * func-name: sub_100EFC40
 * func-address: 0x100efc40
 * callers: 0x10015ab9
 * callees: 0x10006587, 0x1000880a
 */

int *__thiscall sub_100EFC40(_DWORD *this, int *a2, float a3, float a4)
{
  int v4; // edx
  int v5; // edi
  int v6; // eax
  int v7; // ebx
  int *result; // eax
  int v9; // [esp-14h] [ebp-2Ch]
  _DWORD v10[6]; // [esp+0h] [ebp-18h] BYREF

  v4 = *a2;
  *(float *)&v10[5] = a3;
  *(float *)&v10[3] = a4;
  v5 = this[12];
  *(float *)&v10[4] = 0.0;
  v10[0] = v4;
  v6 = a2[2];
  v10[1] = a2[1];
  v9 = *(_DWORD *)(v5 + 4);
  v10[2] = v6;
  v7 = sub_10006587(v5, v9, (int)v10);
  sub_1000880A(1);
  *(_DWORD *)(v5 + 4) = v7;
  result = *(int **)(v7 + 4);
  *result = v7;
  return result;
}
