/*
 * func-name: ?Initialize@FlyweightManager@GameClient@@QAE_NXZ_0
 * func-address: 0x1022ef60
 * callers: 0x10004557
 * callees: 0x10001ef1, 0x10002027, 0x10003d0a, 0x10003fe9, 0x1000c09a, 0x100114ff, 0x100130a2, 0x10013def, 0x10016e5a, 0x100174cc, 0x102bdb40, 0x102bdf50, 0x102c71e0, 0x102c7220, 0x102c8190, 0x102c9d50, 0x102c9d62
 */

char __thiscall GameClient::FlyweightManager::Initialize(GameClient::FlyweightManager *this)
{
  int v1; // ebp
  int v2; // eax
  unsigned int i; // ebx
  int v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // ecx
  int v9; // edi
  int v10; // esi
  int v11; // eax
  int v12; // esi
  int v13; // eax
  unsigned int j; // edi
  char *v15; // esi
  char *v16; // ebx
  int *v17; // esi
  int **v18; // edi
  int v19; // [esp-40h] [ebp-190h]
  int v20; // [esp-3Ch] [ebp-18Ch] BYREF
  int v21; // [esp-38h] [ebp-188h] BYREF
  int v22; // [esp-34h] [ebp-184h]
  int v23; // [esp-30h] [ebp-180h]
  int v24; // [esp-2Ch] [ebp-17Ch]
  int v25; // [esp-28h] [ebp-178h]
  int v26; // [esp-24h] [ebp-174h]
  int v27; // [esp-20h] [ebp-170h] BYREF
  int v28; // [esp-1Ch] [ebp-16Ch] BYREF
  int v29; // [esp-18h] [ebp-168h]
  int v30; // [esp-14h] [ebp-164h]
  int v31; // [esp-10h] [ebp-160h]
  int v32; // [esp-Ch] [ebp-15Ch]
  int v33; // [esp-8h] [ebp-158h]
  const char *v34; // [esp-4h] [ebp-154h]
  int v35; // [esp+0h] [ebp-150h]
  int v36; // [esp+4h] [ebp-14Ch]
  int *v37; // [esp+14h] [ebp-13Ch]
  int *v38; // [esp+18h] [ebp-138h]
  _BYTE v39[4]; // [esp+1Ch] [ebp-134h] BYREF
  int v40; // [esp+20h] [ebp-130h]
  int v41; // [esp+24h] [ebp-12Ch]
  int v42; // [esp+28h] [ebp-128h]
  GameClient::FlyweightManager *v43; // [esp+2Ch] [ebp-124h]
  int v44; // [esp+30h] [ebp-120h]
  _BYTE v45[28]; // [esp+34h] [ebp-11Ch] BYREF
  _BYTE v46[28]; // [esp+50h] [ebp-100h] BYREF
  _BYTE v47[4]; // [esp+6Ch] [ebp-E4h] BYREF
  void *v48; // [esp+70h] [ebp-E0h]
  char *v49; // [esp+74h] [ebp-DCh]
  int v50; // [esp+78h] [ebp-D8h]
  _BYTE v51[28]; // [esp+88h] [ebp-C8h] BYREF
  _BYTE v52[28]; // [esp+A4h] [ebp-ACh] BYREF
  int v53; // [esp+14Ch] [ebp-4h]

  v43 = this;
  v37 = &v28;
  std::string::string(&v28, &unk_1031C512);
  v38 = &v21;
  v1 = 0;
  v53 = 0;
  std::string::string(&v21, "Zipfile");
  LOBYTE(v53) = 1;
  Engine::Instance(v21);
  v53 = -1;
  if ( (unsigned __int8)sub_102BDB40(v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34) )
  {
    v34 = "\\Flyweights.opt";
    v37 = &v27;
    std::string::string(&v27, &unk_1031C513);
    v38 = &v20;
    v53 = 2;
    std::string::string(&v20, "SearchPath");
    LOBYTE(v53) = 3;
    Engine::Instance(v46);
    v53 = -1;
    v2 = sub_102BDF50(v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33);
    v53 = 4;
    std::operator+<char>(v51, v2, v34);
    LOBYTE(v53) = 6;
    std::string::~string(v46);
    sub_1000C09A(v35, v36);
    v37 = &v28;
    LOBYTE(v53) = 7;
    std::string::string(&v28, v51);
    if ( !(unsigned __int8)sub_100174CC(v28, v29, v30, v31, v32, v33, (int)v34) )
    {
      LOBYTE(v53) = 6;
      sub_10003D0A(v35, v36);
      v53 = -1;
      std::string::~string(v51);
      return 0;
    }
    v40 = 0;
    v41 = 0;
    v42 = 0;
    LOBYTE(v53) = 8;
    sub_10013DEF((int)v39);
    for ( i = 0; v40 && i < (v41 - v40) / 28; ++i )
    {
      v37 = &v28;
      std::string::string(&v28, (void *)(v1 + v40));
      v5 = sub_100114FF(v28, v29, v30, v31, v32, v33, (int)v34);
      v6 = v40;
      v37 = (int *)v5;
      if ( !v40 || i >= (v41 - v40) / 28 )
      {
        _invalid_parameter_noinfo();
        v6 = v40;
      }
      v38 = &v28;
      std::string::string(&v28, (void *)(v1 + v6));
      v7 = sub_10001EF1(v28, v29, v30, v31, v32, v33, (int)v34);
      v8 = v40;
      v38 = (int *)v7;
      if ( !v40 || (v9 = v41, i >= (v41 - v40) / 28) )
      {
        _invalid_parameter_noinfo();
        v9 = v41;
        v8 = v40;
      }
      v44 = v8 + v1;
      if ( !v8 || i >= (v9 - v8) / 28 )
      {
        _invalid_parameter_noinfo();
        v8 = v40;
      }
      v10 = v8 + v1;
      v34 = (const char *)std::string::npos;
      v11 = std::string::size(v44);
      std::string::substr(v10, v52, v11 - 4, v34);
      LOBYTE(v53) = 9;
      if ( !(unsigned __int8)std::operator!=<char>(v52, ".xml") )
      {
        v12 = v40;
        if ( !v40 || i >= (v41 - v40) / 28 )
        {
          _invalid_parameter_noinfo();
          v12 = v40;
        }
        sub_102C7220(v47, (void *)(v12 + v1));
        LOBYTE(v53) = 10;
        v13 = sub_102C71E0(v45, v47);
        LOBYTE(v53) = 11;
        std::string::operator=(v47, v13);
        LOBYTE(v53) = 10;
        std::string::~string(v45);
        GameClient::FlyweightManager::LoadFlyweightFromMemory((int)v37, (int)v38, (int)v47);
        LOBYTE(v53) = 9;
        std::string::~string(v47);
      }
      LOBYTE(v53) = 8;
      std::string::~string(v52);
      v1 += 28;
    }
    sub_10002027(v35, v36);
    LOBYTE(v53) = 7;
    sub_10003FE9();
    LOBYTE(v53) = 6;
    sub_10003D0A(v35, v36);
    v53 = -1;
    std::string::~string(v51);
  }
  else
  {
    v48 = 0;
    v49 = 0;
    v50 = 0;
    v53 = 12;
    sub_102C8190("..//Flyweights", v47, 4, ".xml", 1);
    for ( j = 0; ; ++j )
    {
      v15 = (char *)v48;
      v16 = v49;
      if ( !v48 || j >= (v49 - (_BYTE *)v48) / 28 )
        break;
      GameClient::FlyweightManager::LoadFlyweightFromFile((char *)v48 + v1);
      v1 += 28;
    }
    v53 = -1;
    if ( v48 )
    {
      if ( v48 != v49 )
      {
        do
        {
          std::string::~string(v15);
          v15 += 28;
        }
        while ( v15 != v16 );
        v15 = (char *)v48;
      }
      operator delete(v15);
    }
    v48 = 0;
    v49 = 0;
    v50 = 0;
  }
  v17 = (int *)**((_DWORD **)v43 + 2);
  v18 = (int **)((char *)v43 + 4);
  while ( v17 != v18[1] )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v17[3] + 4))(v17[3]);
    if ( v17 == v18[1] )
      _invalid_parameter_noinfo();
    v17 = (int *)*v17;
  }
  return 1;
}
