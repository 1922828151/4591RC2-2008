/*
 * func-name: ?CacheActorGroupTMP@Precacher@@SAPAVActorGroup@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
 * func-address: 0x1010b430
 * callers: 0x1010bc60, 0x1010cb00
 * callees: 0x100cfe70, 0x100d0540, 0x1010ae70, 0x1010fd40, 0x10115250, 0x1017a2d0, 0x1017a310, 0x1017a610, 0x101a2500, 0x101a2534
 */

struct ActorGroup *__cdecl Precacher::CacheActorGroupTMP(char a1)
{
  int v1; // eax
  int v2; // eax
  int v3; // esi
  void *v4; // edi
  void *v5; // ebp
  ActorGroup *v6; // eax
  struct ActorGroup *v7; // esi
  char v9; // [esp-20h] [ebp-7Ch] BYREF
  int v10; // [esp-1Ch] [ebp-78h]
  int v11; // [esp-18h] [ebp-74h]
  int v12; // [esp-14h] [ebp-70h]
  int v13; // [esp-10h] [ebp-6Ch]
  int v14; // [esp-Ch] [ebp-68h]
  int v15; // [esp-8h] [ebp-64h]
  struct World *v16; // [esp-4h] [ebp-60h]
  int v17; // [esp+10h] [ebp-4Ch] BYREF
  void *v18; // [esp+14h] [ebp-48h]
  _BYTE v19[28]; // [esp+18h] [ebp-44h] BYREF
  _BYTE v20[28]; // [esp+34h] [ebp-28h] BYREF
  int v21; // [esp+58h] [ebp-4h]

  v21 = 0;
  std::string::string(v19);
  LOBYTE(v21) = 1;
  v1 = sub_1017A2D0(v20, &a1);
  LOBYTE(v21) = 2;
  std::string::operator=(v19, v1);
  LOBYTE(v21) = 1;
  std::string::~string(v20);
  v2 = sub_1017A310(v20, v19);
  LOBYTE(v21) = 3;
  std::string::operator=(v19, v2);
  LOBYTE(v21) = 1;
  std::string::~string(v20);
  sub_1017A610(v19);
  sub_1010FD40(&v17, v19);
  v3 = v17;
  v4 = dword_1124160C;
  if ( !v17 || (_UNKNOWN *)v17 != &unk_11241608 )
    invalid_parameter_noinfo();
  v5 = v18;
  if ( v18 != v4 )
  {
    if ( !v3 )
      invalid_parameter_noinfo();
    if ( v5 == *(void **)(v3 + 4) )
      invalid_parameter_noinfo();
    v7 = (struct ActorGroup *)*((_DWORD *)v5 + 9);
    goto LABEL_18;
  }
  v6 = (ActorGroup *)operator new(0x6Cu);
  v17 = (int)v6;
  LOBYTE(v21) = 4;
  if ( v6 )
    v7 = ActorGroup::ActorGroup(v6);
  else
    v7 = 0;
  v16 = 0;
  v17 = (int)&v9;
  LOBYTE(v21) = 1;
  std::string::string(&v9, &a1);
  if ( ActorGroup::Load(v7, v9, v10, v11, v12, v13, v14, v15, v16) )
  {
    *(_DWORD *)sub_10115250(v19) = v7;
LABEL_18:
    LOBYTE(v21) = 0;
    std::string::~string(v19);
    v21 = -1;
    std::string::~string(&a1);
    return v7;
  }
  if ( v7 )
  {
    ActorGroup::~ActorGroup((void **)v7);
    operator delete(v7);
  }
  LOBYTE(v21) = 0;
  std::string::~string(v19);
  v21 = -1;
  std::string::~string(&a1);
  return 0;
}
