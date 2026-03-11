/*
 * func-name: sub_10210A70
 * func-address: 0x10210a70
 * callers: 0x10007090
 * callees: 0x10003d82, 0x100077ed, 0x1000dbd9, 0x1000e674, 0x1000eb56, 0x1001055a, 0x10013647, 0x10015eab, 0x10016a4f, 0x10019092, 0x102c9d62, 0x102c9d98, 0x102c9ea8, 0x102ca13e
 */

int __stdcall sub_10210A70(Event *a1)
{
  int v1; // ebp
  struct BinStream *Stream; // esi
  int v3; // eax
  size_t v4; // edi
  int v5; // eax
  CDlgMgr *v6; // eax
  struct CTYDialog *Dialog; // eax
  CRadarMapUI *v8; // eax
  struct GameClient::LocalUser *UserByIndex; // eax
  int v10; // esi
  int v12; // [esp+14h] [ebp-74h]
  int v13; // [esp+14h] [ebp-74h]
  int v14; // [esp+18h] [ebp-70h]
  int v15; // [esp+18h] [ebp-70h]
  Outpop::Utility::Ref_Object *v16; // [esp+24h] [ebp-64h] BYREF
  void *v17; // [esp+28h] [ebp-60h]
  _BYTE v18[4]; // [esp+2Ch] [ebp-5Ch] BYREF
  int v19; // [esp+30h] [ebp-58h]
  _BYTE v20[68]; // [esp+34h] [ebp-54h] BYREF
  int v21; // [esp+84h] [ebp-4h]

  LogPrintf("Battle initialize...");
  v17 = operator new(0x30u);
  v21 = 0;
  if ( v17 )
    v1 = sub_10019092();
  else
    v1 = 0;
  sub_1000DBD9(v12, v14);
  v21 = 1;
  Stream = Event::GetStream(a1);
  v3 = *((_DWORD *)Stream + 3);
  if ( (unsigned int)(v3 + 4) <= *((_DWORD *)Stream + 2) )
  {
    v19 = *(_DWORD *)(v3 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) += 4;
  }
  v4 = sub_10003D82();
  v5 = *((_DWORD *)Stream + 3);
  if ( v5 + v4 <= *((_DWORD *)Stream + 2) )
  {
    memcpy(byte_103B6158, (const void *)(v5 + *((_DWORD *)Stream + 1)), v4);
    byte_103B6158[v4] = 0;
    std::string::operator=(v20, byte_103B6158);
    *((_DWORD *)Stream + 3) += v4;
  }
  if ( (*(unsigned __int8 (__thiscall **)(int, _BYTE *))(*(_DWORD *)v1 + 4))(v1, v18) )
  {
    *(_DWORD *)(dword_103B665C + 4) = v1;
    v6 = (CDlgMgr *)CDlgMgr::Instance();
    Dialog = CDlgMgr::GetDialog(v6);
    v8 = (CRadarMapUI *)_RTDynamicCast(
                          Dialog,
                          0,
                          &CTYDialog `RTTI Type Descriptor',
                          &CRadarMapUI `RTTI Type Descriptor',
                          0);
    if ( v8 )
      CRadarMapUI::ChangeMap(v8, v19);
    UserByIndex = GameClient::LocalUserManager::GetUserByIndex(GameClient::LocalUserManager::s_pInstance, 0);
    if ( UserByIndex )
    {
      v10 = sub_10016A4F(*((_DWORD *)UserByIndex + 19));
      if ( v10 )
      {
        sub_100077ED((int)&v16, 9, 234, COERCE_INT(0.0), 1, 256);
        LOBYTE(v21) = 2;
        sub_10015EAB(v10 + 4);
        j_nullsub_44((int)&v16);
        LogPrintf("Battle initialize success.");
        LOBYTE(v21) = 1;
        if ( v16 )
          Outpop::Utility::Ref_Object::release(v16);
      }
    }
  }
  else
  {
    LogPrintf("Battle initialize failed.");
  }
  v21 = -1;
  return sub_1000E674(v13, v15);
}
