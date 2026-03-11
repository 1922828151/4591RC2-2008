/*
 * func-name: sub_101AE120
 * func-address: 0x101ae120
 * callers: 0x10009e94
 * callees: 0x1000d431, 0x10017dc3, 0x10018b47, 0x10018ea8, 0x102c9d86
 */

int __thiscall sub_101AE120(_DWORD *this, unsigned int a2, int a3)
{
  int result; // eax
  int v5; // edi
  int v6[9]; // [esp+0h] [ebp-24h] BYREF

  v6[5] = (int)v6;
  v6[4] = (int)this;
  result = 0;
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( a2 )
  {
    if ( a2 > 0x1FFFFFFF )
      sub_10018EA8(v6[0], v6[1]);
    v5 = sub_10017DC3(a2);
    this[3] = v5 + 8 * a2;
    this[1] = v5;
    this[2] = v5;
    v6[8] = 0;
    result = sub_10018B47(v5, a2, a3);
    this[2] = v5 + 8 * a2;
  }
  return result;
}
