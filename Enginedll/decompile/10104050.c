/*
 * func-name: sub_10104050
 * func-address: 0x10104050
 * callers: 0x10104050, 0x10104910
 * callees: 0x10012a30, 0x10061060, 0x10063830, 0x10104050
 */

void __thiscall sub_10104050(int this, Camera *a2, int a3, _DWORD *a4, int a5, int a6)
{
  int v7; // ecx
  int v8; // edi
  _DWORD *v9; // ebx
  int v10; // ebp
  unsigned int i; // edi
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  int v16; // edx
  int v17; // ecx
  int v18; // ecx
  void (__thiscall ***v19)(_DWORD, Camera *, int, _DWORD, bool, _DWORD, int); // ebx
  int v20; // ecx
  int v21; // [esp+8h] [ebp-4h]

  v21 = 2;
  if ( !(_BYTE)a5 )
    goto LABEL_7;
  v7 = *(_DWORD *)(this + 88);
  if ( v7 )
  {
    if ( (*(_DWORD *)(this + 92) - v7) >> 2 == 1 )
      goto LABEL_7;
  }
  v21 = Camera::BoxInFrustum(a2, (const struct BBox *)this, 0.0, 0);
  if ( v21 )
    goto LABEL_7;
  if ( sub_10061060((float *)this, (float *)a2 + 88) )
  {
    v21 = 1;
LABEL_7:
    v8 = a6;
    if ( a6 > 0 )
    {
      v9 = (_DWORD *)(this + 52);
      v10 = a6;
      do
      {
        if ( *v9 )
          sub_10104050(a2, a3, (int)a4, v21 != 2, v8);
        ++v9;
        --v10;
      }
      while ( v10 );
    }
    for ( i = 0; ; ++i )
    {
      while ( 1 )
      {
        v12 = *(_DWORD *)(this + 88);
        if ( !v12 || i >= (*(_DWORD *)(this + 92) - v12) >> 2 )
          return;
        v13 = *(_DWORD *)(this + 88);
        if ( *(_DWORD *)(*(_DWORD *)(v13 + 4 * i) + 716) )
        {
          if ( !v13 || i >= (*(_DWORD *)(this + 92) - v13) >> 2 )
            invalid_parameter_noinfo();
          v14 = *(_DWORD *)(this + 88);
          if ( *(_DWORD *)(*(_DWORD *)(v14 + 4 * i) + 1168) != dword_11240DEC )
          {
            if ( !v14 || i >= (*(_DWORD *)(this + 92) - v14) >> 2 )
              invalid_parameter_noinfo();
            *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 88) + 4 * i) + 1168) = dword_11240DEC;
            v15 = *(_DWORD *)(this + 88);
            if ( !v15 || i >= (*(_DWORD *)(this + 92) - v15) >> 2 )
              invalid_parameter_noinfo();
            v16 = *(_DWORD *)(this + 88);
            if ( !*(_BYTE *)(*(_DWORD *)(v16 + 4 * i) + 816) )
            {
              if ( !*(_BYTE *)(a3 + 781) )
                break;
              if ( !v16 || i >= (*(_DWORD *)(this + 92) - v16) >> 2 )
                invalid_parameter_noinfo();
              if ( !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(this + 88) + 4 * i) + 364) )
                break;
            }
          }
        }
LABEL_47:
        ++i;
      }
      v17 = *(_DWORD *)(this + 88);
      if ( !v17 || i >= (*(_DWORD *)(this + 92) - v17) >> 2 )
        invalid_parameter_noinfo();
      v18 = *(_DWORD *)(this + 88);
      if ( *(_BYTE *)(*(_DWORD *)(v18 + 4 * i) + 824) )
      {
        if ( !v18 || i >= (*(_DWORD *)(this + 92) - v18) >> 2 )
          invalid_parameter_noinfo();
        a5 = *(_DWORD *)(*(_DWORD *)(this + 88) + 4 * i);
        std::vector<Actor *>::push_back(a4, &a5);
        goto LABEL_47;
      }
      if ( !v18 || i >= (*(_DWORD *)(this + 92) - v18) >> 2 )
        invalid_parameter_noinfo();
      v19 = *(void (__thiscall ****)(_DWORD, Camera *, int, _DWORD, bool, _DWORD, int))(*(_DWORD *)(*(_DWORD *)(this + 88)
                                                                                                  + 4 * i)
                                                                                      + 716);
      v20 = *(_DWORD *)(this + 88);
      if ( !v20 || i >= (*(_DWORD *)(this + 92) - v20) >> 2 )
        invalid_parameter_noinfo();
      (**v19)(v19, a2, a3, *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)(this + 88) + 4 * i) + 726), v21 != 2, 0, 1);
    }
  }
}
