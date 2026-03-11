/*
 * func-name: sub_10212C80
 * func-address: 0x10212c80
 * callers: 0x10012cd8
 * callees: 0x10001181, 0x10011a4f, 0x10017fe9, 0x102c8d6c, 0x102c9d62
 */

void __stdcall sub_10212C80(int a1)
{
  Outpop::Message::Message *v1; // ecx
  Outpop::Message::Message *v2; // ecx
  Outpop::Message::Message *v3; // ecx
  const char *v4; // eax
  size_t v5; // eax
  int v6; // eax
  _BYTE *v7; // ecx
  const char *v8; // eax
  size_t v9; // eax
  int v10; // eax
  wchar_t v11; // [esp-4h] [ebp-20Ch]
  wchar_t v12; // [esp-4h] [ebp-20Ch]
  Outpop::Utility::Ref_Object *v13; // [esp+10h] [ebp-1F8h] BYREF
  bool v14; // [esp+17h] [ebp-1F1h]
  _BYTE v15[4]; // [esp+18h] [ebp-1F0h] BYREF
  _BYTE v16[28]; // [esp+1Ch] [ebp-1ECh] BYREF
  _BYTE v17[136]; // [esp+38h] [ebp-1D0h] BYREF
  _BYTE v18[28]; // [esp+C0h] [ebp-148h] BYREF
  _BYTE v19[28]; // [esp+DCh] [ebp-12Ch] BYREF
  _BYTE v20[28]; // [esp+F8h] [ebp-110h] BYREF
  _BYTE v21[28]; // [esp+114h] [ebp-F4h] BYREF
  wchar_t Buffer[100]; // [esp+130h] [ebp-D8h] BYREF
  int v23; // [esp+204h] [ebp-4h]

  v1 = *(Outpop::Message::Message **)Event::GetAckMessage(a1, &v13);
  v23 = 0;
  Outpop::Message::Message::reset_to_data(v1);
  v23 = -1;
  if ( v13 )
    Outpop::Utility::Ref_Object::release(v13);
  v2 = *(Outpop::Message::Message **)Event::GetRequestMessage(a1, &v13);
  v23 = 1;
  Outpop::Message::Message::reset_to_data(v2);
  v23 = -1;
  if ( v13 )
    Outpop::Utility::Ref_Object::release(v13);
  std::string::string(v21);
  v23 = 2;
  Event::GetRequestMessage(a1, &v13);
  LOBYTE(v23) = 3;
  sub_10001181((int)v15);
  sub_10017FE9((int)v21);
  LOBYTE(v23) = 2;
  if ( v13 )
    Outpop::Utility::Ref_Object::release(v13);
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>(
    v17,
    v21,
    3,
    1);
  LOBYTE(v23) = 4;
  std::string::string(v20);
  LOBYTE(v23) = 5;
  std::operator>><char>(v17, v20);
  v3 = *(Outpop::Message::Message **)Event::GetAckMessage(a1, &v13);
  LOBYTE(v23) = 6;
  v14 = Outpop::Message::Message::get_result(v3) == 0;
  LOBYTE(v23) = 5;
  if ( v13 )
    Outpop::Utility::Ref_Object::release(v13);
  if ( v14 )
  {
    std::wstring::wstring(v18, L"ROBOTROOFUI_QUICKSUITESAVED");
    LOBYTE(v23) = 7;
    Precacher::GetText(v19, v18);
    LOBYTE(v23) = 9;
    std::wstring::~wstring(v18);
    v4 = (const char *)std::string::c_str(v20);
    v11 = (unsigned __int16)atow(v4);
    v5 = std::wstring::c_str(v19);
    sub_10011A4F(Buffer, v5, v11);
    std::wstring::wstring(v16, Buffer);
    LOBYTE(v23) = 10;
    v6 = CDlgMgr::Instance();
    CDlgMgr::ConfirmMessage(v6);
    LOBYTE(v23) = 9;
    std::wstring::~wstring(v16);
    v7 = v19;
  }
  else
  {
    std::wstring::wstring(v19, L"ROBOTROOFUI_QUICKSUITESAVE_FAILED");
    LOBYTE(v23) = 11;
    Precacher::GetText(v18, v19);
    LOBYTE(v23) = 13;
    std::wstring::~wstring(v19);
    v8 = (const char *)std::string::c_str(v20);
    v12 = (unsigned __int16)atow(v8);
    v9 = std::wstring::c_str(v18);
    sub_10011A4F(Buffer, v9, v12);
    std::wstring::wstring(v16, Buffer);
    LOBYTE(v23) = 14;
    v10 = CDlgMgr::Instance();
    CDlgMgr::ConfirmMessage(v10);
    LOBYTE(v23) = 13;
    std::wstring::~wstring(v16);
    v7 = v18;
  }
  LOBYTE(v23) = 5;
  std::wstring::~wstring(v7);
  LOBYTE(v23) = 4;
  std::string::~string(v20);
  LOBYTE(v23) = 2;
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::`vbase destructor'(v17);
  v23 = -1;
  std::string::~string(v21);
}
