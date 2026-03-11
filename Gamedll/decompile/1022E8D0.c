/*
 * func-name: ??1FlyweightManager@GameClient@@QAE@XZ_0
 * func-address: 0x1022e8d0
 * callers: 0x1000e9d0
 * callees: 0x10019998, 0x102c9d50
 */

void __thiscall GameClient::FlyweightManager::~FlyweightManager(GameClient::FlyweightManager *this)
{
  _DWORD *v2; // ebp
  char *v3; // edi
  void (__thiscall ***v4)(_DWORD, int); // ecx
  void *v5; // eax
  _DWORD **v6; // eax
  _DWORD *v7; // ebp
  bool v8; // zf
  _DWORD *v9; // ebx
  _DWORD **v10; // ecx
  _DWORD *v11; // eax
  _DWORD *v12; // esi

  v2 = (_DWORD *)**((_DWORD **)this + 2);
  v3 = (char *)this + 4;
  while ( v2 != *((_DWORD **)v3 + 1) )
  {
    if ( v2[3] )
    {
      if ( v2 == *((_DWORD **)v3 + 1) )
        _invalid_parameter_noinfo();
      v4 = (void (__thiscall ***)(_DWORD, int))v2[3];
      if ( v4 )
        (**v4)(v4, 1);
      if ( v2 == *((_DWORD **)v3 + 1) )
        _invalid_parameter_noinfo();
      v2[3] = 0;
    }
    if ( v2 == *((_DWORD **)v3 + 1) )
      _invalid_parameter_noinfo();
    v2 = (_DWORD *)*v2;
  }
  sub_10019998();
  v5 = (void *)*((_DWORD *)this + 15);
  if ( v5 )
    operator delete(v5);
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  v6 = (_DWORD **)*((_DWORD *)this + 12);
  v7 = *v6;
  *v6 = v6;
  *(_DWORD *)(*((_DWORD *)this + 12) + 4) = *((_DWORD *)this + 12);
  v8 = v7 == *((_DWORD **)this + 12);
  *((_DWORD *)this + 13) = 0;
  if ( !v8 )
  {
    do
    {
      v9 = (_DWORD *)*v7;
      std::string::~string(v7 + 2);
      operator delete(v7);
      v7 = v9;
    }
    while ( v9 != *((_DWORD **)this + 12) );
  }
  operator delete(*((void **)this + 12));
  *((_DWORD *)this + 12) = 0;
  if ( *((_DWORD *)this + 5) )
    operator delete(*((void **)this + 5));
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  v10 = (_DWORD **)*((_DWORD *)v3 + 1);
  v11 = *v10;
  *v10 = v10;
  *(_DWORD *)(*((_DWORD *)v3 + 1) + 4) = *((_DWORD *)v3 + 1);
  v8 = v11 == *((_DWORD **)v3 + 1);
  *((_DWORD *)v3 + 2) = 0;
  if ( !v8 )
  {
    do
    {
      v12 = (_DWORD *)*v11;
      operator delete(v11);
      v11 = v12;
    }
    while ( v12 != *((_DWORD **)v3 + 1) );
  }
  operator delete(*((void **)v3 + 1));
  *((_DWORD *)v3 + 1) = 0;
}
