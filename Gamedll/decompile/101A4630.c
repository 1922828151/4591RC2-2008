/*
 * func-name: ?OnDestroy@Establishment@GameClient@@UAEXXZ_0
 * func-address: 0x101a4630
 * callers: 0x100015dc
 * callees: 0x100084f4, 0x1000aff6, 0x102c9d50
 */

void __thiscall GameClient::Establishment::OnDestroy(GameClient::Establishment *this)
{
  unsigned int i; // edi
  unsigned int v3; // ecx
  unsigned int v4; // ebx
  int v5; // ecx
  GameClient::FlyweightManager *v6; // eax
  char *v7; // ebx
  void (__cdecl *v8)(); // ebp
  char *v9; // edi
  int v10; // eax
  char *v11; // ebp
  unsigned int j; // edi
  unsigned int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  void (__thiscall ***v16)(_DWORD, int); // ecx
  char *v17; // ebx
  char *v18; // edi
  int v19; // eax
  char *v20; // ebp
  NxPhysics *v21; // eax
  unsigned int k; // edi
  unsigned int v23; // ecx
  char *v24; // ebx
  char *v25; // edi
  int v26; // eax
  char *v27; // ebp
  unsigned int v28; // [esp-8h] [ebp-18h]
  int v29; // [esp+0h] [ebp-10h]
  struct NxActor **v30; // [esp+0h] [ebp-10h]
  int v31; // [esp+4h] [ebp-Ch]
  int v32; // [esp+8h] [ebp-8h]
  int v33; // [esp+Ch] [ebp-4h]

  for ( i = 0; ; ++i )
  {
    v3 = *((_DWORD *)this + 65);
    if ( !v3 || i >= (int)(*((_DWORD *)this + 66) - v3) >> 2 )
      break;
    v4 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 65) + 4 * i) + 32);
    v5 = *((_DWORD *)this + 65);
    if ( !v5 || i >= (*((_DWORD *)this + 66) - v5) >> 2 )
      _invalid_parameter_noinfo();
    v28 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 65) + 4 * i) + 20);
    v6 = GameClient::FlyweightManager::Instance();
    GameClient::FlyweightManager::DeleteInstance(v6, v28, v4);
  }
  v7 = (char *)*((_DWORD *)this + 66);
  v8 = _invalid_parameter_noinfo;
  if ( v3 > (unsigned int)v7 )
    _invalid_parameter_noinfo();
  v9 = (char *)*((_DWORD *)this + 65);
  if ( (unsigned int)v9 > *((_DWORD *)this + 66) )
    _invalid_parameter_noinfo();
  if ( v9 != v7 )
  {
    v10 = (*((_DWORD *)this + 66) - (int)v7) >> 2;
    v11 = &v9[4 * v10];
    if ( v10 > 0 )
      memmove_s(v9, 4 * v10, v7, 4 * v10);
    *((_DWORD *)this + 66) = v11;
    v8 = _invalid_parameter_noinfo;
  }
  for ( j = 0; ; ++j )
  {
    v13 = *((_DWORD *)this + 49);
    if ( !v13 || j >= (int)(*((_DWORD *)this + 50) - v13) >> 2 )
      break;
    v14 = *(_DWORD *)(*((_DWORD *)this + 49) + 4 * j);
    (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 8))(v14);
    v15 = *((_DWORD *)this + 49);
    if ( !v15 || j >= (*((_DWORD *)this + 50) - v15) >> 2 )
      v8();
    v16 = *(void (__thiscall ****)(_DWORD, int))(*((_DWORD *)this + 49) + 4 * j);
    if ( v16 )
      (**v16)(v16, 1);
  }
  v17 = (char *)*((_DWORD *)this + 50);
  if ( v13 > (unsigned int)v17 )
    v8();
  v18 = (char *)*((_DWORD *)this + 49);
  if ( (unsigned int)v18 > *((_DWORD *)this + 50) )
    v8();
  if ( v18 != v17 )
  {
    v19 = (*((_DWORD *)this + 50) - (int)v17) >> 2;
    v20 = &v18[4 * v19];
    if ( v19 > 0 )
      memmove_s(v18, 4 * v19, v17, 4 * v19);
    *((_DWORD *)this + 50) = v20;
    v8 = _invalid_parameter_noinfo;
  }
  if ( *((_DWORD *)this + 80) )
  {
    v21 = (NxPhysics *)NxPhysics::Instance((char *)this + 320, v29, v31, v32, v33);
    NxPhysics::DestroyTriggerActor(v21, v30);
    *((_DWORD *)this + 80) = 0;
  }
  for ( k = 0; ; ++k )
  {
    v23 = *((_DWORD *)this + 95);
    if ( !v23 || k >= (int)(*((_DWORD *)this + 96) - v23) >> 2 )
      break;
    operator delete(*(void **)(*((_DWORD *)this + 95) + 4 * k));
  }
  v24 = (char *)*((_DWORD *)this + 96);
  if ( v23 > (unsigned int)v24 )
    v8();
  v25 = (char *)*((_DWORD *)this + 95);
  if ( (unsigned int)v25 > *((_DWORD *)this + 96) )
    v8();
  if ( v25 != v24 )
  {
    v26 = (*((_DWORD *)this + 96) - (int)v24) >> 2;
    v27 = &v25[4 * v26];
    if ( v26 > 0 )
      memmove_s(v25, 4 * v26, v24, 4 * v26);
    *((_DWORD *)this + 96) = v27;
  }
  GameClient::WorldObject::OnDestroy(this);
}
