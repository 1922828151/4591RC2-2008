/*
 * func-name: ?CacheActorGroup@Precacher@@SAPAVActorGroup@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVWorld@@H@Z
 * func-address: 0x1010bc60
 * callers: none
 * callees: 0x100cfe70, 0x100d0540, 0x100f5b70, 0x1010ae70, 0x1010b430, 0x1010ec70, 0x101a2500, 0x101a2534
 */

void **__cdecl Precacher::CacheActorGroup(
        char a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        struct World *a8,
        struct World *a9)
{
  ActorGroup *v9; // eax
  void **v10; // ebp
  _DWORD *v11; // edi
  _DWORD *v12; // esi
  char v14; // [esp-20h] [ebp-38h] BYREF
  int v15; // [esp-1Ch] [ebp-34h]
  int v16; // [esp-18h] [ebp-30h]
  int v17; // [esp-14h] [ebp-2Ch]
  int v18; // [esp-10h] [ebp-28h]
  int v19; // [esp-Ch] [ebp-24h]
  int v20; // [esp-8h] [ebp-20h]
  struct World *v21; // [esp-4h] [ebp-1Ch]
  int v22; // [esp+14h] [ebp-4h]

  v21 = a9;
  a9 = (struct World *)&v14;
  v22 = 0;
  std::string::string(&v14, &a1);
  Precacher::CacheActorGroupTMP(v14);
  v9 = (ActorGroup *)operator new(0x6Cu);
  a9 = v9;
  LOBYTE(v22) = 1;
  if ( v9 )
    v10 = (void **)ActorGroup::ActorGroup(v9);
  else
    v10 = 0;
  v21 = a8;
  a8 = (struct World *)&v14;
  LOBYTE(v22) = 0;
  a9 = (struct World *)v10;
  std::string::string(&v14, &a1);
  if ( ActorGroup::Load((struct ActorGroup *)v10, v14, v15, v16, v17, v18, v19, v20, v21) )
  {
    v11 = (_DWORD *)(dword_11241500 + 4);
    v12 = sub_100F5B70(dword_11241500, *(_DWORD *)(dword_11241500 + 4), &a9);
    sub_1010EC70(1);
    *v11 = v12;
    *(_DWORD *)v12[1] = v12;
    v22 = -1;
    std::string::~string(&a1);
    return v10;
  }
  else
  {
    if ( v10 )
    {
      ActorGroup::~ActorGroup(v10);
      operator delete(v10);
    }
    v22 = -1;
    std::string::~string(&a1);
    return 0;
  }
}
