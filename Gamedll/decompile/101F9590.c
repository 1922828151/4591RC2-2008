/*
 * func-name: ?Clear@GroupManager@GameClient@@QAEXXZ_0
 * func-address: 0x101f9590
 * callers: 0x100167b6
 * callees: 0x10002b1c, 0x10002c98, 0x100048a4, 0x10005c4f, 0x10006398, 0x10009d9f, 0x1000bbd6, 0x1000ccf2, 0x1000e304, 0x10010f7d, 0x10013a5c, 0x100149e3, 0x10015299, 0x1001a4fb, 0x102c9d50
 */

void __thiscall GameClient::GroupManager::Clear(GameClient::GroupManager *this)
{
  char *v2; // edi
  _DWORD *v3; // eax
  _DWORD *i; // ebp
  _DWORD *v5; // eax
  unsigned int v6; // ebp
  bool v7; // cc
  unsigned int v8; // eax
  unsigned int v9; // ebp
  _DWORD *v10; // eax
  unsigned int v11; // ebp
  unsigned int v12; // eax
  unsigned int v13; // ebp
  _DWORD **v14; // eax
  _DWORD *v15; // edi
  bool v16; // zf
  _DWORD *v17; // eax
  unsigned int v18; // ebp
  unsigned int v19; // eax
  unsigned int v20; // ebp
  _DWORD v21[2]; // [esp+14h] [ebp-1Ch] BYREF
  char *v22; // [esp+1Ch] [ebp-14h] BYREF
  _DWORD *v23; // [esp+20h] [ebp-10h]
  int v24; // [esp+2Ch] [ebp-4h]

  *((_DWORD *)this + 45) = -1;
  v2 = (char *)this + 224;
  sub_10013A5C(*(void **)(*((_DWORD *)this + 57) + 4));
  *(_DWORD *)(*((_DWORD *)v2 + 1) + 4) = *((_DWORD *)v2 + 1);
  v3 = (_DWORD *)*((_DWORD *)v2 + 1);
  *((_DWORD *)v2 + 2) = 0;
  *v3 = v3;
  *(_DWORD *)(*((_DWORD *)v2 + 1) + 8) = *((_DWORD *)v2 + 1);
  sub_10005C4F();
  v23 = (_DWORD *)*((_DWORD *)this + 61);
  v22 = (char *)this + 240;
  sub_1000BBD6(9, (int)&v22);
  *((_DWORD *)this + 67) = 1;
  *((_DWORD *)this + 68) = 1;
  sub_1000E304();
  v23 = (_DWORD *)*((_DWORD *)this + 3);
  v22 = (char *)this + 8;
  sub_1000CCF2(9, (int)&v22);
  *((_DWORD *)this + 9) = 1;
  *((_DWORD *)this + 10) = 1;
  for ( i = (_DWORD *)**((_DWORD **)this + 13); ; i = (_DWORD *)*i )
  {
    v23 = (_DWORD *)*((_DWORD *)this + 13);
    if ( i == v23 )
      break;
    if ( i == *((_DWORD **)this + 13) )
      _invalid_parameter_noinfo();
    GameClient::Group::Dismiss((GameClient::Group *)(i + 3));
    if ( i == *((_DWORD **)this + 13) )
      _invalid_parameter_noinfo();
  }
  sub_1001A4FB();
  v5 = (_DWORD *)*((_DWORD *)this + 13);
  v22 = (char *)this + 48;
  v6 = *((_DWORD *)this + 17);
  v7 = *((_DWORD *)this + 16) <= v6;
  v23 = v5;
  if ( !v7 )
    _invalid_parameter_noinfo();
  v8 = *((_DWORD *)this + 16);
  v7 = v8 <= *((_DWORD *)this + 17);
  v21[0] = v8;
  if ( !v7 )
  {
    _invalid_parameter_noinfo();
    v8 = v21[0];
  }
  sub_10015299((int)v21, (int)this + 60, v8, (int)this + 60, v6);
  v9 = *((_DWORD *)this + 16);
  if ( v9 > *((_DWORD *)this + 17) )
    _invalid_parameter_noinfo();
  sub_10002B1C((int)this + 60, v9, 9, (int)&v22);
  *((_DWORD *)this + 19) = 1;
  *((_DWORD *)this + 20) = 1;
  sub_10009D9F();
  v10 = (_DWORD *)*((_DWORD *)this + 23);
  v22 = (char *)this + 88;
  v11 = *((_DWORD *)this + 27);
  v7 = *((_DWORD *)this + 26) <= v11;
  v23 = v10;
  if ( !v7 )
    _invalid_parameter_noinfo();
  v12 = *((_DWORD *)this + 26);
  v7 = v12 <= *((_DWORD *)this + 27);
  v21[0] = v12;
  if ( !v7 )
  {
    _invalid_parameter_noinfo();
    v12 = v21[0];
  }
  sub_100048A4((int)v21, (int)this + 100, v12, (int)this + 100, v11);
  v13 = *((_DWORD *)this + 26);
  if ( v13 > *((_DWORD *)this + 27) )
    _invalid_parameter_noinfo();
  sub_10002C98((int)this + 100, v13, 9, (int)&v22);
  *((_DWORD *)this + 29) = 1;
  *((_DWORD *)this + 30) = 1;
  v14 = (_DWORD **)*((_DWORD *)this + 33);
  v15 = *v14;
  *v14 = v14;
  *(_DWORD *)(*((_DWORD *)this + 33) + 4) = *((_DWORD *)this + 33);
  v16 = v15 == *((_DWORD **)this + 33);
  *((_DWORD *)this + 34) = 0;
  if ( !v16 )
  {
    do
    {
      v21[0] = *v15;
      v22 = (char *)(v15 + 3);
      v24 = 1;
      std::wstring::~wstring(v15 + 28);
      LOBYTE(v24) = 0;
      std::wstring::~wstring(v15 + 21);
      v24 = -1;
      std::string::~string(v15 + 4);
      operator delete(v15);
      v15 = (_DWORD *)v21[0];
    }
    while ( v21[0] != *((_DWORD *)this + 33) );
  }
  v17 = (_DWORD *)*((_DWORD *)this + 33);
  v22 = (char *)this + 128;
  v18 = *((_DWORD *)this + 37);
  v7 = *((_DWORD *)this + 36) <= v18;
  v23 = v17;
  if ( !v7 )
    _invalid_parameter_noinfo();
  v19 = *((_DWORD *)this + 36);
  v7 = v19 <= *((_DWORD *)this + 37);
  v21[0] = v19;
  if ( !v7 )
  {
    _invalid_parameter_noinfo();
    v19 = v21[0];
  }
  sub_100149E3((int)v21, (int)this + 140, v19, (int)this + 140, v18);
  v20 = *((_DWORD *)this + 36);
  if ( v20 > *((_DWORD *)this + 37) )
    _invalid_parameter_noinfo();
  sub_10010F7D((int)this + 140, v20, 9, (int)&v22);
  *((_DWORD *)this + 39) = 1;
  *((_DWORD *)this + 40) = 1;
  std::string::clear((char *)this + 196);
}
