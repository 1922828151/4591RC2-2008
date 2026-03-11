/*
 * func-name: sub_100EEB40
 * func-address: 0x100eeb40
 * callers: 0x1001793b
 * callees: 0x102c9d50
 */

int __thiscall sub_100EEB40(_DWORD **this)
{
  _DWORD **v1; // ebp
  float *v2; // esi
  _DWORD **v3; // edi
  float *v4; // ebx
  float *v5; // ebx

  v1 = this + 11;
  v2 = (float *)*this[12];
  v3 = this + 11;
  while ( 1 )
  {
    v4 = (float *)v1[1];
    if ( !v3 || v3 != v1 )
      _invalid_parameter_noinfo();
    if ( v2 == v4 )
      break;
    if ( !v3 )
      _invalid_parameter_noinfo();
    if ( v2 == (float *)v3[1] )
      _invalid_parameter_noinfo();
    v2[7] = v2[7] - GDeltaTime;
    if ( v2 == (float *)v3[1] )
    {
      _invalid_parameter_noinfo();
      if ( v2 == (float *)v3[1] )
        _invalid_parameter_noinfo();
    }
    v2[6] = v2[5] * GDeltaTime + v2[6];
    if ( v2 == (float *)v3[1] )
      _invalid_parameter_noinfo();
    if ( v2[7] > 0.0 )
    {
      if ( v2 == (float *)v3[1] )
        _invalid_parameter_noinfo();
      v2 = *(float **)v2;
    }
    else
    {
      if ( v2 == (float *)v3[1] )
        _invalid_parameter_noinfo();
      v5 = *(float **)v2;
      if ( v2 != (float *)v1[1] )
      {
        **((_DWORD **)v2 + 1) = v5;
        *(float *)(*(_DWORD *)v2 + 4) = v2[1];
        operator delete(v2);
        v1[2] = (_DWORD *)((char *)v1[2] - 1);
      }
      v2 = v5;
    }
  }
  return j_nullsub_97();
}
