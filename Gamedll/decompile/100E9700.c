/*
 * func-name: ?RemoveSound@SoundMgr@@QAE_NPAUSOUND_OPTION@@_N@Z_0
 * func-address: 0x100e9700
 * callers: 0x1001884a
 * callees: 0x10001ce4, 0x10017387
 */

char __thiscall SoundMgr::RemoveSound(SoundMgr *this, struct SOUND_OPTION *a2, bool a3)
{
  bool v3; // zf
  _DWORD *v4; // edi
  char *v5; // ebx
  char *v6; // esi
  _DWORD *v7; // ebp
  int v8; // eax
  _DWORD *v9; // edi
  _DWORD *v10; // esi
  _DWORD *v11; // ebp
  int v12; // eax
  _DWORD *v14; // edi
  char *v15; // esi
  _DWORD **v16; // edx
  _DWORD *v17; // edi
  struct Sound *v18; // ecx
  int v19; // ecx
  int v21; // [esp+4h] [ebp-8h] BYREF
  _DWORD *v22; // [esp+8h] [ebp-4h]
  struct Sound **v23; // [esp+10h] [ebp+4h]

  if ( !a2 )
    return 1;
  v3 = *((_DWORD *)a2 + 14) == 0;
  v23 = (struct Sound **)((char *)a2 + 56);
  if ( v3 )
    return 1;
  if ( a3 )
  {
    v4 = (_DWORD *)**((_DWORD **)this + 2);
    v5 = (char *)this + 4;
    v6 = (char *)this + 4;
    while ( 1 )
    {
      v7 = (_DWORD *)*((_DWORD *)v5 + 1);
      if ( !v6 || v6 != v5 )
        _invalid_parameter_noinfo();
      if ( v4 == v7 )
        break;
      if ( !v6 )
        _invalid_parameter_noinfo();
      if ( v4 == *((_DWORD **)v6 + 1) )
        _invalid_parameter_noinfo();
      if ( (struct Sound *)v4[2] == *v23 )
      {
        v8 = sub_10001CE4((int)&v21, (int)v6, v4);
        v6 = *(char **)v8;
        v4 = *(_DWORD **)(v8 + 4);
      }
      else
      {
        if ( v4 == *((_DWORD **)v6 + 1) )
          _invalid_parameter_noinfo();
        v4 = (_DWORD *)*v4;
      }
    }
    v9 = (_DWORD *)**((_DWORD **)this + 5);
    v10 = (_DWORD *)((char *)this + 16);
    while ( 1 )
    {
      v11 = (_DWORD *)*((_DWORD *)this + 5);
      if ( !v10 || v10 != (_DWORD *)((char *)this + 16) )
        _invalid_parameter_noinfo();
      if ( v9 == v11 )
        break;
      if ( !v10 )
        _invalid_parameter_noinfo();
      if ( v9 == (_DWORD *)v10[1] )
        _invalid_parameter_noinfo();
      if ( (struct Sound *)v9[2] == *v23 )
      {
        v12 = sub_10001CE4((int)&v21, (int)v10, v9);
        v10 = *(_DWORD **)v12;
        v9 = *(_DWORD **)(v12 + 4);
      }
      else
      {
        if ( v9 == (_DWORD *)v10[1] )
          _invalid_parameter_noinfo();
        v9 = (_DWORD *)*v9;
      }
    }
    Precacher::PurgeSound(v23);
    *v23 = 0;
    *((_DWORD *)this + 17) = *((_DWORD *)this + 6);
    return 1;
  }
  else
  {
    v14 = (_DWORD *)**((_DWORD **)this + 2);
    v15 = (char *)this + 4;
    v22 = v14;
    v21 = (int)this + 4;
    while ( v14 != *((_DWORD **)v15 + 1) )
    {
      if ( (struct Sound *)v14[2] == *v23 )
      {
        v22 = v14;
        goto LABEL_40;
      }
      if ( v14 == *((_DWORD **)v15 + 1) )
        _invalid_parameter_noinfo();
      v14 = (_DWORD *)*v14;
    }
    v16 = (_DWORD **)*((_DWORD *)this + 5);
    v22 = v14;
    v17 = *v16;
    v22 = *v16;
    v21 = (int)this + 16;
    while ( 1 )
    {
      if ( v17 == *((_DWORD **)this + 5) )
      {
        v19 = *((_DWORD *)this + 6);
        v22 = v17;
        *((_DWORD *)this + 17) = v19;
        return 1;
      }
      if ( (struct Sound *)v17[2] == *v23 )
        break;
      if ( v17 == *((_DWORD **)this + 5) )
        _invalid_parameter_noinfo();
      v17 = (_DWORD *)*v17;
    }
    v18 = *v23;
    v3 = *v23 == 0;
    v22 = v17;
    if ( v3 || !(*(unsigned __int8 (__thiscall **)(struct Sound *))(*(_DWORD *)v18 + 40))(v18) )
    {
      Precacher::PurgeSound(v23);
      sub_10001CE4((int)&v21, (int)this + 16, v17);
      *v23 = 0;
      return 1;
    }
LABEL_40:
    *(_BYTE *)(sub_10017387() + 45) = 1;
    return 0;
  }
}
