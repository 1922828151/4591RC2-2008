/*
 * func-name: ?LoadFromFile@ActorGroup@@QAE_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVWorld@@@Z
 * func-address: 0x1010a6c0
 * callers: 0x1010ae70
 * callees: 0x10012a30, 0x10050740, 0x1007ec70, 0x1009ff60, 0x100a01c0, 0x100f5b70, 0x1010ec70, 0x1011acf0, 0x1013a940, 0x1013a9b0, 0x1013df40, 0x1017a2d0, 0x1017a310, 0x1017a610, 0x101a2500
 */

char __thiscall ActorGroup::LoadFromFile(
        void *this,
        char a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        struct World *a9)
{
  char v9; // bl
  unsigned int i; // ebx
  struct Actor **v11; // ecx
  unsigned int v12; // eax
  World *v13; // esi
  void (__cdecl *v14)(); // edi
  int v15; // ebp
  char *v16; // ecx
  _BYTE *v17; // eax
  _BYTE *v18; // edx
  char *v19; // esi
  _BYTE *v20; // ecx
  _BYTE *v21; // edx
  void (__cdecl *v22)(); // edi
  _DWORD *v23; // esi
  _DWORD *v24; // eax
  _DWORD *v25; // ecx
  char *v26; // eax
  int v27; // esi
  int v28; // ecx
  char *v29; // ecx
  struct Actor **v30; // esi
  FXManager *v31; // eax
  _BYTE *v32; // eax
  char *v33; // esi
  char *v34; // ebx
  int v35; // eax
  char *v36; // ebp
  int v37; // eax
  int v38; // eax
  int v39; // esi
  int v40; // edx
  _DWORD *v41; // ebx
  _DWORD *v42; // esi
  char v44; // [esp-20h] [ebp-F64h] BYREF
  int v45; // [esp-1Ch] [ebp-F60h]
  int v46; // [esp-18h] [ebp-F5Ch]
  int v47; // [esp-14h] [ebp-F58h]
  int v48; // [esp-10h] [ebp-F54h]
  int v49; // [esp-Ch] [ebp-F50h]
  struct World *v50; // [esp-8h] [ebp-F4Ch]
  struct World *v51; // [esp-4h] [ebp-F48h]
  char v52; // [esp+13h] [ebp-F31h]
  int v53; // [esp+14h] [ebp-F30h] BYREF
  void *v54; // [esp+1Ch] [ebp-F28h]
  int v55; // [esp+20h] [ebp-F24h]
  int v56; // [esp+24h] [ebp-F20h]
  _BYTE v57[28]; // [esp+28h] [ebp-F1Ch] BYREF
  char *v58; // [esp+44h] [ebp-F00h]
  _BYTE v59[28]; // [esp+48h] [ebp-EFCh] BYREF
  _BYTE v60[80]; // [esp+64h] [ebp-EE0h] BYREF
  char v61; // [esp+B4h] [ebp-E90h]
  void *Destination; // [esp+CFCh] [ebp-248h]
  void *Source; // [esp+D00h] [ebp-244h]
  int v64; // [esp+F40h] [ebp-4h]

  v53 = (int)this;
  v64 = 0;
  v9 = 0;
  v52 = *((_BYTE *)Editor::Instance() + 2076);
  *((_BYTE *)Editor::Instance() + 2076) = 1;
  World::World((World *)v60);
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v51 = (struct World *)v60;
  v58 = &v44;
  LOBYTE(v64) = 2;
  v61 = 1;
  std::string::string(&v44, &a2);
  if ( (unsigned __int8)Serializer::LoadWorld(v44, v45, v46, v47, v48, v49, v50, v51) )
  {
    for ( i = 0; ; ++i )
    {
      v11 = (struct Actor **)Destination;
      if ( !Destination )
        break;
      v12 = ((_BYTE *)Source - (_BYTE *)Destination) >> 2;
      if ( i >= v12 || (int)i >= 64 )
        break;
      v13 = a9;
      if ( a9 )
      {
        v14 = invalid_parameter_noinfo;
        if ( i >= v12 )
        {
          invalid_parameter_noinfo();
          v11 = (struct Actor **)Destination;
        }
        v15 = 4 * i;
        World::AddActor(v13, v11[i]);
      }
      else
      {
        if ( i >= v12 )
        {
          invalid_parameter_noinfo();
          v11 = (struct Actor **)Destination;
        }
        v15 = 4 * i;
        (*(void (__thiscall **)(struct Actor *, _DWORD))(*(_DWORD *)v11[i] + 28))(v11[i], 0);
        v14 = invalid_parameter_noinfo;
      }
      v16 = (char *)Destination;
      if ( !Destination || i >= ((_BYTE *)Source - (_BYTE *)Destination) >> 2 )
      {
        v14();
        v16 = (char *)Destination;
      }
      *(_BYTE *)(*(_DWORD *)&v16[v15] + 440) = 0;
      v17 = Destination;
      if ( !Destination || (v18 = Source, i >= ((_BYTE *)Source - (_BYTE *)Destination) >> 2) )
      {
        v14();
        v18 = Source;
        v17 = Destination;
      }
      v19 = &v17[v15];
      if ( !v17 || i >= (v18 - v17) >> 2 )
      {
        v14();
        v17 = Destination;
      }
      qmemcpy((void *)(*(_DWORD *)&v17[v15] + 944), (const void *)(*(_DWORD *)v19 + 868), 0x40u);
      v20 = Destination;
      if ( Destination && (v21 = Source, i < ((_BYTE *)Source - (_BYTE *)Destination) >> 2) )
      {
        v22 = invalid_parameter_noinfo;
      }
      else
      {
        v22 = invalid_parameter_noinfo;
        invalid_parameter_noinfo();
        v21 = Source;
        v20 = Destination;
      }
      v23 = &v20[v15];
      if ( !v20 || i >= (v21 - v20) >> 2 )
      {
        v22();
        v20 = Destination;
      }
      v24 = (_DWORD *)(*v23 + 856);
      v25 = (_DWORD *)(*(_DWORD *)&v20[v15] + 992);
      *v25 = *v24;
      v25[1] = v24[1];
      v25[2] = v24[2];
      v26 = (char *)Destination;
      if ( !Destination || i >= ((_BYTE *)Source - (_BYTE *)Destination) >> 2 )
      {
        v22();
        v26 = (char *)Destination;
      }
      v27 = v53;
      std::vector<Actor *>::push_back((_DWORD *)v53, (int *)&v26[v15]);
      v28 = *(_DWORD *)(v27 + 4);
      if ( !v28 || i >= (*(_DWORD *)(v27 + 8) - v28) >> 2 )
        v22();
      v29 = (char *)Destination;
      v30 = (struct Actor **)(v15 + *(_DWORD *)(v27 + 4));
      if ( !Destination || i >= ((_BYTE *)Source - (_BYTE *)Destination) >> 2 )
      {
        v22();
        v29 = (char *)Destination;
      }
      Actor::SetNULLOnDeath(*(Actor **)&v29[v15], 0, v30);
    }
    v51 = a9;
    v50 = (struct World *)v60;
    v31 = FXManager::Instance();
    FXManager::ChangeSystemsWorld(v31, v50, v51);
    v32 = Source;
    v33 = (char *)Destination;
    v34 = (char *)Source;
    if ( Destination > Source )
    {
      invalid_parameter_noinfo();
      v32 = Source;
      v33 = (char *)Destination;
      if ( Destination > Source )
      {
        invalid_parameter_noinfo();
        v32 = Source;
      }
    }
    if ( v33 != v34 )
    {
      v35 = (v32 - v34) >> 2;
      v36 = &v33[4 * v35];
      if ( v35 > 0 )
        memmove_s(v33, 4 * v35, v34, 4 * v35);
      Source = v36;
    }
    std::string::string(v57);
    LOBYTE(v64) = 3;
    v37 = sub_1017A2D0(v59, &a2);
    LOBYTE(v64) = 4;
    std::string::operator=(v57, v37);
    LOBYTE(v64) = 3;
    std::string::~string(v59);
    v38 = sub_1017A310(v59, v57);
    LOBYTE(v64) = 5;
    std::string::operator=(v57, v38);
    LOBYTE(v64) = 3;
    std::string::~string(v59);
    sub_1017A610(v57);
    v39 = v53;
    std::string::operator=(v53 + 16, v57);
    v40 = *(_DWORD *)(dword_1124150C + 4);
    v41 = (_DWORD *)(dword_1124150C + 4);
    v53 = v39;
    v42 = sub_100F5B70(dword_1124150C, v40, &v53);
    sub_1010EC70(1);
    *v41 = v42;
    *(_DWORD *)v42[1] = v42;
    v9 = 1;
    LOBYTE(v64) = 2;
    std::string::~string(v57);
  }
  v61 = 0;
  *((_BYTE *)Editor::Instance() + 2076) = v52;
  if ( v54 )
    operator delete(v54);
  v54 = 0;
  v55 = 0;
  v56 = 0;
  LOBYTE(v64) = 0;
  World::~World((World *)v60);
  v64 = -1;
  std::string::~string(&a2);
  return v9;
}
