/*
 * func-name: ?SetArmor@CRobotRoofUI@@AAEXKPBVFProductInfo@GameClient@@@Z_0
 * func-address: 0x10284ef0
 * callers: 0x10007806
 * callees: 0x10001e60, 0x1000aff6, 0x100103c5, 0x100104e2, 0x10012c29, 0x100151d6, 0x102c8d6c, 0x102c9ea8
 */

void __thiscall CRobotRoofUI::SetArmor(CRobotRoofUI *this, unsigned int a2, const struct GameClient::FProductInfo *a3)
{
  GameClient::FlyweightManager *v4; // eax
  struct GameClient::FSystemPart *Flyweight; // edi
  GameClient::FlyweightManager *v6; // eax
  struct GameClient::FSystemPart *v7; // eax
  struct CREControl *Control; // eax
  int v9; // edi
  const char *v10; // eax
  const wchar_t *v11; // eax
  int v12; // eax
  CREStatic *v13; // ecx
  _DWORD v14[4]; // [esp-24h] [ebp-30h] BYREF
  int v15; // [esp-14h] [ebp-20h]
  int v16; // [esp-10h] [ebp-1Ch]
  void ***v17; // [esp-Ch] [ebp-18h]
  int v18; // [esp-8h] [ebp-14h]
  const wchar_t *v19; // [esp-4h] [ebp-10h]
  _DWORD *retaddr; // [esp+Ch] [ebp+0h]

  if ( *((_DWORD *)this + 979) == -1 )
  {
    v4 = GameClient::FlyweightManager::Instance();
    Flyweight = GameClient::FlyweightManager::GetFlyweight(v4, 0xFFFFFFFF);
    v6 = GameClient::FlyweightManager::Instance();
    v7 = GameClient::FlyweightManager::GetFlyweight(v6, a2);
    if ( !v7 || !Flyweight || !GameClient::Robot::IsMatchArmor(Flyweight, v7) )
      CREStatic::SetText(*((CREStatic **)this + 972), word_10322F34);
  }
  v19 = 0;
  v17 = &CREControl `RTTI Type Descriptor';
  v16 = 0;
  v15 = 12;
  *((_DWORD *)this + 980) = a2;
  Control = CREDialog::GetControl(this, v15);
  v18 = 0;
  v9 = _RTDynamicCast(Control, v15, v16, v17);
  v10 = (const char *)std::string::c_str(a2 + 176);
  v11 = atow(v10);
  retaddr = v14;
  std::wstring::wstring(v14, v11);
  CPictureLabel::ChangeTexture(v9, v14[0], v14[1], v14[2], v14[3], v15, v16, v17, v18);
  CRobotRoofUI::RefreshSuiteStatus(this);
  CRobotRoofUI::RefreshEquipCount(this);
  v12 = *((_DWORD *)this + 998);
  if ( v12 && *((_DWORD *)this + 1003) != -1 )
    CRobotRoofUI::UnSelectCell(v12, *((_DWORD *)this + 1003));
  v13 = (CREStatic *)*((_DWORD *)this + 972);
  v19 = word_10322F2C;
  *((_DWORD *)this + 1007) = -1;
  *((_DWORD *)this + 998) = 0;
  CREStatic::SetText(v13, v19);
}
