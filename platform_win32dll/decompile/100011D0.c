/*
 * func-name: sub_100011D0
 * func-address: 0x100011d0
 * callers: none
 * callees: 0x10001080, 0x10019750
 */

char *__thiscall sub_100011D0(char *this, int a2)
{
  int v3; // eax
  const CHAR *v4; // eax
  CHAR Filename[260]; // [esp+14h] [ebp-114h] BYREF
  int v7; // [esp+124h] [ebp-4h]

  std::string::string(this);
  v7 = 1;
  std::string::string(this + 28);
  if ( a2 )
    std::string::operator=(this + 28, a2);
  GetModuleFileNameA(0, Filename, 0x104u);
  std::string::operator=(this, Filename);
  v3 = std::string::rfind(this, 46, std::string::npos);
  std::string::replace(this, v3 + 1, 3, &unk_1001B318);
  v4 = (const CHAR *)std::string::c_str(this);
  DeleteFileA(v4);
  sub_10001080((int)this);
  return this;
}
