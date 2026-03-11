/*
 * func-name: sub_1001DF40
 * func-address: 0x1001df40
 * callers: none
 * callees: none
 */

double __thiscall sub_1001DF40(_DWORD *this, int a2, int a3)
{
  int v3; // ecx
  int v4; // edx

  v3 = this[18];
  v4 = *(_DWORD *)(v3 + 16);
  return (*(float *)(*(_DWORD *)(v3 + 20) + 12 * *(_DWORD *)(v4 + 12 * a2 + 8) + 4 * a3)
        + *(float *)(*(_DWORD *)(v3 + 20) + 12 * *(_DWORD *)(v4 + 12 * a2 + 4) + 4 * a3)
        + *(float *)(*(_DWORD *)(v3 + 20) + 12 * *(_DWORD *)(v4 + 12 * a2) + 4 * a3))
       * 0.33333334;
}
