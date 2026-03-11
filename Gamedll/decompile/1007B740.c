/*
 * func-name: ?Tick@DynamicLasers@@UAEXXZ_0
 * func-address: 0x1007b740
 * callers: 0x100059f7
 * callees: 0x102c9fe0
 */

void __thiscall DynamicLasers::Tick(DynamicLasers *this)
{
  unsigned int v1; // esi
  char *v2; // edi
  unsigned int v3; // ebx
  int v4; // ebx
  int v5; // ebx

  v1 = *((_DWORD *)this + 65);
  v2 = (char *)this + 256;
  if ( v1 > *((_DWORD *)this + 66) )
    _invalid_parameter_noinfo();
  while ( 1 )
  {
    v3 = *((_DWORD *)v2 + 2);
    if ( *((_DWORD *)v2 + 1) > v3 )
      _invalid_parameter_noinfo();
    if ( v1 == v3 )
      break;
    if ( v1 >= *((_DWORD *)v2 + 2) )
      _invalid_parameter_noinfo();
    *(float *)(v1 + 32) = *(float *)(v1 + 32) - GDeltaTime;
    if ( v1 >= *((_DWORD *)v2 + 2) )
      _invalid_parameter_noinfo();
    if ( *(float *)(v1 + 32) > 0.0 )
    {
      if ( v1 >= *((_DWORD *)v2 + 2) )
        _invalid_parameter_noinfo();
      if ( *((float *)this + 61) <= (double)*(float *)(v1 + 32) )
      {
        if ( v1 >= *((_DWORD *)v2 + 2) )
        {
          _invalid_parameter_noinfo();
          if ( v1 >= *((_DWORD *)v2 + 2) )
            _invalid_parameter_noinfo();
        }
        if ( *((float *)this + 60) > *(float *)(v1 + 36) - *(float *)(v1 + 32) )
        {
          if ( v1 >= *((_DWORD *)v2 + 2) )
          {
            _invalid_parameter_noinfo();
            if ( v1 >= *((_DWORD *)v2 + 2) )
            {
              _invalid_parameter_noinfo();
              if ( v1 >= *((_DWORD *)v2 + 2) )
                _invalid_parameter_noinfo();
            }
          }
          v5 = (int)((*(float *)(v1 + 36) - *(float *)(v1 + 32))
                   / *((float *)this + 60)
                   * (double)*(unsigned __int8 *)(v1 + 31));
          if ( v5 < 0 )
            v5 = 0;
          if ( v1 >= *((_DWORD *)v2 + 2) )
          {
            _invalid_parameter_noinfo();
            if ( v1 >= *((_DWORD *)v2 + 2) )
            {
              _invalid_parameter_noinfo();
              if ( v1 >= *((_DWORD *)v2 + 2) )
              {
                _invalid_parameter_noinfo();
                if ( v1 >= *((_DWORD *)v2 + 2) )
                  _invalid_parameter_noinfo();
              }
            }
          }
          *(_DWORD *)(v1 + 24) = *(unsigned __int8 *)(v1 + 28)
                               | ((*(unsigned __int8 *)(v1 + 29) | (((v5 << 8) | *(unsigned __int8 *)(v1 + 30)) << 8)) << 8);
        }
      }
      else
      {
        if ( v1 >= *((_DWORD *)v2 + 2) )
        {
          _invalid_parameter_noinfo();
          if ( v1 >= *((_DWORD *)v2 + 2) )
            _invalid_parameter_noinfo();
        }
        v4 = (int)(*(float *)(v1 + 32) / *((float *)this + 61) * (double)*(unsigned __int8 *)(v1 + 31));
        if ( v1 >= *((_DWORD *)v2 + 2) )
        {
          _invalid_parameter_noinfo();
          if ( v1 >= *((_DWORD *)v2 + 2) )
          {
            _invalid_parameter_noinfo();
            if ( v1 >= *((_DWORD *)v2 + 2) )
            {
              _invalid_parameter_noinfo();
              if ( v1 >= *((_DWORD *)v2 + 2) )
                _invalid_parameter_noinfo();
            }
          }
        }
        *(_DWORD *)(v1 + 24) = *(unsigned __int8 *)(v1 + 28)
                             | ((*(unsigned __int8 *)(v1 + 29) | (((v4 << 8) | *(unsigned __int8 *)(v1 + 30)) << 8)) << 8);
      }
    }
    else
    {
      if ( v1 >= *((_DWORD *)v2 + 2) )
        _invalid_parameter_noinfo();
      *(float *)(v1 + 32) = 0.0;
    }
    if ( v1 >= *((_DWORD *)v2 + 2) )
      _invalid_parameter_noinfo();
    v1 += 48;
  }
  FXSystem::Tick(this);
}
