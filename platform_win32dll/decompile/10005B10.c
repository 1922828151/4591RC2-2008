/*
 * func-name: sub_10005B10
 * func-address: 0x10005b10
 * callers: none
 * callees: 0x100054c0
 */

int sub_10005B10(int a1, ...)
{
  int v1; // edi
  int v3; // [esp+28h] [ebp+8h] BYREF
  va_list va; // [esp+28h] [ebp+8h]
  int v5; // [esp+2Ch] [ebp+Ch]
  int v6; // [esp+30h] [ebp+10h]
  int v7; // [esp+34h] [ebp+14h]
  int v8; // [esp+38h] [ebp+18h]
  int v9; // [esp+3Ch] [ebp+1Ch]
  int v10; // [esp+40h] [ebp+20h]
  va_list va1; // [esp+44h] [ebp+24h] BYREF

  va_start(va1, a1);
  va_start(va, a1);
  v3 = va_arg(va1, _DWORD);
  v5 = va_arg(va1, _DWORD);
  v6 = va_arg(va1, _DWORD);
  v7 = va_arg(va1, _DWORD);
  v8 = va_arg(va1, _DWORD);
  v9 = va_arg(va1, _DWORD);
  v10 = va_arg(va1, _DWORD);
  sub_100054C0((int)va);
  sub_100054C0((int)va1);
  std::string::operator+=(va1, 92);
  v1 = std::string::length(va1);
  if ( !std::string::compare((int *)va, 0, v1, va1) )
    std::string::substr((int *)va, a1, v1, std::string::npos);
  else
    std::string::string(a1, (int *)va);
  std::string::~string((int *)va);
  std::string::~string(va1);
  return a1;
}
