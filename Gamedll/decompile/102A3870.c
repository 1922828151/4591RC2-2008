/*
 * func-name: ?SelectItem@CVehicleRoofUI@@IAEXK@Z_0
 * func-address: 0x102a3870
 * callers: 0x10009494
 * callees: 0x1000aff6, 0x10010389, 0x1001241d, 0x10012c29, 0x102c8d6c
 */

void __thiscall CVehicleRoofUI::SelectItem(CVehicleRoofUI *this, unsigned int a2)
{
  int v3; // ecx
  GameClient::FlyweightManager *v4; // eax
  struct GameClient::Flyweight *Flyweight; // eax
  GameClient::ProductManager *v6; // eax
  struct GameClient::FProductInfo *ProductInfo; // edi
  const char *v8; // eax
  const wchar_t *v9; // eax
  int v10; // ecx
  const char *v11; // eax
  const wchar_t *v12; // eax
  _DWORD v13[6]; // [esp-1Ch] [ebp-54h] BYREF
  _BYTE *v14; // [esp-4h] [ebp-3Ch]
  unsigned int v15; // [esp+0h] [ebp-38h]
  _BYTE v16[28]; // [esp+10h] [ebp-28h] BYREF
  int v17; // [esp+34h] [ebp-4h]

  v3 = *((_DWORD *)this + 975);
  *((_DWORD *)this + 977) = a2;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 128))(v3, 1);
  v4 = GameClient::FlyweightManager::Instance();
  Flyweight = GameClient::FlyweightManager::GetFlyweight(v4, a2);
  if ( Flyweight )
  {
    v15 = *((_DWORD *)Flyweight + 27);
    v6 = GameClient::ProductManager::Instance();
    ProductInfo = GameClient::ProductManager::GetProductInfo(v6, v15);
    if ( ProductInfo )
    {
      CMultiLineStatic::DeleteAllLine(*((CMultiLineStatic **)this + 972));
      v8 = (const char *)std::string::c_str((char *)ProductInfo + 148);
      v9 = atow(v8);
      std::wstring::wstring(v16, v9);
      v15 = 0;
      v14 = v16;
      v10 = *((_DWORD *)this + 972);
      v17 = 0;
      CMultiLineStatic::AddLine(v10, v16, 0);
      v17 = -1;
      std::wstring::~wstring(v16);
      v15 = 0;
      v11 = (const char *)std::string::c_str((char *)ProductInfo + 176);
      v12 = atow(v11);
      std::wstring::wstring(v13, v12);
      CPictureLabel::ChangeTexture(*((_DWORD *)this + 970), v13[0], v13[1], v13[2], v13[3], v13[4], v13[5], v14, v15);
    }
  }
}
