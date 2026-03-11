/*
 * func-name: sub_1005A090
 * func-address: 0x1005a090
 * callers: 0x1005b360, 0x1005e1c0
 * callees: 0x10059520
 */

int *__thiscall sub_1005A090(_DWORD *this, int a2)
{
  int v3; // edi
  int **v4; // edx
  int *result; // eax
  int *v6; // ecx
  int v7; // esi
  int **v8; // ecx

  v3 = this[1];
  *(_DWORD *)(v3 + 4) = sub_10059520(this, *(int **)(*(_DWORD *)(a2 + 4) + 4), v3);
  v4 = (int **)this[1];
  this[2] = *(_DWORD *)(a2 + 8);
  result = v4[1];
  if ( *((_BYTE *)result + 45) )
  {
    *v4 = (int *)v4;
    *(_DWORD *)(this[1] + 8) = this[1];
  }
  else
  {
    v6 = (int *)*result;
    if ( !*(_BYTE *)(*result + 45) )
    {
      do
      {
        result = v6;
        v6 = (int *)*v6;
      }
      while ( !*((_BYTE *)v6 + 45) );
    }
    *v4 = result;
    v7 = this[1];
    v8 = *(int ***)(v7 + 4);
    for ( result = v8[2]; !*((_BYTE *)result + 45); result = (int *)result[2] )
      v8 = (int **)result;
    *(_DWORD *)(v7 + 8) = v8;
  }
  return result;
}
