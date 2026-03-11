/*
 * func-name: ?OnDestroy@Robot@GameClient@@UAEXXZ_0
 * func-address: 0x10179010
 * callers: 0x10019e48
 * callees: 0x10006947, 0x10006a19, 0x1000762b, 0x1000a506, 0x1000adc6, 0x1000dafd, 0x10011d3d, 0x10016a4f, 0x1001876e, 0x102c9ea8
 */

void __usercall GameClient::Robot::OnDestroy(GameClient::Robot *this@<ecx>, int a2@<ebx>, int a3@<ebp>, int a4@<edi>)
{
  CDlgMgr *v5; // eax
  struct CTYDialog *Dialog; // eax
  CStatusUI *v7; // eax
  GameClient::EstabManager *v8; // eax
  struct GameClient::Establishment *Establishment; // eax
  GameClient::FuncManager *v10; // eax
  struct GameClient::Function *Function; // edi
  int v12; // eax
  NxPhysics *v13; // eax
  NxPhysics *v14; // eax
  NxPhysics *v15; // eax
  int v16; // ecx
  int v17; // ecx
  void (__thiscall ***v18)(_DWORD, int); // ecx
  unsigned int v19; // [esp-10h] [ebp-14h]
  int v20; // [esp-Ch] [ebp-10h]
  struct NxActor **v21; // [esp-Ch] [ebp-10h]
  struct NxActor **v22; // [esp-Ch] [ebp-10h]
  struct NxActor **v23; // [esp-Ch] [ebp-10h]
  int v24; // [esp-8h] [ebp-Ch]
  unsigned int v25; // [esp-4h] [ebp-8h]
  int v26; // [esp-4h] [ebp-8h]
  int v27; // [esp+0h] [ebp-4h]

  if ( GameClient::WorldObject::IsLocal(this) )
  {
    v5 = (CDlgMgr *)CDlgMgr::Instance(1);
    Dialog = CDlgMgr::GetDialog(v5);
    v7 = (CStatusUI *)_RTDynamicCast(Dialog, 0, &CTYDialog `RTTI Type Descriptor', &CStatusUI `RTTI Type Descriptor', 0);
    if ( v7 )
      CStatusUI::OnRobotDestroy(v7);
  }
  if ( *((_DWORD *)this + 70) != -1 )
  {
    v25 = *((_DWORD *)this + 70);
    v8 = GameClient::EstabManager::Instance();
    Establishment = GameClient::EstabManager::GetEstablishment(v8, v25);
    if ( Establishment )
      (*(void (__thiscall **)(struct GameClient::Establishment *, _DWORD, GameClient::Robot *))(*(_DWORD *)Establishment
                                                                                              + 132))(
        Establishment,
        *((_DWORD *)this + 71),
        this);
  }
  v26 = a2;
  v24 = a3;
  v20 = a4;
  GameClient::Robot::ClearRobot(this);
  GameClient::Robot::ClearEquip(this);
  if ( *((_DWORD *)this + 44) )
  {
    if ( *((_DWORD *)this + 226) != -1 )
    {
      v19 = *((_DWORD *)this + 226);
      v10 = GameClient::FuncManager::Instance();
      Function = GameClient::FuncManager::GetFunction(v10, v19);
      if ( Function )
      {
        v12 = sub_10016A4F(*((_DWORD *)this + 226));
        if ( v12 )
          (*(void (__thiscall **)(struct GameClient::Function *, int))(*(_DWORD *)Function + 44))(Function, v12);
      }
    }
    v13 = (NxPhysics *)NxPhysics::Instance((char *)this + 176, v20, a3, a2, v27);
    NxPhysics::DestroyControllerActor(v13, v21);
    *((_DWORD *)this + 44) = 0;
  }
  if ( *((_DWORD *)this + 45) )
  {
    v14 = (NxPhysics *)NxPhysics::Instance((char *)this + 180, v20, v24, v26, v27);
    NxPhysics::DestroyBoxActor(v14, v22);
    *((_DWORD *)this + 45) = 0;
  }
  if ( *((_DWORD *)this + 46) )
  {
    v15 = (NxPhysics *)NxPhysics::Instance((char *)this + 184, v20, v24, v26, v27);
    NxPhysics::DestroyBoxActor(v15, v23);
    *((_DWORD *)this + 46) = 0;
  }
  v16 = *((_DWORD *)this + 47);
  if ( v16 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v16 + 12))(v16, 1);
    *((_DWORD *)this + 47) = 0;
  }
  v17 = *((_DWORD *)this + 43);
  if ( v17 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v17 + 80))(v17, 1);
    *((_DWORD *)this + 43) = 0;
  }
  v18 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 372);
  if ( v18 )
  {
    (**v18)(v18, 1);
    *((_DWORD *)this + 372) = 0;
  }
  GameClient::WorldObject::OnDestroy(this);
}
