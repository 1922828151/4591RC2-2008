/*
 * func-name: ?OnLoadModelComplete@OccupyIcon@GameClient@@UAEXHPAVModel@@@Z_0
 * func-address: 0x10169600
 * callers: 0x1000e27d
 * callees: 0x1000516e, 0x10008b48, 0x1000a6a0, 0x1000b5f0, 0x100145c9, 0x10019484, 0x102c1270, 0x102c9d98, 0x102c9ea2
 */

void __thiscall GameClient::OccupyIcon::OnLoadModelComplete(GameClient::OccupyIcon *this, void *a2, struct Model *a3)
{
  void *v4; // esi
  _DWORD *v5; // esi
  unsigned int v6; // edi
  int v7; // ecx
  int v8; // ebx
  int v9; // eax
  struct Game *v10; // eax
  int v11; // ecx
  int *v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // edx
  int v16; // ecx
  int v17; // edx
  int v18; // [esp+4h] [ebp-60h]
  int v19; // [esp+8h] [ebp-5Ch]
  _DWORD v20[16]; // [esp+18h] [ebp-4Ch] BYREF
  int v21; // [esp+60h] [ebp-4h]

  v4 = a2;
  GameClient::NonControlledEstab::OnLoadModelComplete(this, (int)a2, a3);
  if ( v4 == *((void **)this + 76) )
  {
    v5 = (_DWORD *)*((_DWORD *)this + 2);
    v6 = 0;
    a3 = 0;
    while ( 1 )
    {
      v7 = v5[131];
      v8 = 0;
      if ( !v7 || v6 >= (v5[132] - v7) >> 2 )
        break;
      a2 = operator new(0x78u);
      v21 = 0;
      if ( a2 )
        v8 = sub_100145C9(v18, v19);
      v9 = v5[135];
      v21 = -1;
      if ( !v9 || v6 >= (v5[136] - v9) / 28 )
        _invalid_parameter_noinfo();
      std::string::operator=(v8, (char *)a3 + v5[135]);
      v10 = Game::Instance();
      sub_10019484(*((_DWORD *)v10 + 25), 0);
      v11 = v5[131];
      if ( !v11 || v6 >= (v5[132] - v11) >> 2 )
        _invalid_parameter_noinfo();
      a2 = *(void **)(v5[131] + 4 * v6);
      v12 = (int *)sub_10008B48((int)&a2);
      ++v6;
      a3 = (struct Model *)((char *)a3 + 28);
      *v12 = v8;
    }
    v13 = *((_DWORD *)this + 7);
    v14 = *((_DWORD *)this + 8);
    *((_DWORD *)this + 128) = *((_DWORD *)this + 6);
    *((_DWORD *)this + 129) = v13;
    *((_DWORD *)this + 130) = v14;
    memset(v20, 0, sizeof(v20));
    sub_102C1270(1.0);
    v15 = *(_DWORD *)this;
    *(float *)&v20[15] = 1.0;
    if ( (*(unsigned __int8 (__thiscall **)(GameClient::OccupyIcon *, _DWORD *, _DWORD *, _DWORD))(v15 + 88))(
           this,
           v5 + 138,
           v20,
           0) )
    {
      v16 = v20[13];
      v17 = v20[14];
      *((_DWORD *)this + 128) = v20[12];
      *((_DWORD *)this + 129) = v16;
      *((_DWORD *)this + 130) = v17;
    }
    GameClient::OccupyIcon::ChangeFX(*((_DWORD *)this + 27));
  }
}
