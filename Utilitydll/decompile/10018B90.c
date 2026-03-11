/*
 * func-name: sub_10018B90
 * func-address: 0x10018b90
 * callers: 0x10008080, 0x10008480, 0x10008690, 0x100144b0, 0x10018b50
 * callees: 0x10018cf2, 0x10018e10, 0x10019586
 */

_DWORD *__stdcall sub_10018B90(int a1, int a2, _DWORD *a3)
{
  _DWORD *result; // eax
  int v4; // [esp+0h] [ebp-28h] BYREF
  void *v5; // [esp+10h] [ebp-18h]
  int v6; // [esp+14h] [ebp-14h]
  int *v7; // [esp+18h] [ebp-10h]
  int v8; // [esp+24h] [ebp-4h]

  v7 = &v4;
  result = operator new(0xCu);
  v5 = result;
  v8 = 0;
  if ( result )
    *result = a1;
  v6 = 1;
  if ( result != (_DWORD *)-4 )
    result[1] = a2;
  v6 = 2;
  if ( result != (_DWORD *)-8 )
    result[2] = *a3;
  return result;
}
