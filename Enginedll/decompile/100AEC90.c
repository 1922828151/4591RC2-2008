/*
 * func-name: ?Init@C3DModel@@QAE_NXZ
 * func-address: 0x100aec90
 * callers: none
 * callees: 0x100a5d90, 0x1013a9b0, 0x1013e2e0, 0x1017a280, 0x101a2534
 */

char __thiscall C3DModel::Init(C3DModel *this)
{
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // eax
  int v3; // eax
  bool v4; // cf
  int v5; // eax
  int v6; // edi
  _BYTE *v7; // eax
  int *v8; // esi
  World *v9; // eax
  World *v10; // eax
  unsigned int i; // edi
  int v12; // esi
  int v13; // ecx
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  char v17; // bl
  int v18; // esi
  int v19; // ecx
  int v20; // esi
  int v21; // edi
  char v23; // [esp-2Ch] [ebp-94h] BYREF
  int v24; // [esp-28h] [ebp-90h]
  int v25; // [esp-24h] [ebp-8Ch]
  int v26; // [esp-20h] [ebp-88h]
  int v27; // [esp-1Ch] [ebp-84h]
  int v28; // [esp-18h] [ebp-80h]
  int v29; // [esp-14h] [ebp-7Ch]
  int v30; // [esp-10h] [ebp-78h]
  float v31; // [esp+4h] [ebp-64h]
  _BYTE v32[28]; // [esp+8h] [ebp-60h] BYREF
  _BYTE v33[28]; // [esp+24h] [ebp-44h] BYREF
  _BYTE v34[28]; // [esp+40h] [ebp-28h] BYREF
  struct _EXCEPTION_REGISTRATION_RECORD *v35; // [esp+5Ch] [ebp-Ch]
  void *v36; // [esp+60h] [ebp-8h]
  int v37; // [esp+64h] [ebp-4h]

  v37 = -1;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  v36 = &loc_101AC93E;
  v35 = ExceptionList;
  if ( *((_DWORD *)this + 251) )
  {
    v3 = sub_1017A280(v33, (char *)this + 984);
    v4 = *(_DWORD *)(v3 + 24) < 8u;
    v37 = 0;
    if ( v4 )
      v5 = v3 + 4;
    else
      v5 = *(_DWORD *)(v3 + 4);
    v6 = (*(int (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 28) + 20))(*((_DWORD *)this + 28), v5);
    v37 = -1;
    std::wstring::~wstring(v33);
    if ( !*((_DWORD *)this + 271) )
    {
      v7 = operator new(0xC4u);
      if ( v7 )
      {
        v7[28] = 0;
        *(_DWORD *)v7 = -1;
      }
      else
      {
        v7 = 0;
      }
      *((_DWORD *)this + 271) = v7;
    }
    v8 = (int *)*((_DWORD *)this + 271);
    v30 = (int)(v8 + 3);
    *v8 = v6;
    SetRectEmpty((LPRECT)v30);
    REBlendColor::Init((REBlendColor *)(v8 + 9), 0xFFFFFFFF, 0xC8808080, 0);
  }
  if ( *((_DWORD *)this + 244) )
  {
    if ( !*((_DWORD *)this + 261) )
    {
      *(float *)&v9 = COERCE_FLOAT(operator new(0xED4u));
      v31 = *(float *)&v9;
      v37 = 1;
      if ( *(float *)&v9 == 0.0 )
        v10 = 0;
      else
        v10 = World::World(v9);
      v37 = -1;
      *((_DWORD *)this + 261) = v10;
    }
    v30 = -1;
    v31 = COERCE_FLOAT(&v23);
    std::string::string(&v23, (char *)this + 956);
    World::Load(*((World **)this + 261), v23, v24, v25, v26, v27, v28, v29, v30);
    for ( i = 0; ; ++i )
    {
      v12 = *((_DWORD *)this + 261);
      v13 = *(_DWORD *)(v12 + 3224);
      if ( !v13 || i >= (*(_DWORD *)(v12 + 3228) - v13) >> 2 )
        break;
      v14 = *(_DWORD *)(*(_DWORD *)(v12 + 3224) + 4 * i);
      v15 = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 100))(v14);
      std::string::string(v32, v15);
      v37 = 2;
      v16 = std::string::string(v34, "TextureCamera");
      LOBYTE(v37) = 3;
      v17 = std::operator==<char>(v32, v16);
      LOBYTE(v37) = 2;
      std::string::~string(v34);
      if ( v17 )
      {
        v18 = *((_DWORD *)this + 261);
        v19 = *(_DWORD *)(v18 + 3224);
        v20 = v18 + 3220;
        if ( !v19 || i >= (*(_DWORD *)(v20 + 8) - v19) >> 2 )
          invalid_parameter_noinfo();
        v21 = *(_DWORD *)(*(_DWORD *)(v20 + 4) + 4 * i);
        *((_DWORD *)this + 133) = v21;
        v31 = *(float *)(v21 + 1528);
        v37 = -1;
        s_fTimeRefresh = v31;
        std::string::~string(v32);
        return 1;
      }
      v37 = -1;
      std::string::~string(v32);
    }
  }
  return 0;
}
