/*
 * func-name: sub_10008240
 * func-address: 0x10008240
 * callers: 0x10008240, 0x1000a460
 * callees: 0x10008240
 */

void __thiscall sub_10008240(_DWORD *this, int *a2, int a3, int a4)
{
  int v4; // ecx
  int v5; // ebx
  int v6; // esi
  double v7; // st7
  int v8; // edi
  int v9; // ebx
  int v10; // ecx
  _DWORD *v11; // edx
  int v12; // eax
  _DWORD *v13; // edx
  int v14; // eax
  int v15; // eax

  while ( 1 )
  {
    v4 = a3;
    v5 = a4;
    v6 = a3;
    v7 = *(float *)(this[1] + 12 * *(_DWORD *)(*a2 + 4 * ((a3 + a4) / 2)));
    v8 = a4;
    if ( a3 <= a4 )
    {
      do
      {
        v9 = *a2;
        v10 = this[1];
        v11 = (_DWORD *)(*a2 + 4 * v6);
        if ( v7 > *(float *)(v10 + 12 * *v11) )
        {
          do
          {
            v12 = v11[1];
            ++v11;
            ++v6;
          }
          while ( v7 > *(float *)(v10 + 12 * v12) );
        }
        v13 = (_DWORD *)(v9 + 4 * v8);
        if ( v7 < *(float *)(v10 + 12 * *v13) )
        {
          do
          {
            v14 = *--v13;
            --v8;
          }
          while ( v7 < *(float *)(v10 + 12 * v14) );
        }
        if ( v6 > v8 )
          break;
        v15 = *(_DWORD *)(v9 + 4 * v6);
        *(_DWORD *)(v9 + 4 * v6) = *(_DWORD *)(v9 + 4 * v8);
        *(_DWORD *)(*a2 + 4 * v8) = v15;
        ++v6;
        --v8;
      }
      while ( v6 <= v8 );
      v4 = a3;
      v5 = a4;
    }
    if ( v4 < v8 )
      sub_10008240(a2, v4, v8);
    if ( v6 >= v5 )
      break;
    a3 = v6;
  }
}
