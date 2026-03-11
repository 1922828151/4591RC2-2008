/*
 * func-name: sub_1015DC40
 * func-address: 0x1015dc40
 * callers: 0x1015dc40, 0x1015edf0, 0x1015f6b0, 0x10164f30
 * callees: 0x1015dc40
 */

char __thiscall sub_1015DC40(_DWORD *this, int a2, int a3, float a4)
{
  int v5; // ecx
  int v6; // edx
  char result; // al

  v5 = this[2];
  if ( a2 < v5 && a3 < this[3] && a2 >= 0 && a3 >= 0 )
  {
    v6 = this[5];
    if ( v6 )
    {
      result = 1;
      *(float *)(v6 + 4 * (a2 + a3 * v5)) = a4;
      return result;
    }
    if ( this[7] )
    {
      sub_1015DC40(a2 + *this, a3 + this[1], a4);
      return 1;
    }
  }
  return 0;
}
