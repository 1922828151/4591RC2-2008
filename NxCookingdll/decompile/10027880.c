/*
 * func-name: sub_10027880
 * func-address: 0x10027880
 * callers: 0x10029f00
 * callees: 0x10026e40
 */

int __thiscall sub_10027880(int *this, int a2, int a3, int a4, int a5)
{
  int v6; // eax
  int v7; // eax
  _DWORD *v8; // eax

  v6 = this[2];
  if ( this[1] == v6 )
  {
    if ( v6 )
      v7 = 2 * v6;
    else
      v7 = 16;
    sub_10026E40(this, v7);
  }
  v8 = (_DWORD *)(*this + 16 * this[1]);
  *v8 = a2;
  v8[1] = a3;
  v8[2] = a4;
  v8[3] = a5;
  ++this[1];
  return 16 * this[1] + *this - 16;
}
