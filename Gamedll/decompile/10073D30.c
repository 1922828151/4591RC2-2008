/*
 * func-name: sub_10073D30
 * func-address: 0x10073d30
 * callers: 0x1000362a
 * callees: 0x1001a3ac
 */

int *__thiscall sub_10073D30(_DWORD *this, int a2)
{
  int v3; // edi
  int **v4; // edx
  int *result; // eax
  int *v6; // ecx
  int v7; // esi
  int **v8; // ecx

  v3 = this[1];
  *(_DWORD *)(v3 + 4) = sub_1001A3AC(*(_DWORD *)(*(_DWORD *)(a2 + 4) + 4), v3);
  v4 = (int **)this[1];
  this[2] = *(_DWORD *)(a2 + 8);
  result = v4[1];
  if ( *((_BYTE *)result + 17) )
  {
    *v4 = (int *)v4;
    *(_DWORD *)(this[1] + 8) = this[1];
  }
  else
  {
    v6 = (int *)*result;
    if ( !*(_BYTE *)(*result + 17) )
    {
      do
      {
        result = v6;
        v6 = (int *)*v6;
      }
      while ( !*((_BYTE *)v6 + 17) );
    }
    *v4 = result;
    v7 = this[1];
    v8 = *(int ***)(v7 + 4);
    for ( result = v8[2]; !*((_BYTE *)result + 17); result = (int *)result[2] )
      v8 = (int **)result;
    *(_DWORD *)(v7 + 8) = v8;
  }
  return result;
}
