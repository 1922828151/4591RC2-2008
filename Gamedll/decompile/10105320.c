/*
 * func-name: ?OnModel@PartAsyncLoaderReport@GameClient@@UAEXHPAVModel@@@Z_0
 * func-address: 0x10105320
 * callers: 0x1000d26a
 * callees: 0x10006023, 0x10014fb0, 0x10016eff, 0x102c7580
 */

void __thiscall GameClient::PartAsyncLoaderReport::OnModel(
        GameClient::PartAsyncLoaderReport *this,
        int a2,
        struct Model *a3)
{
  GameClient::PartAsyncLoaderReport *v3; // ebx
  int v4; // esi
  int v5; // eax
  int v6; // esi
  void *v7; // ebp
  int v8; // eax
  _DWORD *v9; // edi
  int v10; // ebp
  unsigned int v11; // esi
  int v12; // ebp
  int v13; // edi
  unsigned int v14; // eax
  int v15; // edi
  bool v16; // cc
  void (__cdecl *v17)(); // edi
  void **v18; // ebx
  int v19; // ebx
  int v20; // eax
  char v21; // bl
  int *v22; // eax
  int v24; // [esp+18h] [ebp-54h] BYREF
  void *v25; // [esp+1Ch] [ebp-50h]
  int v26[2]; // [esp+20h] [ebp-4Ch] BYREF
  _BYTE v27[28]; // [esp+28h] [ebp-44h] BYREF
  _BYTE v28[28]; // [esp+44h] [ebp-28h] BYREF
  int v29; // [esp+68h] [ebp-4h]

  v3 = this;
  if ( *((_DWORD *)this + 1) )
  {
    v4 = a2;
    if ( !a3 )
      LogPrintf("Load Part Model : %d Faild!", a2);
    a2 = v4;
    sub_10016EFF((int)&v24, (int)&a2);
    v5 = *((_DWORD *)v3 + 1);
    v6 = v24;
    v7 = *(void **)(v5 + 1320);
    v8 = v5 + 1316;
    if ( !v24 || v24 != v8 )
      _invalid_parameter_noinfo();
    v9 = v25;
    if ( v25 != v7 )
    {
      if ( !v6 )
        _invalid_parameter_noinfo();
      if ( v9 == *(_DWORD **)(v6 + 4) )
        _invalid_parameter_noinfo();
      std::vector<Model *>::push_back(v9[3] + 32, &a3);
      v10 = *((_DWORD *)v3 + 1);
      v11 = *(_DWORD *)(v10 + 1372);
      v12 = v10 + 1368;
      if ( v11 > *(_DWORD *)(v12 + 8) )
        _invalid_parameter_noinfo();
      while ( 1 )
      {
        v13 = *((_DWORD *)v3 + 1);
        v14 = *(_DWORD *)(v13 + 1376);
        v15 = v13 + 1368;
        v16 = *(_DWORD *)(v15 + 4) <= v14;
        a2 = v14;
        if ( !v16 )
          _invalid_parameter_noinfo();
        if ( v12 && v12 == v15 )
        {
          v17 = _invalid_parameter_noinfo;
        }
        else
        {
          v17 = _invalid_parameter_noinfo;
          _invalid_parameter_noinfo();
        }
        if ( v11 == a2 )
          break;
        v18 = (void **)v25;
        if ( v25 == *(void **)(v24 + 4) )
          v17();
        v19 = sub_102C7580(v28, v18[3]);
        v29 = 0;
        if ( !v12 )
          v17();
        if ( v11 >= *(_DWORD *)(v12 + 8) )
          v17();
        v20 = sub_102C7580(v27, (void *)(v11 + 28));
        LOBYTE(v29) = 1;
        v21 = std::operator==<char>(v20, v19);
        LOBYTE(v29) = 0;
        std::string::~string(v27);
        v29 = -1;
        std::string::~string(v28);
        if ( v21 )
        {
          if ( v11 >= *(_DWORD *)(v12 + 8) )
          {
            _invalid_parameter_noinfo();
            if ( v11 >= *(_DWORD *)(v12 + 8) )
              _invalid_parameter_noinfo();
          }
          (*(void (__thiscall **)(_DWORD, unsigned int, unsigned int, struct Model *))(**((_DWORD **)this + 1) + 124))(
            *((_DWORD *)this + 1),
            v11,
            v11 + 56,
            a3);
          v22 = (int *)sub_10014FB0((int)v26, v12, v11);
          v12 = *v22;
          v11 = v22[1];
          v3 = this;
        }
        else
        {
          if ( v11 >= *(_DWORD *)(v12 + 8) )
            _invalid_parameter_noinfo();
          v3 = this;
          v11 += 84;
        }
      }
      sub_10006023((int)v26, v24, v25);
    }
  }
}
