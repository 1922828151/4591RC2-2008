/*
 * func-name: ??1AdapterActor@GameClient@@UAE@XZ_0
 * func-address: 0x100f3f40
 * callers: 0x10009999
 * callees: 0x100026f3, 0x100063fc, 0x100181b5, 0x102c9d50
 */

void __thiscall GameClient::AdapterActor::~AdapterActor(GameClient::AdapterActor *this)
{
  char *v2; // edi
  _DWORD *i; // ebp
  AsyncLoader *v4; // eax
  _DWORD **v5; // ecx
  _DWORD *v6; // eax
  bool v7; // zf
  _DWORD *v8; // ebp
  void *v9; // ebp
  _DWORD **v10; // ecx
  _DWORD *v11; // eax
  _DWORD *v12; // ebp
  int v13; // edi
  int j; // ebp
  void *v15; // eax
  _DWORD **v16; // eax
  _DWORD *v17; // edi
  _DWORD *v18; // ebp
  void *v19; // eax
  _DWORD **v20; // eax
  _DWORD *v21; // edi
  _DWORD *v22; // ebp
  int v23; // [esp+0h] [ebp-2Ch]
  int v24; // [esp+0h] [ebp-2Ch]
  int v25; // [esp+4h] [ebp-28h]
  _DWORD v26[2]; // [esp+18h] [ebp-14h] BYREF
  int v27; // [esp+28h] [ebp-4h]

  *(_DWORD *)this = &GameClient::AdapterActor::`vftable';
  v2 = (char *)this + 1140;
  v27 = 6;
  sub_100063FC();
  v26[1] = *((_DWORD *)v2 + 1);
  v26[0] = v2;
  sub_100026F3(9, (int)v26);
  *((_DWORD *)this + 292) = 1;
  *((_DWORD *)this + 293) = 1;
  for ( i = (_DWORD *)**((_DWORD **)this + 310); i != *((_DWORD **)this + 310); i = (_DWORD *)*i )
  {
    v4 = (AsyncLoader *)AsyncLoader::Instance(i[2], v23);
    AsyncLoader::CancelSubmit(v4, v24);
    if ( i == *((_DWORD **)this + 310) )
      _invalid_parameter_noinfo();
  }
  v5 = (_DWORD **)*((_DWORD *)this + 310);
  v6 = *v5;
  *v5 = v5;
  *(_DWORD *)(*((_DWORD *)this + 310) + 4) = *((_DWORD *)this + 310);
  v7 = v6 == *((_DWORD **)this + 310);
  *((_DWORD *)this + 311) = 0;
  if ( !v7 )
  {
    do
    {
      v8 = (_DWORD *)*v6;
      operator delete(v6);
      v6 = v8;
    }
    while ( v8 != *((_DWORD **)this + 310) );
  }
  if ( *((_DWORD *)this + 308) )
  {
    operator delete(*((void **)this + 308));
    *((_DWORD *)this + 308) = 0;
  }
  v9 = (void *)*((_DWORD *)this + 317);
  if ( v9 )
  {
    sub_100181B5(v23, v25);
    operator delete(v9);
    *((_DWORD *)this + 317) = 0;
  }
  v10 = (_DWORD **)*((_DWORD *)this + 310);
  v11 = *v10;
  *v10 = v10;
  *(_DWORD *)(*((_DWORD *)this + 310) + 4) = *((_DWORD *)this + 310);
  v7 = v11 == *((_DWORD **)this + 310);
  *((_DWORD *)this + 311) = 0;
  if ( !v7 )
  {
    do
    {
      v12 = (_DWORD *)*v11;
      operator delete(v11);
      v11 = v12;
    }
    while ( v12 != *((_DWORD **)this + 310) );
  }
  operator delete(*((void **)this + 310));
  *((_DWORD *)this + 310) = 0;
  v13 = *((_DWORD *)this + 305);
  LOBYTE(v27) = 4;
  if ( v13 )
  {
    for ( j = *((_DWORD *)this + 306); v13 != j; v13 += 36 )
      std::string::~string((void *)(v13 + 4));
    operator delete(*((void **)this + 305));
  }
  *((_DWORD *)this + 305) = 0;
  *((_DWORD *)this + 306) = 0;
  *((_DWORD *)this + 307) = 0;
  v15 = (void *)*((_DWORD *)this + 299);
  LOBYTE(v27) = 3;
  if ( v15 )
    operator delete(v15);
  *((_DWORD *)this + 299) = 0;
  *((_DWORD *)this + 300) = 0;
  *((_DWORD *)this + 301) = 0;
  v16 = (_DWORD **)*((_DWORD *)this + 296);
  v17 = *v16;
  *v16 = v16;
  *(_DWORD *)(*((_DWORD *)this + 296) + 4) = *((_DWORD *)this + 296);
  v7 = v17 == *((_DWORD **)this + 296);
  *((_DWORD *)this + 297) = 0;
  if ( !v7 )
  {
    do
    {
      v18 = (_DWORD *)*v17;
      std::string::~string(v17 + 2);
      operator delete(v17);
      v17 = v18;
    }
    while ( v18 != *((_DWORD **)this + 296) );
  }
  operator delete(*((void **)this + 296));
  *((_DWORD *)this + 296) = 0;
  v19 = (void *)*((_DWORD *)this + 289);
  LOBYTE(v27) = 2;
  if ( v19 )
    operator delete(v19);
  *((_DWORD *)this + 289) = 0;
  *((_DWORD *)this + 290) = 0;
  *((_DWORD *)this + 291) = 0;
  v20 = (_DWORD **)*((_DWORD *)this + 286);
  v21 = *v20;
  *v20 = v20;
  *(_DWORD *)(*((_DWORD *)this + 286) + 4) = *((_DWORD *)this + 286);
  v7 = v21 == *((_DWORD **)this + 286);
  *((_DWORD *)this + 287) = 0;
  if ( !v7 )
  {
    do
    {
      v22 = (_DWORD *)*v21;
      std::string::~string(v21 + 2);
      operator delete(v21);
      v21 = v22;
    }
    while ( v22 != *((_DWORD **)this + 286) );
  }
  operator delete(*((void **)this + 286));
  *((_DWORD *)this + 286) = 0;
  LOBYTE(v27) = 1;
  std::string::~string((char *)this + 1080);
  LOBYTE(v27) = 0;
  std::string::~string((char *)this + 1052);
  v27 = -1;
  Actor::~Actor(this);
}
