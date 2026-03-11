/*
 * func-name: sub_100EBF20
 * func-address: 0x100ebf20
 * callers: 0x1000292d
 * callees: 0x10010b7c
 */

int __thiscall sub_100EBF20(_DWORD *this, int a2, int a3, _DWORD *a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int result; // eax
  int v11; // esi

  if ( this != a4 )
  {
    sub_10010B7C(a9);
    a4[2] -= a9;
  }
  result = a6;
  **(_DWORD **)(a6 + 4) = a8;
  **(_DWORD **)(a8 + 4) = a3;
  **(_DWORD **)(a3 + 4) = a6;
  v11 = *(_DWORD *)(a3 + 4);
  *(_DWORD *)(a3 + 4) = *(_DWORD *)(a8 + 4);
  *(_DWORD *)(a8 + 4) = *(_DWORD *)(a6 + 4);
  *(_DWORD *)(a6 + 4) = v11;
  return result;
}
