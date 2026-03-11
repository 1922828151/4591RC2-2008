/*
 * func-name: sub_1007FEC0
 * func-address: 0x1007fec0
 * callers: 0x10169d00
 * callees: 0x101a24ac, 0x101a252e, 0x101a2534
 */

char __thiscall sub_1007FEC0(_DWORD *this, int a2, _DWORD *a3, int a4)
{
  _DWORD *v5; // eax
  int v6; // eax
  int v7; // ebx
  int v9; // [esp+14h] [ebp+4h]

  *this = *a3;
  this[1] = a3[1];
  this[2] = a3[2];
  this[3] = a3[3];
  this[5] = a4;
  v5 = operator new(8u);
  if ( v5 )
  {
    v5[1] = 1;
    *v5 = 0;
  }
  else
  {
    v5 = 0;
  }
  this[4] = v5;
  *(_DWORD *)this[4] = operator new(4 * (a3[3] - a3[1]) * (a3[2] - *a3));
  v6 = a3[1];
  v7 = 0;
  v9 = a2 + 4 * (*a3 + v6 * *(_DWORD *)(a4 + 8));
  if ( a3[3] - v6 > 0 )
  {
    do
    {
      memcpy(
        (void *)(*(_DWORD *)this[4] + 4 * v7 * (a3[2] - *a3)),
        (const void *)(v9 + 4 * v7 * *(_DWORD *)(a4 + 8)),
        4 * (a3[2] - *a3));
      ++v7;
    }
    while ( v7 < a3[3] - a3[1] );
  }
  return 1;
}
