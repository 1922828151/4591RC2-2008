/*
 * func-name: ?Tick@FXManager@@QAEXPAVWorld@@@Z
 * func-address: 0x1009fdd0
 * callers: 0x10139890
 * callees: none
 */

void __thiscall FXManager::Tick(FXManager *this, struct World *a2)
{
  unsigned int i; // edi
  int v4; // ecx
  int v5; // eax
  int v6; // edx
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  void (__thiscall ***v15)(_DWORD, int); // ecx

  for ( i = 0; ; ++i )
  {
    v4 = *((_DWORD *)this + 2);
    if ( !v4 || i >= (*((_DWORD *)this + 3) - v4) >> 2 )
      break;
    v5 = *((_DWORD *)this + 2);
    if ( !*(_BYTE *)(*(_DWORD *)(v5 + 4 * i) + 172) )
    {
      if ( !v5 || i >= (*((_DWORD *)this + 3) - v5) >> 2 )
        invalid_parameter_noinfo();
      v6 = *((_DWORD *)this + 2);
      if ( *(struct World **)(*(_DWORD *)(v6 + 4 * i) + 116) == a2 )
      {
        if ( !v6 || i >= (*((_DWORD *)this + 3) - v6) >> 2 )
          invalid_parameter_noinfo();
        v7 = *((_DWORD *)this + 2);
        if ( -1.0 != *(float *)(*(_DWORD *)(v7 + 4 * i) + 108) )
        {
          if ( !v7 || i >= (*((_DWORD *)this + 3) - v7) >> 2 )
            invalid_parameter_noinfo();
          v8 = *(_DWORD *)(*((_DWORD *)this + 2) + 4 * i);
          *(float *)(v8 + 108) = *(float *)(v8 + 108) - GDeltaTime;
          v9 = *((_DWORD *)this + 2);
          if ( !v9 || i >= (*((_DWORD *)this + 3) - v9) >> 2 )
            invalid_parameter_noinfo();
          v10 = *((_DWORD *)this + 2);
          if ( *(float *)(*(_DWORD *)(v10 + 4 * i) + 108) < 0.0 )
            goto LABEL_33;
        }
        v11 = *((_DWORD *)this + 2);
        if ( !v11 || i >= (*((_DWORD *)this + 3) - v11) >> 2 )
          invalid_parameter_noinfo();
        v12 = *((_DWORD *)this + 2);
        if ( !*(_BYTE *)(*(_DWORD *)(v12 + 4 * i) + 113) )
        {
          if ( !v12 || i >= (*((_DWORD *)this + 3) - v12) >> 2 )
            invalid_parameter_noinfo();
          v13 = *(_DWORD *)(*((_DWORD *)this + 2) + 4 * i);
          (*(void (__thiscall **)(int))(*(_DWORD *)v13 + 8))(v13);
        }
        v14 = *((_DWORD *)this + 2);
        if ( !v14 || i >= (*((_DWORD *)this + 3) - v14) >> 2 )
          invalid_parameter_noinfo();
        v10 = *((_DWORD *)this + 2);
        if ( 0.0 == *(float *)(*(_DWORD *)(v10 + 4 * i) + 108) )
        {
LABEL_33:
          if ( !v10 || i >= (*((_DWORD *)this + 3) - v10) >> 2 )
            invalid_parameter_noinfo();
          v15 = *(void (__thiscall ****)(_DWORD, int))(*((_DWORD *)this + 2) + 4 * i);
          if ( v15 )
            (**v15)(v15, 1);
          --i;
        }
      }
    }
  }
}
