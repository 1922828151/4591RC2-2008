/*
 * func-name: sub_100F9060
 * func-address: 0x100f9060
 * callers: 0x100f9310
 * callees: none
 */

bool __stdcall sub_100F9060(int *a1, _DWORD *a2, int *a3, int *a4, int *a5)
{
  int v5; // eax
  int v6; // ecx
  int v7; // edi
  bool result; // al
  int v9; // edx

  v5 = *a1;
  v6 = *a4;
  result = 1;
  if ( *a1 != *a4 || *a2 != *a3 )
  {
    v7 = *a3;
    if ( (v5 != *a3 || *a2 != v6) && (v5 != v6 || *a2 != *a5) )
    {
      v9 = *a5;
      if ( (v5 != *a5 || *a2 != v6 && (v5 != v9 || *a2 != v7)) && (v5 != v7 || *a2 != v9) )
        return 0;
    }
  }
  return result;
}
