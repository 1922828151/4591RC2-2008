/*
 * func-name: sub_10024E20
 * func-address: 0x10024e20
 * callers: 0x10023f30, 0x10023fa0, 0x10024980
 * callees: 0x10025040, 0x1004e870
 */

int __stdcall sub_10024E20(int a1)
{
  _DWORD **v1; // eax
  _DWORD *v2; // esi
  int result; // eax
  bool v4; // zf
  _DWORD *v5; // ebx

  v1 = *(_DWORD ***)(a1 + 4);
  v2 = *v1;
  *v1 = v1;
  result = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(result + 4) = result;
  v4 = v2 == *(_DWORD **)(a1 + 4);
  *(_DWORD *)(a1 + 8) = 0;
  if ( !v4 )
  {
    do
    {
      v5 = (_DWORD *)*v2;
      sub_10025040(v2 + 3);
      operator delete(v2[4]);
      v2[4] = 0;
      result = operator delete(v2);
      v2 = v5;
    }
    while ( v5 != *(_DWORD **)(a1 + 4) );
  }
  return result;
}
