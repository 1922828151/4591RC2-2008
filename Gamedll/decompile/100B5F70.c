/*
 * func-name: sub_100B5F70
 * func-address: 0x100b5f70
 * callers: 0x1000c0e0
 * callees: none
 */

int *__thiscall sub_100B5F70(_DWORD *this, int *a2)
{
  int *v2; // edx
  int *result; // eax
  _DWORD *v4; // edx
  int *v5; // edx
  int v6; // edx
  int *v7; // edx

  v2 = (int *)this[1];
  result = a2;
  if ( v2 == a2 )
  {
    v4 = (_DWORD *)v2[1];
    this[1] = v4;
    if ( v4 )
      *v4 = 0;
    else
      this[2] = 0;
    *a2 = 0;
    a2[1] = 0;
    --this[3];
  }
  else
  {
    v5 = (int *)this[2];
    if ( v5 == a2 )
    {
      v6 = *v5;
      this[2] = v6;
      if ( v6 )
      {
        *(_DWORD *)(v6 + 4) = 0;
        *a2 = 0;
        a2[1] = 0;
        --this[3];
        return result;
      }
    }
    else
    {
      if ( *a2 )
        *(_DWORD *)(*a2 + 4) = a2[1];
      v7 = (int *)a2[1];
      if ( v7 )
        *v7 = *a2;
    }
    *a2 = 0;
    a2[1] = 0;
    --this[3];
  }
  return result;
}
