/*
 * func-name: sub_100FE1F0
 * func-address: 0x100fe1f0
 * callers: 0x100fb120, 0x10100940
 * callees: none
 */

int *__thiscall sub_100FE1F0(_DWORD *this, float *a2)
{
  int *result; // eax
  float *v3; // ecx
  float *v4; // esi
  double v5; // st7
  double v6; // st6

  result = (int *)this[1];
  v3 = (float *)result[1];
  v4 = (float *)result;
  if ( !*((_BYTE *)v3 + 41) )
  {
    while ( 1 )
    {
      if ( *a2 == v3[3] )
      {
        if ( a2[1] == v3[4] )
        {
          if ( a2[2] == v3[5] )
            goto LABEL_7;
          v5 = v3[5];
          v6 = a2[2];
        }
        else
        {
          v5 = v3[4];
          v6 = a2[1];
        }
        if ( v6 > v5 )
          goto LABEL_13;
      }
      else if ( *a2 > (double)v3[3] )
      {
LABEL_13:
        v3 = (float *)*((_DWORD *)v3 + 2);
        goto LABEL_8;
      }
LABEL_7:
      v4 = v3;
      v3 = *(float **)v3;
LABEL_8:
      if ( *((_BYTE *)v3 + 41) )
        return (int *)v4;
    }
  }
  return result;
}
