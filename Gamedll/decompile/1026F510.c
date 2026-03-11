/*
 * func-name: ?SetEstablishment@CEstablishmentUI@@QAEXK@Z_0
 * func-address: 0x1026f510
 * callers: 0x1000f119
 * callees: 0x1000adc6, 0x1000dafd, 0x1000dd69, 0x10011a4f, 0x102c9d62, 0x102c9ea8
 */

void __thiscall CEstablishmentUI::SetEstablishment(CEstablishmentUI *this, unsigned int a2)
{
  GameClient::EstabManager *v3; // eax
  struct GameClient::Establishment *Establishment; // edi
  char v5; // al
  struct CREControl *Control; // eax
  const wchar_t *Text; // eax
  const wchar_t *v8; // eax
  const wchar_t *v9; // eax
  const wchar_t *v10; // eax
  const wchar_t *v11; // eax
  const wchar_t *v12; // eax
  int v13; // ebx
  int v14; // [esp-4h] [ebp-120h]
  wchar_t Format[2]; // [esp+20h] [ebp-FCh] BYREF
  int v16; // [esp+24h] [ebp-F8h] BYREF
  _BYTE v17[24]; // [esp+28h] [ebp-F4h] BYREF
  wchar_t Buffer; // [esp+40h] [ebp-DCh] BYREF
  _BYTE v19[200]; // [esp+44h] [ebp-D8h] BYREF
  int v20; // [esp+118h] [ebp-4h]

  *((_DWORD *)this + 977) = a2;
  v3 = GameClient::EstabManager::Instance();
  Establishment = GameClient::EstabManager::GetEstablishment(v3, a2);
  if ( Establishment )
  {
    CREStatic::SetText(*((CREStatic **)this + 970), word_10321AE8);
    CREStatic::SetText(*((CREStatic **)this + 971), word_10321AF0);
    CREStatic::SetText(*((CREStatic **)this + 972), word_10321AF8);
    std::wstring::wstring(v17);
    v5 = *((_BYTE *)Establishment + 348);
    v20 = 0;
    if ( v5 )
    {
      GameClient::Establishment::GetChipInfo(Establishment, (enum BASE_TYPE *)Format, &v16);
      Control = CREDialog::GetControl(this, 2);
      _RTDynamicCast(Control, v14, 0, &CREControl `RTTI Type Descriptor');
      sub_10011A4F(&Buffer, (size_t)L"%d", Format[0]);
      Text = CREStatic::GetText(*((CREStatic **)this + 971));
      std::wstring::operator=(v17, Text);
      std::wstring::operator+=(v17, v19);
      v8 = (const wchar_t *)std::wstring::c_str(v17);
      CREStatic::SetText(*((CREStatic **)this + 971), v8);
      v9 = CREStatic::GetText(*((CREStatic **)this + 970));
      std::wstring::operator=(v17, v9);
      switch ( *(_DWORD *)Format )
      {
        case 1:
          std::wstring::operator+=(v17, &unk_10321B08);
          break;
        case 2:
          std::wstring::operator+=(v17, &unk_10321B10);
          break;
        case 3:
          std::wstring::operator+=(v17, &unk_10321B18);
          break;
        case 4:
          std::wstring::operator+=(v17, &unk_10321B20);
          break;
        case 5:
          std::wstring::operator+=(v17, &unk_10321B28);
          break;
        case 6:
          std::wstring::operator+=(v17, &unk_10321B30);
          break;
        default:
          break;
      }
      v10 = (const wchar_t *)std::wstring::c_str(v17);
      CREStatic::SetText(*((CREStatic **)this + 970), v10);
    }
    v11 = CREStatic::GetText(*((CREStatic **)this + 972));
    std::wstring::operator=(v17, v11);
    switch ( *((_DWORD *)Establishment + 27) )
    {
      case 2:
        std::wstring::operator+=(v17, "0WxQ");
        break;
      case 4:
        std::wstring::operator+=(v17, &unk_10321B40);
        break;
      case 8:
        std::wstring::operator+=(v17, &unk_10321B48);
        break;
    }
    v12 = (const wchar_t *)std::wstring::c_str(v17);
    CREStatic::SetText(*((CREStatic **)this + 972), v12);
    v13 = *((_DWORD *)Establishment + 90);
    CRECheckBox::SetChecked(*((CRECheckBox **)this + 974), (v13 & 1) != 0);
    CRECheckBox::SetChecked(*((CRECheckBox **)this + 975), (v13 & 2) != 0);
    CRECheckBox::SetChecked(*((CRECheckBox **)this + 976), (v13 & 0x20) != 0);
    v20 = -1;
    std::wstring::~wstring(v17);
  }
}
