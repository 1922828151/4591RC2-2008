/*
 * func-name: ?RegisterProductFlyweight@ProductManager@GameClient@@QAEXPAVFProduct@2@@Z_0
 * func-address: 0x1016e7b0
 * callers: 0x10003328
 * callees: 0x10007059, 0x1000b50a, 0x100140c9, 0x1001a0f5, 0x102c9d50
 */

void __thiscall GameClient::ProductManager::RegisterProductFlyweight(
        GameClient::ProductManager *this,
        struct GameClient::FProduct *a2)
{
  _DWORD *v3; // ebx
  char *v4; // eax
  char *v5; // esi
  _DWORD *v6; // ebp
  struct GameClient::FProduct *v7; // esi
  _DWORD *v8; // eax
  bool v9; // cc
  _DWORD *v10; // esi
  int v11; // ebp
  _DWORD *v12; // ebx
  _DWORD *v13; // edi
  _DWORD *v14; // [esp+14h] [ebp-40h] BYREF
  char *v15; // [esp+18h] [ebp-3Ch] BYREF
  _DWORD *i; // [esp+1Ch] [ebp-38h]
  int v17; // [esp+24h] [ebp-30h] BYREF
  void *v18; // [esp+28h] [ebp-2Ch]
  int v19; // [esp+2Ch] [ebp-28h]
  int v20; // [esp+30h] [ebp-24h]
  int v21; // [esp+34h] [ebp-20h] BYREF
  void *v22; // [esp+3Ch] [ebp-18h]
  int v23; // [esp+50h] [ebp-4h]

  v14 = (_DWORD *)*((_DWORD *)a2 + 27);
  sub_10007059((int)&v15, (int)&v14);
  v3 = (_DWORD *)*((_DWORD *)this + 13);
  v4 = (char *)this + 48;
  v5 = v15;
  if ( !v15 || v15 != v4 )
    _invalid_parameter_noinfo();
  v6 = i;
  if ( i == v3 )
  {
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v7 = a2;
    a2 = (struct GameClient::FProduct *)*((_DWORD *)a2 + 12);
    v23 = 0;
    sub_1001A0F5(&v17, (int)&a2);
    v21 = *((_DWORD *)v7 + 27);
    sub_1000B50A((int)&v17);
    LOBYTE(v23) = 1;
    sub_100140C9((int)&v15, (int)&v21);
    if ( v22 )
      operator delete(v22);
    if ( v18 )
      operator delete(v18);
  }
  else
  {
    if ( !v5 )
      _invalid_parameter_noinfo();
    if ( v6 == *((_DWORD **)v5 + 1) )
      _invalid_parameter_noinfo();
    v8 = (_DWORD *)v6[5];
    v9 = v6[4] <= (unsigned int)v8;
    v10 = v6 + 3;
    v11 = *((_DWORD *)a2 + 12);
    v14 = v8;
    if ( !v9 )
      _invalid_parameter_noinfo();
    v12 = (_DWORD *)v10[2];
    if ( v10[1] > (unsigned int)v12 )
      _invalid_parameter_noinfo();
    v13 = (_DWORD *)v10[1];
    if ( (unsigned int)v13 > v10[2] )
      _invalid_parameter_noinfo();
    for ( i = v13; v13 != v12; ++v13 )
    {
      if ( *v13 == v11 )
        break;
    }
    if ( !v10 )
      _invalid_parameter_noinfo();
    if ( v13 == v14 )
    {
      a2 = (struct GameClient::FProduct *)*((_DWORD *)a2 + 12);
      sub_1001A0F5(v10, (int)&a2);
    }
  }
}
