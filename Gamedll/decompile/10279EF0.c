/*
 * func-name: sub_10279EF0
 * func-address: 0x10279ef0
 * callers: 0x1000ea6b
 * callees: 0x10011a4f, 0x102c9d62, 0x102c9ea2
 */

void __thiscall sub_10279EF0(CREStatic **this, int Format)
{
  size_t v3; // eax
  _BYTE v4[28]; // [esp+8h] [ebp-1D8h] BYREF
  _BYTE v5[28]; // [esp+24h] [ebp-1BCh] BYREF
  wchar_t Buffer[100]; // [esp+40h] [ebp-1A0h] BYREF
  wchar_t v7[100]; // [esp+108h] [ebp-D8h] BYREF
  int v8; // [esp+1DCh] [ebp-4h]

  memset(Buffer, 0, sizeof(Buffer));
  if ( Format <= 20 )
    sub_10011A4F(Buffer, (size_t)L"%d", Format);
  else
    sub_10011A4F(Buffer, (size_t)L"%d+", Format);
  std::wstring::wstring(v4, L"QUEUE_POS");
  v8 = 0;
  Precacher::GetText(v5, v4);
  LOBYTE(v8) = 2;
  std::wstring::~wstring(v4);
  memset(v7, 0, sizeof(v7));
  v3 = std::wstring::c_str(v5);
  sub_10011A4F(v7, v3, (wchar_t)Buffer);
  CREStatic::SetText(this[968], v7);
  v8 = -1;
  std::wstring::~wstring(v5);
}
