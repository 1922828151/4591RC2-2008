/*
 * func-name: ?Update@SoundMgr@@QAEXXZ_0
 * func-address: 0x100e9e60
 * callers: 0x1000204a
 * callees: 0x1000da2b, 0x10010b7c, 0x10015690, 0x102c9d50
 */

void __thiscall SoundMgr::Update(SoundMgr *this)
{
  struct Sound **v1; // ebx
  struct Sound **v2; // ebp
  struct Sound *v3; // edi
  struct Sound *v4; // esi
  void (__cdecl *v5)(); // esi
  _DWORD *i; // esi
  struct Sound **v7; // ebp
  struct Sound *v8; // esi
  bool v9; // zf
  float *j; // ebp
  void (__cdecl *v11)(); // esi
  int v12; // esi
  int v13; // esi
  int v14; // ebx
  _DWORD **v15; // ecx
  _DWORD *v16; // eax
  _DWORD *v17; // esi
  struct Sound **v19; // [esp+20h] [ebp-10h]

  v1 = (struct Sound **)((char *)this + 16);
  v2 = (struct Sound **)((char *)this + 16);
  v3 = (struct Sound *)**((_DWORD **)this + 5);
  v19 = (struct Sound **)((char *)this + 16);
  while ( 1 )
  {
    v4 = v1[1];
    if ( !v2 || v2 != v1 )
      _invalid_parameter_noinfo();
    if ( v3 == v4 )
      break;
    v5 = _invalid_parameter_noinfo;
    if ( !v2 )
      _invalid_parameter_noinfo();
    if ( v3 == v2[1] )
      _invalid_parameter_noinfo();
    if ( !*((_DWORD *)v3 + 2) )
      goto LABEL_17;
    if ( v3 == v2[1] )
      _invalid_parameter_noinfo();
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(**((_DWORD **)v3 + 2) + 40))(*((_DWORD **)v3 + 2)) )
    {
      if ( v3 == v2[1] )
        _invalid_parameter_noinfo();
      v3 = *(struct Sound **)v3;
    }
    else
    {
LABEL_17:
      if ( v3 == v2[1] )
        _invalid_parameter_noinfo();
      if ( *((_BYTE *)v3 + 53) )
      {
        for ( i = (_DWORD *)**((_DWORD **)this + 2); ; i = (_DWORD *)*i )
        {
          if ( i == *((_DWORD **)this + 2) )
          {
            v7 = v19;
            goto LABEL_32;
          }
          v7 = v19;
          if ( v3 == v19[1] )
            _invalid_parameter_noinfo();
          if ( i[2] == *((_DWORD *)v3 + 2) )
            break;
          if ( i == *((_DWORD **)this + 2) )
            _invalid_parameter_noinfo();
        }
        if ( i != *((_DWORD **)this + 2) || (_invalid_parameter_noinfo(), i != *((_DWORD **)this + 2)) )
        {
          *(_DWORD *)i[1] = *i;
          *(_DWORD *)(*i + 4) = i[1];
          operator delete(i);
          --*((_DWORD *)this + 3);
        }
LABEL_32:
        if ( v3 == v7[1] )
          _invalid_parameter_noinfo();
        Precacher::PurgeSound((struct Sound **)v3 + 2);
        if ( v3 == v7[1] )
          _invalid_parameter_noinfo();
        v2 = v19;
        *((_DWORD *)v3 + 2) = 0;
        v5 = _invalid_parameter_noinfo;
      }
      if ( v3 == v2[1] )
        v5();
      v8 = *(struct Sound **)v3;
      v1 = (struct Sound **)((char *)this + 16);
      if ( v3 != *((struct Sound **)this + 5) )
      {
        **((_DWORD **)v3 + 1) = v8;
        *(_DWORD *)(*(_DWORD *)v3 + 4) = *((_DWORD *)v3 + 1);
        operator delete(v3);
        --*((_DWORD *)this + 6);
      }
      v19 = v2;
      v3 = v8;
    }
  }
  v9 = *((_DWORD *)this + 3) == 0;
  *((_DWORD *)this + 17) = *((_DWORD *)this + 6);
  if ( !v9 )
  {
    sub_10015690((int)SoundMgr::ComparePriority);
    for ( j = (float *)**((_DWORD **)this + 2); ; j = *(float **)j )
    {
      v11 = _invalid_parameter_noinfo;
      if ( j == *((float **)this + 2) || *((_DWORD *)this + 17) >= *((_DWORD *)this + 10) )
        break;
      if ( j == *((float **)this + 2) )
        _invalid_parameter_noinfo();
      if ( *((_DWORD *)j + 2) )
      {
        if ( j == *((float **)this + 2) )
          _invalid_parameter_noinfo();
        v12 = *((_DWORD *)j + 2);
        if ( j == *((float **)this + 2) )
        {
          _invalid_parameter_noinfo();
          if ( j == *((float **)this + 2) )
          {
            _invalid_parameter_noinfo();
            if ( j == *((float **)this + 2) )
            {
              _invalid_parameter_noinfo();
              if ( j == *((float **)this + 2) )
              {
                _invalid_parameter_noinfo();
                if ( j == *((float **)this + 2) )
                  _invalid_parameter_noinfo();
              }
            }
          }
        }
        (*(void (__thiscall **)(int, int *, int *, float, int, float))(*(_DWORD *)v12 + 28))(
          v12,
          (int *)j + 5,
          (int *)j + 8,
          j[3],
          *((_DWORD *)j + 11),
          j[12]);
        if ( j == *((float **)this + 2) )
          _invalid_parameter_noinfo();
        v13 = *((_DWORD *)this + 5);
        v14 = sub_1000DA2B(v13, *(_DWORD *)(v13 + 4), (int)(j + 2));
        sub_10010B7C(1);
        *(_DWORD *)(v13 + 4) = v14;
        **(_DWORD **)(v14 + 4) = v14;
        if ( *(_DWORD *)(v13 + 4) == *((_DWORD *)this + 5) )
          _invalid_parameter_noinfo();
        ++*((_DWORD *)this + 17);
        v11 = _invalid_parameter_noinfo;
      }
      if ( j == *((float **)this + 2) )
        v11();
    }
    v15 = (_DWORD **)*((_DWORD *)this + 2);
    v16 = *v15;
    *v15 = v15;
    *(_DWORD *)(*((_DWORD *)this + 2) + 4) = *((_DWORD *)this + 2);
    v9 = v16 == *((_DWORD **)this + 2);
    *((_DWORD *)this + 3) = 0;
    if ( !v9 )
    {
      do
      {
        v17 = (_DWORD *)*v16;
        operator delete(v16);
        v16 = v17;
      }
      while ( v17 != *((_DWORD **)this + 2) );
    }
  }
}
