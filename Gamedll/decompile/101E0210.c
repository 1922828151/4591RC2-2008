/*
 * func-name: sub_101E0210
 * func-address: 0x101e0210
 * callers: 0x1000ce78
 * callees: 0x1000bc7b, 0x1000ce87
 */

char __thiscall sub_101E0210(_DWORD *this, unsigned int a2)
{
  int v4; // eax
  int v5; // [esp+0h] [ebp-8h]
  int v6; // [esp+4h] [ebp-4h]

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x3333333 )
    sub_1000BC7B(v5, v6);
  v4 = sub_1000CE87(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + 80 * a2;
  return 1;
}
