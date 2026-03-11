/*
 * func-name: ?Tick@CPowerTransportUI@@UAEXM@Z_0
 * func-address: 0x102793f0
 * callers: 0x10017823
 * callees: 0x10006947, 0x1000a506, 0x10011a4f, 0x102c9d62, 0x102c9fe0
 */

void __thiscall CPowerTransportUI::Tick(CPowerTransportUI *this, float a2)
{
  GameClient::FuncManager *v3; // eax
  struct GameClient::Function *Function; // eax
  int v5; // esi
  const wchar_t *v6; // eax
  unsigned int v7; // [esp+8h] [ebp-10Ch]
  float v8; // [esp+1Ch] [ebp-F8h]
  _BYTE v9[28]; // [esp+20h] [ebp-F4h] BYREF
  wchar_t Buffer[100]; // [esp+3Ch] [ebp-D8h] BYREF
  float v11; // [esp+110h] [ebp-4h]

  v7 = *((_DWORD *)this + 968);
  v3 = GameClient::FuncManager::Instance();
  Function = GameClient::FuncManager::GetFunction(v3, v7);
  if ( Function )
  {
    v8 = *((double *)Function + 6);
    sub_10011A4F(Buffer, (size_t)L"%d/%d", (int)v8);
    CREStatic::SetText(*((CREStatic **)this + 969), Buffer);
    v5 = (int)(*(float *)&GSeconds - *((float *)this + 971)) % 4;
    std::wstring::wstring(v9, &unk_103228F4);
    v11 = 0.0;
    if ( v5 > 0 )
    {
      do
      {
        std::wstring::operator+=(v9, 46);
        --v5;
      }
      while ( v5 );
    }
    v6 = (const wchar_t *)std::wstring::c_str(v9);
    CREStatic::SetText(*((CREStatic **)this + 970), v6);
    v11 = NAN;
    std::wstring::~wstring(v9);
  }
  CTYDialog::Tick(this, a2);
}
