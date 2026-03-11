/*
 * func-name: ?PreRender@CombinActor@GameClient@@UAEXPAVCamera@@@Z_0
 * func-address: 0x10104c60
 * callers: 0x1001718e
 * callees: 0x10016f5e, 0x102c0750
 */

void __thiscall GameClient::CombinActor::PreRender(GameClient::CombinActor *this, struct Camera *a2)
{
  const struct BBox *WorldBBox; // eax
  int v4; // esi
  _DWORD *i; // esi
  unsigned int j; // edi
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  void (__thiscall ***v11)(_DWORD, struct Camera *, _DWORD, int, int, GameClient::CombinActor *, _DWORD); // ecx
  _BYTE v12[40]; // [esp+14h] [ebp-34h] BYREF
  int v13; // [esp+44h] [ebp-4h]

  if ( *((_BYTE *)this + 1388) )
  {
    WorldBBox = (const struct BBox *)StaticModel::GetWorldBBox(*((_DWORD *)this + 179), v12);
    v13 = 0;
    v4 = Camera::BoxInFrustum(a2, WorldBBox, 0, 0);
    v13 = -1;
    sub_102C0750(v12);
    if ( v4 )
    {
      for ( i = (_DWORD *)**((_DWORD **)this + 320); i != *((_DWORD **)this + 320); i = (_DWORD *)*i )
      {
        for ( j = 0; ; ++j )
        {
          if ( i == *((_DWORD **)this + 320) )
            _invalid_parameter_noinfo();
          v7 = i[18];
          if ( !v7 || j >= (i[19] - v7) >> 2 )
            break;
          if ( *((_DWORD *)this + 179) )
          {
            if ( i == *((_DWORD **)this + 320) )
              _invalid_parameter_noinfo();
            v8 = i[18];
            if ( !v8 || j >= (i[19] - v8) >> 2 )
              _invalid_parameter_noinfo();
            sub_10016F5E(*((_DWORD *)this + 179) + 288);
            if ( i == *((_DWORD **)this + 320) )
              _invalid_parameter_noinfo();
            v9 = i[18];
            if ( !v9 || j >= (i[19] - v9) >> 2 )
              _invalid_parameter_noinfo();
            *(float *)(*(_DWORD *)(i[18] + 4 * j) + 212) = *(float *)(*((_DWORD *)this + 179) + 212);
          }
          if ( i == *((_DWORD **)this + 320) )
            _invalid_parameter_noinfo();
          v10 = i[18];
          if ( !v10 || j >= (i[19] - v10) >> 2 )
            _invalid_parameter_noinfo();
          v11 = *(void (__thiscall ****)(_DWORD, struct Camera *, _DWORD, int, int, GameClient::CombinActor *, _DWORD))(i[18] + 4 * j);
          (**v11)(v11, a2, *((_DWORD *)this + 178), 1, 1, this, 0);
        }
        if ( i == *((_DWORD **)this + 320) )
          _invalid_parameter_noinfo();
      }
    }
  }
  Actor::PreRender(this, a2);
}
