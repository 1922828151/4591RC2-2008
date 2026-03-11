/*
 * func-name: ?SetBody@CRobotRoofUI@@AAEXKPBVFProductInfo@GameClient@@@Z_0
 * func-address: 0x10285000
 * callers: 0x10016009
 * callees: 0x10001e60, 0x100026e4, 0x10006947, 0x10007806, 0x1000a506, 0x1000ab82, 0x1000aff6, 0x10010389, 0x100103c5, 0x100104e2, 0x10011bb2, 0x1001241d, 0x10012c29, 0x100151d6, 0x102c8d6c, 0x102c9d50, 0x102c9ea8
 */

void __thiscall CRobotRoofUI::SetBody(CRobotRoofUI *this, wchar_t *a2, const struct GameClient::FProductInfo *a3)
{
  GameClient::FuncManager *v4; // eax
  struct CREControl *Control; // eax
  int v6; // edi
  const char *v7; // eax
  const wchar_t *v8; // eax
  GameClient::FlyweightManager *v9; // eax
  struct CREControl *v10; // eax
  int v11; // eax
  int v12; // edi
  unsigned int i; // ebx
  void *v14; // ecx
  GameClient::ProductManager *v15; // eax
  struct GameClient::FProductInfo *ProductInfo; // eax
  _DWORD *v17; // ecx
  void ***v18; // eax
  const wchar_t **v19; // eax
  const wchar_t *v20; // edi
  GameClient::FlyweightManager *v21; // eax
  struct GameClient::Flyweight *Flyweight; // eax
  struct GameClient::FSystemPart *v23; // ebp
  GameClient::FlyweightManager *v24; // eax
  struct GameClient::FSystemPart *v25; // eax
  unsigned int *v26; // eax
  int v27; // ecx
  CREStatic *v28; // ecx
  int v29; // [esp+10h] [ebp-68h] BYREF
  int v30; // [esp+14h] [ebp-64h]
  int v31; // [esp+18h] [ebp-60h]
  int v32; // [esp+1Ch] [ebp-5Ch]
  int v33; // [esp+20h] [ebp-58h]
  int v34; // [esp+24h] [ebp-54h]
  void ***v35; // [esp+28h] [ebp-50h]
  void ***v36; // [esp+2Ch] [ebp-4Ch]
  wchar_t *v37; // [esp+30h] [ebp-48h]
  char v39; // [esp+4Ch] [ebp-2Ch] BYREF
  void *v40; // [esp+50h] [ebp-28h]
  int v41; // [esp+54h] [ebp-24h]
  int v42; // [esp+58h] [ebp-20h]
  char v43[4]; // [esp+5Ch] [ebp-1Ch] BYREF
  void *v44; // [esp+60h] [ebp-18h]
  int v45; // [esp+64h] [ebp-14h]
  int v46; // [esp+68h] [ebp-10h]
  int v47; // [esp+74h] [ebp-4h]
  int *retaddr; // [esp+78h] [ebp+0h]
  struct GameClient::FProductInfo *v49; // [esp+7Ch] [ebp+4h]

  v37 = (wchar_t *)*((_DWORD *)this + 1006);
  v4 = GameClient::FuncManager::Instance();
  if ( GameClient::FuncManager::GetFunction(v4, (unsigned int)v37) )
  {
    v37 = 0;
    v35 = &CREControl `RTTI Type Descriptor';
    v34 = 0;
    v33 = 11;
    *((_DWORD *)this + 979) = a2;
    Control = CREDialog::GetControl(this, v33);
    v36 = 0;
    v6 = _RTDynamicCast(Control, v33, v34, v35);
    v7 = (const char *)std::string::c_str(a2 + 88);
    v8 = atow(v7);
    retaddr = &v29;
    std::wstring::wstring(&v29, v8);
    CPictureLabel::ChangeTexture(v6, v29, v30, v31, v32, v33, v34, v35, v36);
    if ( *((_DWORD *)this + 980) == -1
      || !CRobotRoofUI::MatchingBodyArmor(this, *((_DWORD *)this + 979), *((_DWORD *)this + 980)) )
    {
      v37 = a2;
      v9 = GameClient::FlyweightManager::Instance();
      GameClient::FlyweightManager::GetFlyweight(v9, (unsigned int)v37);
      v37 = 0;
      v36 = &CPictureLabel `RTTI Type Descriptor';
      v35 = &CREControl `RTTI Type Descriptor';
      v34 = 0;
      v33 = 12;
      *((_DWORD *)this + 980) = -1;
      v10 = CREDialog::GetControl(this, v33);
      v11 = _RTDynamicCast(v10, v33, v34, v35);
      v36 = 0;
      retaddr = &v29;
      v12 = v11;
      std::wstring::wstring(&v29, &unk_10322F30);
      CPictureLabel::ChangeTexture(v12, v29, v30, v31, v32, v33, v34, v35, v36);
      v44 = 0;
      v45 = 0;
      v46 = 0;
      v47 = 0;
      GameClient::Func_Receive::GetProductList((int)v43);
      for ( i = 0; ; ++i )
      {
        v14 = v44;
        if ( !v44 || i >= (v45 - (int)v44) >> 2 )
          break;
        v37 = (wchar_t *)*((_DWORD *)v44 + i);
        v15 = GameClient::ProductManager::Instance();
        ProductInfo = GameClient::ProductManager::GetProductInfo(v15, (unsigned int)v37);
        v49 = ProductInfo;
        if ( ProductInfo && *((_DWORD *)ProductInfo + 28) == 2 )
        {
          v40 = 0;
          v41 = 0;
          v42 = 0;
          v17 = v44;
          LOBYTE(v47) = 1;
          if ( !v44 || i >= (v45 - (int)v44) >> 2 )
          {
            _invalid_parameter_noinfo();
            v17 = v44;
          }
          v18 = (void ***)v17[i];
          v37 = (wchar_t *)&v39;
          v36 = v18;
          GameClient::ProductManager::Instance();
          GameClient::ProductManager::GetFlyweightID((char)v36, (int)v37);
          v19 = (const wchar_t **)v40;
          if ( !v40 || !((v41 - (int)v40) >> 2) )
          {
            _invalid_parameter_noinfo();
            v19 = (const wchar_t **)v40;
          }
          v20 = *v19;
          v37 = (wchar_t *)*((_DWORD *)this + 979);
          v21 = GameClient::FlyweightManager::Instance();
          Flyweight = GameClient::FlyweightManager::GetFlyweight(v21, (unsigned int)v37);
          v37 = (wchar_t *)v20;
          v23 = Flyweight;
          v24 = GameClient::FlyweightManager::Instance();
          v25 = GameClient::FlyweightManager::GetFlyweight(v24, (unsigned int)v37);
          if ( v25 && v23 && GameClient::Robot::IsMatchArmor(v23, v25) )
          {
            v26 = (unsigned int *)v40;
            if ( !v40 || !((v41 - (int)v40) >> 2) )
            {
              _invalid_parameter_noinfo();
              v26 = (unsigned int *)v40;
            }
            CRobotRoofUI::SetArmor(this, *v26, v49);
            if ( v40 )
              operator delete(v40);
            v14 = v44;
            v40 = 0;
            v41 = 0;
            v42 = 0;
            break;
          }
          LOBYTE(v47) = 0;
          if ( v40 )
            operator delete(v40);
          v40 = 0;
          v41 = 0;
          v42 = 0;
        }
      }
      v47 = -1;
      if ( v14 )
        operator delete(v14);
      v44 = 0;
      v45 = 0;
      v46 = 0;
    }
    CRobotRoofUI::RefreshSuiteStatus(this);
    CRobotRoofUI::RefreshEquipCount(this);
    v27 = *((_DWORD *)this + 998);
    if ( v27 && *((_DWORD *)this + 1003) != -1 )
      CRobotRoofUI::UnSelectCell(v27, *((_DWORD *)this + 1003));
    v28 = (CREStatic *)*((_DWORD *)this + 972);
    v37 = word_10322F2C;
    *((_DWORD *)this + 1007) = -1;
    *((_DWORD *)this + 998) = 0;
    CREStatic::SetText(v28, v37);
  }
}
