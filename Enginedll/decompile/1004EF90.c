/*
 * func-name: ?ImportFromFile@Actor@@SAPAV1@AAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVWorld@@@Z
 * func-address: 0x1004ef90
 * callers: 0x100542a0
 * callees: 0x1007ec70, 0x1009ff60, 0x100a01c0, 0x1011acf0, 0x1013a940, 0x1013a9b0, 0x1013df40, 0x101a2500
 */

char *__cdecl Actor::ImportFromFile(int a1, struct World *a2)
{
  unsigned int i; // esi
  _DWORD *v3; // ecx
  _BYTE *v4; // eax
  unsigned int v5; // edx
  _DWORD *v6; // ecx
  FXManager *v7; // eax
  _BYTE *v8; // eax
  char *v9; // esi
  char *v10; // edi
  int v11; // eax
  char *v12; // ebp
  char v14; // [esp-20h] [ebp-F28h] BYREF
  int v15; // [esp-1Ch] [ebp-F24h]
  int v16; // [esp-18h] [ebp-F20h]
  int v17; // [esp-14h] [ebp-F1Ch]
  int v18; // [esp-10h] [ebp-F18h]
  int v19; // [esp-Ch] [ebp-F14h]
  struct World *v20; // [esp-8h] [ebp-F10h]
  struct World *v21; // [esp-4h] [ebp-F0Ch]
  char v22; // [esp+13h] [ebp-EF5h]
  char *v23; // [esp+14h] [ebp-EF4h]
  void *v24; // [esp+1Ch] [ebp-EECh]
  int v25; // [esp+20h] [ebp-EE8h]
  int v26; // [esp+24h] [ebp-EE4h]
  _BYTE v27[3224]; // [esp+28h] [ebp-EE0h] BYREF
  void *Destination; // [esp+CC0h] [ebp-248h]
  void *Source; // [esp+CC4h] [ebp-244h]
  char v30; // [esp+CFCh] [ebp-20Ch]
  int v31; // [esp+F04h] [ebp-4h]

  v22 = *((_BYTE *)Editor::Instance() + 2076);
  *((_BYTE *)Editor::Instance() + 2076) = 1;
  World::World((World *)v27);
  v31 = 1;
  v30 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v21 = (struct World *)v27;
  v23 = &v14;
  std::string::string(&v14, a1);
  Serializer::LoadWorld(v14, v15, v16, v17, v18, v19, v20, v21);
  v23 = 0;
  for ( i = 0; ; ++i )
  {
    v3 = Destination;
    if ( !Destination )
      break;
    v4 = Source;
    v5 = ((_BYTE *)Source - (_BYTE *)Destination) >> 2;
    if ( i >= v5 )
      break;
    if ( !v23 )
    {
      if ( i >= v5 )
      {
        invalid_parameter_noinfo();
        v4 = Source;
        v3 = Destination;
      }
      v23 = (char *)v3[i];
    }
    if ( a2 )
    {
      if ( !v3 || i >= (v4 - (_BYTE *)v3) >> 2 )
      {
        invalid_parameter_noinfo();
        v3 = Destination;
      }
      World::AddActor(a2, (struct Actor *)v3[i]);
    }
    else
    {
      if ( !v3 || i >= (v4 - (_BYTE *)v3) >> 2 )
      {
        invalid_parameter_noinfo();
        v3 = Destination;
      }
      (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)v3[i] + 28))(v3[i], 0);
    }
    v6 = Destination;
    if ( !Destination || i >= ((_BYTE *)Source - (_BYTE *)Destination) >> 2 )
    {
      invalid_parameter_noinfo();
      v6 = Destination;
    }
    *(_BYTE *)(v6[i] + 440) = 0;
  }
  v21 = a2;
  v20 = (struct World *)v27;
  v7 = FXManager::Instance();
  FXManager::ChangeSystemsWorld(v7, v20, v21);
  v8 = Source;
  v9 = (char *)Destination;
  v10 = (char *)Source;
  if ( Destination > Source )
  {
    invalid_parameter_noinfo();
    v8 = Source;
    v9 = (char *)Destination;
    if ( Destination > Source )
    {
      invalid_parameter_noinfo();
      v8 = Source;
    }
  }
  if ( v9 != v10 )
  {
    v11 = (v8 - v10) >> 2;
    v12 = &v9[4 * v11];
    if ( v11 > 0 )
      memmove_s(v9, 4 * v11, v10, 4 * v11);
    Source = v12;
  }
  *((_BYTE *)Editor::Instance() + 2076) = v22;
  if ( v24 )
    operator delete(v24);
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v31 = -1;
  World::~World((World *)v27);
  return v23;
}
